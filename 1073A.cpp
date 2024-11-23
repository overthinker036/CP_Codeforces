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
   
  ll n; cin >> n;
  
  string s;
  cin >> s;
  
  for (ll i = 0; i < n-1; i++) {
  	if (s[i] != s[i+1]) {
  		cout << "YES" << endl;
  		cout << s[i] << s[i+1] << endl;
  		return 0;
  	}
  }
  
  cout << "NO" << endl;
} 