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

	ll n, ans = 0; cin >> n;
	
	bool in;
	
	vector<ll>pos;
	
	f(i, 0, n) {
		cin >> in;
		
		if (in) {
			pos.pb(i);
			ans++;
		}
	}
	
	if (pos.size() == 0) {
		cout << 0 << endl;
	} else {
		ans = pos.size();
		
		for (ll i = 0; i < pos.size()-1; i++) {
			if (pos[i+1]-pos[i] > 1) {
				ans++;
			}
		}
		
		cout << ans << endl;
	}
}