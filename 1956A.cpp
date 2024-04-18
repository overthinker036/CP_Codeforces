#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main () {
	ll t;
	cin >> t;
	
	while (t--) {
		ll k, q;
		cin >> k >> q;
		
		ll a[k], b[q];
		//a is deletion positions, b is the list of N
		for (ll i = 0; i < k; i++) {
			cin >> a[i];
		} 
		
		for (ll i = 0; i < q; i++) {
			cin >> b[i];
		}
		
		for (auto it : b) {
			cout << min(it, a[0]-1) << " ";
		}
		
		cout << endl;
	}
}