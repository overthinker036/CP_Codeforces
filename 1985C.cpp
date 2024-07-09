#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define ull unsigned long long
#define umap unordered_map
#define f(i, x, n) for (ll i = x; i < n; i++)
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

int main() {
	optimize();

	ll t;
	cin >> t;

	while (t--) {
    ll n; cin >> n;
    
    if (n == 1) { 
      ll x; cin >> x;
      
      if (x == 0) {
      	cout << 1 << endl;
      } else {
      	cout << 0 << endl;
      }
  	} else {
  	  ll arr[n];
  	  
  	  ll sums[n], maxx[n];
  	  
  	  f(i, 0, n) {
  	  	cin >> arr[i];
  	  	
  	  	if (i == 0) {
  	  	  sums[i] = arr[i];
  	  	  maxx[i] = arr[i];
  	  	} else {
  	  		sums[i] = sums[i-1] + arr[i];
  	  		maxx[i] = max(maxx[i-1], arr[i]);
  	  	}
  	  }
  	  
  	  ll ans = 0;
  	  
  	  f(i, 0, n) {
  	  	if (sums[i]-maxx[i]==maxx[i]) {
  	  		ans++;
  	  	} 
  	  }
  	  
  	  cout << ans << endl;
  	} 
	}
}