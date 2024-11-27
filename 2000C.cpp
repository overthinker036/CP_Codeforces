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
	  ll n;
	  cin >> n;
	  
	  ll arr[n];
	  
	  f(i, 0, n) cin >> arr[i];
	  
	  ll m;
	  cin >> m;
	  
	  while (m--) {
	  	string s;
	  	cin >> s;
	  	
	  	if (s.size() != n) {
	  		cout << "NO" << endl;
	  	} else {
	  		bool ok = true;
	  		unordered_map<char, ll> mp;
	  		unordered_map<ll, char> mp2;
	  		
	  		for (ll i = 0; i < n; i++) {
	  			if (mp.count(s[i]) == 0 && mp2.count(arr[i]) ==0) {
	  				mp[s[i]] = arr[i];
	  				mp2[arr[i]] = s[i];
	  			} else if (mp[s[i]] == arr[i] && mp2[arr[i]]==s[i]) {
	  				continue;
	  			} else {
	  				ok = false;
	  				break;
	  			}
	  		}
	  		 
	  		ok?cout << "YES" << endl:cout<<"NO"<<endl;
	  	}
	  }
	}
}