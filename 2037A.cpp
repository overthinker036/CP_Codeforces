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
		
		ll inp;
		
		map <ll, ll> mp;
		
		f (i, 0, n) {
			cin >> inp;
			
			mp[inp]++;
		}
		
		ll ans = 0;
		
		for (auto it : mp) {
			ans += it.second/2;
		}
		
		cout << ans << endl;
	}
}