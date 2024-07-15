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
	
  map <ll, ll> mp;
  
  ll cnt = 1;
  
  for (ll i = 0; i < 6; i++) {
  	for (ll j = 1; j <= 9; j++) {
  		mp[j*pow(10, i)] = cnt++;
  	}
  }
  
  ll t;
	cin >> t;

	while (t--) {
		ll n; cin >> n;
		
		if (mp.count(n)) {
			cout << mp[n] << endl;
		} else {
			if (n > 900000) {
				cout << mp[900000] << endl;
			} else {
				ll k = 0, temp = n;
				
				while (temp > 9) {
				  k++;
				  temp/=10;	
				}
				
				cout << mp[temp*pow(10, k)] << endl;
	  	}
  	}
	}
}