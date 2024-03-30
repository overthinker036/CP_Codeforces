#include <bits/stdc++.h>
#define ll long long
using namespace std;

void ABCounter (string s, ll& n, ll& a, ll& b);

int main () {
	ll t;
	cin >> t;
	
	while (t--) {
		ll n;
		cin >> n;
		
		string s;
		cin >> s;
		
		ll a = 0, b = 0;
		
		ABCounter(s, n, a, b);
		
		if(a == 0 || b == 0) {
			cout << 0 << endl;
		} else if (a == 1 && s.find('A') == n-1) {
			cout << 0 << endl;
		} else if (b == 1 && s.find('B') == 0) {
			cout << 0 << endl;
		} else {
	  	vector <ll> v;
	  	ll res = 0, l = 0, r = n-1;
	  	
	  	while (l < n && s[l] == 'B') {
	  		l++;
	  	}
	    
	    while(r >= 0 && s[r] == 'A') {
	      r--;
	    }
	    
	    if (l > r) {
	    	cout << 0 << endl;
	    	continue;
	    }
	  	
	  	for (ll i = l; i <= r; i++) {
	  		if (s[i] == 'A') {
	  			v.push_back(i);
	  		}
	  	}
	    
	    for (ll i = 0; i < v.size()-1; i++) {
	    	res += (v[i+1] - v[i]);
	    }
	    
	    res += (r - v[v.size()-1]);
	    
	    cout << res << endl;
	    
		}
	}
}

void ABCounter (string s, ll& n, ll& a, ll& b) {
	for (ll i = 0; i < n; i++) {
		if (s[i] == 'A') {
			a++;
		} else if (s[i] == 'B') {
			b++;
		}
	}
}
