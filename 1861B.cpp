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
   
  int t;
  cin >> t;
  
  while(t--) {
  	string a, b;
  	cin >> a >> b;
  	
  	ll n = a.size();
  	
  	bool ok = false;
  	
  	f(i, 0, n-1) {
  		if (a[i] == '0' && b[i] == '0' && a[i+1] == '1' && b[i+1] == '1') {
  			ok = true;
  			break;
  		}
  	}
  	
  	ok ? cout << "YES" << endl : cout << "NO" << endl;
  	
  }
} 