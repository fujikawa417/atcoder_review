#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int P[8] = {1,2,3,4,5,6,7,8};

int main(){
  int n,k;
  cin >> n >> k;
  vector<vector<int>> t(n,vector<int>(n));
  for(int i=0;i < n;i++){
    for(int j=0;j < n;j++) cin >> t[i][j];
  }
  long long ans = 0;

  do{
    long long cost = 0;
    cost += t[0][P[1]-1];
    for(int i=2;i < n;i++){
      cost += t[P[i-1]-1][P[i]-1];
    }
    cost += t[P[n-1]-1][0];
    if(cost == k) ans++;
  }while(next_permutation(P+1,P+n));
  
  cout << ans << endl;
  return 0;
}