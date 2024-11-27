#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define ull unsigned long long
#define umap unordered_map
#define f(i, x, n) for (ll i = x; i < n; i++)
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

bool matches (ll n, ll m) {
	if (n == m) return true;
	if (m > n) return false;
  if (m < n) {
  	if (n%3!=0) {
  		return false;
  	} else {
  		return matches(n/3, m) || matches((2*n)/3, m);
  	}
  }
}

int main() {
	optimize();
	
	ll t; cin >> t;
	
	while (t--) {
	  ll n, m;
	  cin >> n >> m;
	  
	  matches(n, m)?cout << "YES" << endl:cout << "NO" << endl;
	}
}