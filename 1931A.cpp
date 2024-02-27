#include <bits/stdc++.h>
using namespace std;

int main () {
	int t;
	cin >> t;
	
	while (t--) {
		int n;
		cin >> n;
		
		map <int, char> mp;
		
		int i = 1;
		char ch = 'a';
		
		for (; i <= 26; i++, ch++) {
			mp[i] = ch;
		}
		
	  if (n <= 28) {
	  	cout << 'a' << 'a' << mp[n-2] << endl;
	  } else if (n > 28 && n <= 53) {
	  	cout << 'a' << mp[n-27] << 'z' << endl;
	  
	  } else {
	  	cout << mp[n - (26*2)] << 'z' << 'z' << endl;
	  } 
	}
}