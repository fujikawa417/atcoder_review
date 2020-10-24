#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
    ll x,y,a,b;
    cin >> x >> y >> a >> b;
    ll m = 0;
    while((double)a*x <= 2e18 && a*x <=x+b && a*x<y){
        x *= a;
        m++;
    }
    cout << m + (y - 1 - x)/b << endl;
    return 0;
}