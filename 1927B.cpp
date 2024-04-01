#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main () {
	ll t;
	cin >> t;
	
	while (t--) {
		ll n;
		cin >> n;
		
		ll trace[n];
		
		for (ll i = 0; i < n; i++) {
			cin >> trace[i];
		}
		
		char s[n];
		
		char ch = 'a';
		
		ll numbersLeft = n;
		
		while (numbersLeft) {
			ll tracker = 0;
			
			//0 1 2 3 4 5 6 7
			
			for(ll i = 0; i < n; i++) {
				if (trace[i] == tracker) {
					trace[i] = -1;
					s[i] = ch;
					tracker++;
					numbersLeft--;
				}
			}
			
			ch++;
		}
		
		for (ll i = 0; i < n; i++) {
			cout << s[i];
		}
		
		cout << endl;
	}
}