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

	ll x; cin >> x;
	
  vector<bool> bin;
  
  ll ans = 0;
  
	while (x > 0) {
		if (x%2 == 1) ans++;
		x/=2;
	}
  
  cout << ans << endl;
}