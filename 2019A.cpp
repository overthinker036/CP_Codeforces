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
	  ll n; cin >> n;
	  
	  ll arr[n];
	  
	  ll evenMax = LLONG_MIN, oddMax = LLONG_MIN;
	  
	  f(i,0,n) {
	  	cin>>arr[i];
	    
	    if (i&1 && arr[i]>evenMax) {
	    	evenMax = arr[i];
	    } else if(!(i&1) && arr[i]>oddMax) {
	    	oddMax = arr[i];
	    }
	  }
	  
	  if (n&1) {
	  	cout << max(((n/2)+evenMax), (((n/2)+1)+oddMax)) << endl;
	  } else {
	  	cout << (max(evenMax, oddMax) + n/2) << endl;
	  }
	}
}