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
  	ll w, b;
  	cin >> w >> b;
  	
  	ll n = ((1LL*sqrt((8*(w+b))+1)-1))/2;
  	
  	ll ans = 0;
  	
  	for (ll i = 1; i <= n && (w>=i || b>=i); i++) {
  		if(w < b) {
  			if (w <= i) {
  				w-=i;
  			} else {
  				b-=i;
  			}
  		} else {
  			if (b <= i) {
  				b-=i;
  			} else {
  				w-=i;
  			}
  		}
  		
  		ans++;
  	}
  	
  	cout << ans << endl;
  }
}
