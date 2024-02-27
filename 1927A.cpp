#include <bits/stdc++.h>
using namespace std;

int main () {
	int t;
	cin >> t;
	
	while (t--) {
		int n;
		cin >> n;
		
		string s;
		cin >> s;
		
		int start, end;
		
		for (int i = 0; i < s.length(); i++) {
			if (s[i] == 'B') {
				start = i;
				break;
			}
		}
		
		for (int j = s.length()-1; j >= 0; j--) {
			if (s[j] == 'B') {
				end = j;
				break;
			}
		}
		
		cout << end - start + 1 << endl;
	}
}