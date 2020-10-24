#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>

using namespace std;
using ll = long long;

int main(){
  ll n;
  cin >> n;
  if(n % 2 != 0 || n < 8) {
    cout << -1 << endl;
    return 0;
  }else{
    ll x = 1;
    for(ll i=1;i <= (ll)floorl(log2(n)/log2(3));i++){
      x *= 3;
      ll y = 1;
      for(ll j=1;j <= (ll)floorl(log2(n)/log2(5));j++){
        y *= 5;
        if(x + y == n) {
          cout << i << " " << j << endl;
          return 0;
        }
      }
    }
  }
  cout << -1 << endl;
  return 0;
}