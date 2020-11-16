#include<iostream>
#include<iomanip>

using namespace std;
using ld = long double;

int main(){
  ld sx,sy,gx,gy;
  cin >> sx >> sy >> gx >> gy;
  ld l = (gx - sx)/(gy + sy);
  ld ans = sx + sy*l;
  cout << fixed << setprecision(15);
  cout << ans << endl;
  return 0;
}