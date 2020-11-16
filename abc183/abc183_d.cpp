#include<iostream>
#include<vector>

using namespace std;

int main(){
  long long n,w;
  cin >> n >> w;
  vector<long long> d(200005,0);
  for(int i=0;i < n;i++){
    long long s,t,p;
    cin >> s >> t >> p;
    d[s] += p;
    d[t] -= p;
  }
  for(int i=0;i < 200005;i++) d[i+1] += d[i];

  bool flag = true;

  for(int i=0;i < 200005;i++) {
    if(d[i] > w) flag = false;
  }
  if(flag) cout << "Yes" << endl;
  else cout << "No" << endl;
  return 0;
}