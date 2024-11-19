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
	  ll n;
	  cin >> n;
	  
	  ll arr[n];
	  
	  f(i, 0, n) cin >> arr[i];
	  
	  if (n==1 || n==2) {
	  	cout << "YES" << endl; 
	  	continue;
	  }
	  
	  bool ok = true;
	  
	  for (ll i = 0; i<n;i++) {
	  	if (abs(arr[i]-(i+1)) > 1) {
	  		ok = false;
	  		break;
	  	}
	  }
	  
	  ok? cout << "YES" << endl : cout << "NO" << endl;
	}
}