#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll mod = 1000000007;

void solve() {
 ll am, bm, cm, tm, a, b, c;
 cin >> am >> bm >> cm >> tm >> a >> b>> c;
 
 if(a >= am && b >= bm && c >= cm && (a+b+c) >= tm) {
  cout << "YES\n";
 } else {
  cout << "NO\n";
 }
}

int main() {
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);

 ll t;
 cin >> t;
 while(t--) {
  solve();
 }

 return 0;
}
