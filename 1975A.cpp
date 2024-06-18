#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define umap unordered_map
#define f(i, x, n) for (ll i = x; i < n; i++)
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

int main() {
	optimize();

	ll t;
	cin >> t;

	while (t--) {
		ll n; cin >> n;
		
		ll arr[n];
		
		f(i, 0, n) cin >> arr[i];
		
	  ll cnt = 0;
			
		f (i, 1, n) {
			if (arr[i-1] > arr[i]) cnt++;
		}
			
		if (cnt > 1) {
			cout << "No" << endl;
		} else if (cnt == 1){
		  if (arr[0] >= arr[n-1]) {
		  	cout << "Yes" << endl;
		  } else {
		  	cout << "No" << endl;
		  }
		} else {
			cout << "Yes" << endl;
		}
  }
}