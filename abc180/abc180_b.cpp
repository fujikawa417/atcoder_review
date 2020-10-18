#include<bits/stdc++.h>
#define ld long double

using namespace std;

int main(){
	cout << fixed << setprecision(15);
	int n;
	cin >> n;
	vector<ld> x(n);
	for(int i=0;i < n;i++){
		cin >> x[i];
	}
	ld dist1 = 0,dist2 = 0,dist3 = 0;

	for(auto a: x){
		dist1 += abs(a);
	}

	for(auto a: x){
		dist2 += a*a;
	}

	dist2 = sqrt(dist2);

	for(auto a: x){
		dist3 = max(dist3,abs(a));
	}

	cout << dist1 << endl;
	cout << dist2 << endl;
	cout << dist3 << endl;
	return 0;
}

