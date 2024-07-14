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
	string s;
	cin >> s;
		
	if (s.size() < 7) {
		cout << "NO" << endl;
	} else {
		bool yes = false;
		for (ll i = 0; s.size()-i >= 7; i++) {
			if (s[i] == s[i+1] && 
				  s[i+1] == s[i+2] && 
				  s[i+2] == s[i+3] && 
				  s[i+3] == s[i+4] && 
				  s[i+4] == s[i+5] && 
				  s[i+5] == s[i+6]) {
				  yes = true;
				break;
		  }
    }
    
    if (yes) {
    	cout << "YES" << endl;
    } else {
    	cout << "NO" << endl;
    }
  }
}