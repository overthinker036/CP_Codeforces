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

	ll up = 0, down = 0;
	
	bool firstLetter = false;

	for (ll i = 0; i < s.size(); i++) {
		if (s[i] >= 65 && s[i] <= 90) {
			up++;
		} else if (s[i] >= 97 && s[i] <= 122) {
			down++;
			
			if (i == 0) firstLetter = true;
		}
	}

	if (down > 1) {
		cout << s << endl;
	} else {
		if (down == 0 || (down == 1 && firstLetter)) {
			for (auto it : s) {
			  if (it >= 65 && it <= 90) {
		  		cout << (char) (it + 32);
	  		} else if (it >= 97 && it <= 122) {
	  			cout << (char) (it - 32);
  			}
  		}

  		cout << endl;
		} else {
			cout << s << endl;
		}
	}
}