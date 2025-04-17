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
  	ll n;
  	cin >> n;
  	
  	if (!(n&1)) {
  		cout << -1 << endl;
  	} else {
  		for (ll i = n; i >= 1; i--) {
  			cout << i << " ";
  		}
  		
  		cout << endl;
  	}
  }
} 