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
		ll k, in; cin >> k;
		
		ll tg = k-2;
		
		map <ll, bool> mp;
		
		f(i, 0, k) {
			cin >> in;
			
			if (tg%in==0 && mp.count(in)==0) {
				mp[in] = true;
			}
		}
		
	for (auto it : mp) {
			if (tg % it.first == 0 && mp.count(tg/it.first) > 0) {
				cout << it.first << " " << tg/it.first << endl;
				break;
			}
		}
	}
}