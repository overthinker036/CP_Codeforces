#include <bits/stdc++.h>
using namespace std;

bool is_v(char ch);
bool is_c(char ch);

int main () {
	int t;
	cin >> t;
	
	while (t--) {
		int n;
		cin >> n;
		
		string s;
		cin >> s;
		
		string ans;
		
		for (int i = n-1; i >= 0; i--) {
			if (is_c(s[i])) {
			  ans += s[i];
			  ans += s[i-1];
			  ans += s[i-2];
			  ans += '.';
			  i-=2;
			} else {
				ans += s[i];
				ans += s[i-1];
				ans += '.';
				i-=1;
			}
		}
		
		for (int i = ans.size()-2; i >= 0; i--) {
			cout << ans[i];
		}
		
		cout << endl;
	}
}

bool is_v(char ch) {
	if (ch == 'a' || ch == 'e') {
		return true;
	} else {
		return false;
	}
}

bool is_c(char ch) {
	if (ch == 'b' || ch == 'c' || ch == 'd') {
		return true;
	} else {
		return false;
	}
}