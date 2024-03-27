#include <bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

int main () {
  ll t, inp;
  cin >> t;
  
  while (t--) {
  	ll n, tot = 0;
  	cin >> n;
  	
  	vector <ll> v;
  	
  	for (ll i = 0; i < n; i++) {
  		cin >> inp;
  		if (inp % 3 != 0) {
  			v.pb(inp);
  			tot += inp;
  		}
  	}
  	
  	if (tot % 3 == 0) {
  		cout << 0 << endl;
  	} else {
  		ll toIncrease = 3 - (tot % 3);
  		
  	
  		//Can be 1 or 2
  		
  		ll cnt = 0;
  		
  		for (auto it : v) {
  			if (tot % 3 == it % 3) {
  				cnt++;
  				break;
  			}
  		}
  		
  		if (cnt == 1) {
  			cout << cnt << endl;
  		} else {
  			cout << toIncrease << endl;
  		}
  	}
  }
}