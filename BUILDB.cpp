#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll mod = 1000000007;

void solve() {
 ll n, r;
 cin >> n >> r;

 ll a[n], b[n];
 for(ll i = 0; i < n; i++) {
  cin >> a[i];
 }
 for(ll i = 0; i < n; i++) {
  cin >>b[i];
 }

 ll M = 0;
 ll tsum = 0;
 
 for(ll i = 0; i < n; i++) {
  tsum += b[i];
  if(tsum > M) {
   M = tsum;
  }
  if(i < n-1) {
   tsum = max(ll(0), tsum - r*(a[i+1]-a[i]));
  }
 }
  if(tsum > M) {
   M = tsum;
  }

 cout << M <<'\n';
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
