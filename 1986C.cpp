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
		ll n, m, in; cin >> n >> m;
		
		string s; cin >> s;
		
		set <ll> ind;
		
		f(i, 0, m) {
			cin >> in;
			ind.insert(in);
		}
		
		vector <ll> indv;
		
		for (auto it : ind) indv.pb(it);
		
		string c; cin >> c;
		
		sort(c.begin(), c.end());
		sort(indv.begin(), indv.end());
		
		f (i, 0, indv.size()) {
			s[indv[i]-1] = c[i];
		}
	  
	  cout << s << endl;
	}
}