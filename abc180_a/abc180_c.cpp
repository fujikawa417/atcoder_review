#include<bits/c++.h>

using namespace std;

typedef long long ll;

vector<ll> divisor(ll n){
	vector<ll> res;
	for(ll i=1;i*i <= n;i++){
		if(n % i == 0){
			res.push_back(i);
			if(i*i != n) res.push_back(n/i);
		}
	}
	sort(res.begin(),res.end());
	return res;
}

int main(){
	ll n;
	const auto &res = divisor(n);
	for(int i=0;i < res.size();i++){
		cout << res[i] << endl;
	}

	return 0;
}
