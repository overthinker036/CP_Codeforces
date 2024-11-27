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

	ll n, x, d;
	cin >> n;
	
	vector<pair<ll, ll>> v;
	
	f(i, 0, n) {
		cin >> x >> d;
	  
	  v.pb({x, x+d});
	}
	
	f(i, 0, n) {
		v.pb({v[i].second, v[i].first});
	}
	
	sort(v.begin(), v.end());
	
	bool found = false;
	
	for (ll i = 0; i < v.size()-1; i++) {
		if (v[i] == v[i+1]) {
			found = true;
			break;
		}
	}

	found?cout <<"YES"<<endl : cout << "NO" << endl;
}