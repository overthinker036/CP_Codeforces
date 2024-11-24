#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define ull unsigned long long
#define umap unordered_map
#define f(i, x, n) for (ll i = x; i < n; i++)
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

bool exists (vector<ll>& v, ll n) {
	for (auto it : v) 
	{
		if (it == n) return true;
	}
	
	return false;
}

int main() {
	optimize();

	ll t;
	cin >> t;

	while (t--) {
		ll n;
		cin >> n;
		
		vector<ll> mods, ans;
		
		mods.pb(0);
		ans.pb(1);
		
	  ll elem = 1;
	  
		for (ll i = 2; i <= n; i++) {
			elem++;
			
			while (exists(mods, elem%i)) {
				elem++;
			}
			
			mods.pb(elem%i);
			ans.pb(elem);
		}
		
		for (auto it : ans) {
			cout << it << " ";
		}
		
		cout << endl;
	}
}