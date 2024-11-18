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
		
		ll arr[n];
		
		map <ll, ll> m;
		
		for (ll i = 0; i < n; i++) {
			  cin >> arr[i];
			  m[arr[i]]++;
		}
		
		ll max = LLONG_MIN;
		
		for (auto it : m) {
			if (it.second > max) max = it.second;
		}
		
    cout << n-max << endl;
	}
}