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
	
	ll t; cin >> t;
	
	while (t--) {
		ll n, m, r, c;
	  cin >> n >> m >> r >> c;
	
	  cout << (m-c) + (n-r)*m + (n-r)*(m-1) << endl;
	}
}