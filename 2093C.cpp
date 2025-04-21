#include <bits/stdc++.h>
#define ll long long
#define ull unsigned ll
#define pb push_back
#define umap unordered_map
#define f(i, x, n) for (ll i = x; i < n; i++)
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

bool isPrime(ll x) {
	if (x == 1 || x == 0) return false;
	else if (x == 2 || x == 3) return true;
	else {
		for (ll i = 2; i*i <= x; i++) {
			if(x%i==0) return false;
		}
		
		return true;
	}
}

int main() {
	optimize();
   
  int t;
  cin >> t;
  
  while(t--) {
  	ll x, y;
  	cin >> x >> y;
  	
    if (y==1) {
    	isPrime(x) ? cout << "YES" << endl : cout << "NO" << endl;
    } else if (x == 1 && y == 2) {
    	cout << "YES" << endl;
    } else {
    	cout << "NO" << endl;
    }
  }
} 