#include <bits/stdc++.h>
#include <unordered_map>
#define ll long long
#define pb push_back
using namespace std;

int main() {
	ll t; cin >> t;
	
	while (t--) {
		ll n; cin >> n;
		
		string s;
		cin >> s;
		
		ll z = 0, o = 0;
		
		for (auto it: s) {
			if (it == '0') {
				z++;
			} else if (it == '1') {
				o++;
			}
		}
		
		if (z == 0) {
			cout << "NO" << endl;
		} else if (z > o) {
			cout << "YES" << endl;
		} else {
			bool found = false;
			
			for (ll i = 0; i < n-1; i++) {
				if (s[i+1] != s[i]) {
					found = true;
					break;
				}
			}
			
			if (found) {
				cout << "YES" << endl;
			} else {
			  cout << "NO" << endl;
			}
		}
	}
}