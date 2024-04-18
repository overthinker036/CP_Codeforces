#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main () {
	ll t; cin >> t;
	
	while (t--) {
		ll n;
		cin >> n;
		
		ll arr[n];
		
		for (ll i = 0; i < n; i++) {
		  cin >> arr[i];
		}
		
		sort(arr, arr+n);
		
		ll doubles = 0;
		
		for (ll i = 0; i < n-1; i++) {
			if (arr[i+1] == arr[i]) {
				doubles++;
			}
		}
		
		cout << doubles << endl;
	}
}