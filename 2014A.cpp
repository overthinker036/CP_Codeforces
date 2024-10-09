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
	
	int t;
	cin >> t;
	
	while (t--) {
		int n, k, inp;
		
		cin >> n >> k;
		
		int goldCount = 0, ans = 0;
	  
	  f (i, 0, n) {
	    cin >> inp;
	    
	    if (inp >= k) {
	    	goldCount += inp;
	    } else if (inp == 0 && goldCount > 0) {
	    goldCount--;
	    ans++;
	    }
	  }
	  
	  cout << ans << endl;
	}
}