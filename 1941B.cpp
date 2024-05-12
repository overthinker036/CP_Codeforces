#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main () {
	ll t; cin >> t;
	
	while (t--) {
	  ll n; cin >> n;
	  
	  ll arr[n];
	  
	  for (ll i = 0; i < n; i++) {
	  	cin >> arr[i];
	  }
	  
	  for (ll i = 1; i < n-1; i++) {
	  	if (arr[i] == 0) {
	  		continue;
	  	} else {
	  		ll tg = 0;
	  	if (arr[i-1] == arr[i+1]) {
	  	  if (arr[i] >= 0) {
	  	  	tg = arr[i-1];
	  	  
	  	    arr[i-1] = 0;
	  	    arr[i+1] = 0;
	  	  
	  	    arr[i] -= (2*tg);
	  	  } else {
	  	  	tg = arr[i-1];
	  	  
	  	    arr[i-1] = 0;
	  	    arr[i+1] = 0;
	  	  
	  	    arr[i] += (2*tg);
	  	  }
	  	  
	  	} else if (arr[i+1] < arr[i-1]) {
	  		if (arr[i] >= 0) {
	  			tg = arr[i+1];
	  		
	  	  	arr[i+1] = 0;
	    		arr[i-1] -= tg;
	  		
	    		arr[i] -= 2*tg;
	  		} else {
	  			tg = arr[i+1];
	  		
	  		  arr[i+1] = 0;
	  	  	arr[i-1] += tg;
	  		
	    		arr[i] += 2*tg;
	  		}
	  	} else {
	  		if (arr[i] >= 0) {
	  			tg = arr[i-1];
	  		
	  		  arr[i-1] = 0;
	  	  	arr[i+1] -= tg;
	  		
	  	  	arr[i] -= 2*tg;
	  		} else {
	  			tg = arr[i-1];
	  		
	  	  	arr[i-1] = 0;
	    		arr[i+1] += tg;
	  		
	    		arr[i] += 2*tg;
	  		}
	  	}
	  	}
	  } 
	  
	  bool ok = true;
	  
	  for (auto it : arr) {
	  	if (it != 0) {
	  		ok = false;
	  		break;
	  	}
	  }
	  
	  if (ok) {
	  	cout << "YES" << endl;
	  } else {
	  	cout << "NO" << endl;
	  }
	}
}