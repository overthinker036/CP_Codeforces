#include <bits/stdc++.h>
#define ll long long
#define ull unsigned ll
#define pb push_back
#define umap unordered_map
#define f(i, x, n) for (ll i = x; i < n; i++)
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

int main() {
	optimize();
   
  int t;
  cin >> t;
  
  while(t--) {
  	ll n;
  	cin >> n;
  	
  	ll arr[n], currentMax = LLONG_MIN, full_Sum = 0;
  	
  	vector<ll> maxes, rightSums;
  	
  	f(i, 0, n){
  		 cin >> arr[i];
  		 
  		 if (arr[i] > currentMax) {
  		 	currentMax = arr[i];
  		 }
  		 
  		 maxes.pb(currentMax);
  		 full_Sum += arr[i];
  	}
  	
  	f(i, 0, n) {
  		if(i==0) {
  			rightSums.pb(full_Sum-arr[i]);
  	  } else {
  	  	rightSums.pb(rightSums[i-1]-arr[i]);
  	  }
  	}
  		
  	for(ll k = n-1; k >= 0; k--) cout << maxes[k]+rightSums[k] << " ";
  	cout << endl;
  }
} 