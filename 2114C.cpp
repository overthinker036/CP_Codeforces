#include <bits/stdc++.h>
#define ll long long
#define ull unsigned ll
#define pb push_back
#define umap unordered_map
#define f(i, x, n) for (ll i = x; i < n; i++)
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

int main() {
	optimize();
   
  int t;
  cin >> t;
  
  while(t--) {
    ll n;
    cin >> n;
    
    ll a[n];
    
    f(i, 0, n) cin >> a[i];
    
    ll ans = 1;
    
    for(ll i = 0; i < n-1; i++) {
    	if (a[i+1]-a[i] > 1) {
    		ans++;
    	} else {
    		ll j = i+2;
    		
    		while(j < n && (a[j]-a[i]) <= 1) {
    			j++;
    		}
    		
    		if(j <= n-1){
    			ans++;
    		}
    		
    		i=j-1;
    	}
    }
    
    cout << ans << endl;
  }
}