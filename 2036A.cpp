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
		ll n, inp; cin >> n;
		
		vector<ll> v;
		
	  f (i, 0, n) {
	  	cin >> inp;
	  	v.pb(inp);
	  }
	  
	  bool ok = true;
	  
	  for (int i = 1; i < n; i++) {
	  	if (abs(v[i] - v[i-1]) != 5 && abs(v[i] - v[i-1]) != 7) {
	  		ok = false;
	  	}
	  }
	 
	 if (ok) {
	 	cout << "YES" << endl;
	 } else {
	 	cout << "NO" << endl;
	 }
	}
}