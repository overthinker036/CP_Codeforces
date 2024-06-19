#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define umap unordered_map
#define f(i, x, n) for (ll i = x; i < n; i++)
#define endl '\n'
#define llllmaptester(m); for (auto it : m) cout << it.first << ": " << it.second << endl;
#define optimize() ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

int main() {
	optimize();

	ll t;
	cin >> t;

	while (t--) {
		ll n; cin >> n;
		
		ll arr[n];
		
		set <ll> s;
		
		f(i, 0, n) {
			cin >> arr[i];
			s.insert(arr[i]);
		}
		
		char ans[n];
		
		if (s.size() == 1) {
			cout << "NO" << endl;
		} else if (s.size() == 2) {	
			ll sm = *(s.begin());
			
			ll smcnt = 0, lrcnt = 0;
			
			for (auto it : arr) {
		 	 if (it == sm) {
			  	smcnt++;
			  } else {
			 	 lrcnt++;
			  }
			}
			
			if (smcnt == 1) {
			  ans[0] = 'B';
			  ans[1] = 'B';
			  
			  for (ll i = 2; i < n; i++) {
			  	ans[i] = 'R';
			  }
			} else if (lrcnt == 1) {
			  ans[n-1] = 'B';
			  ans[n-2] = 'B';
			  
			  for (ll i = 0; i < n-2; i++) {
			  	ans[i] = 'R';
			  }
			} else {
			  ll target = *(s.begin());
			  
			  bool inserted = false;
			  
			  for (ll i = 0; i < n; i++) {
			  	if (arr[i] == target) {
			  		ans[i] = 'B';
			  	} else {
			  		if (!inserted) {
			  			ans[i] = 'B';
			  			inserted = true;
			  		} else {
			  			ans[i] = 'R';
			  		}
			  	}
			  }
			}
		  
		  cout << "YES" << endl;
		  
		  f(i, 0, n) cout << ans[i];
		  cout << endl;
		  
		} else {
		  ll target = *(s.begin());
		  		  
			f(i, 0, n) {
				if (arr[i] == target) {
					ans[i] = 'B';
				} else {
					ans[i] = 'R';
				}
			}
			
			cout << "YES" << endl;
			f(i, 0, n) cout << ans[i];
		  cout << endl;
		}
	}
}