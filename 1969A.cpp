#include <bits/stdc++.h>
#include <unordered_map>
#define ll long long
using namespace std;

ll arr[51];

int main () {
	ll t;
	cin >> t;
	
	while (t--) {
		ll n;
		cin >> n;
		
		for (ll i = 1; i <= n; i++) {
			cin >> arr[i];
		}
		
		unordered_map <ll, ll> fchainLengths;
		
		for (ll i = 1; i <= n; i++) {
			ll len = 1, curr = arr[i];
			
			while (curr != i) {
				curr = arr[curr];
				len++;
			}
			
			fchainLengths[i] = len;
		}
		
		ll min = INT_MAX;
		
		for (auto it : fchainLengths) {
			if (it.second < min) {
				min = it.second;
			}
		}
		
		if (min > 3) {
			cout << 3 << endl;
		} else {
			cout << min << endl;
		}
	}
}