#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define ull unsigned long long
#define umap unordered_map
#define f(i, x, n) for (ll i = x; i < n; i++)
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

bool isPrime(ll num) {
  if (num <= 1) return false;
  if (num <= 3) return true;
  if (num % 2 == 0 || num % 3 == 0) return false;

  for (int i = 5; i * i <= num; i += 6) {
    if (num % i == 0 || num % (i + 2) == 0)
      return false;
  }
  return true;
}

int main() {
	optimize();
	
	ll n, k; cin >> n >> k;
	  
	vector<ll> v;
	unordered_map<ll, bool> m;
	  
	for (ll i = 2; i <= n; i++) {
	  if (isPrime(i)) {
	  	v.pb(i);
	  	m[i] = false;
	  }
	}
	
	ll cnt = 0;
	
	for (ll i = 0; i < v.size()-1; i++) {
	  if (m.count(v[i]+v[i+1]+1)) {
	  	cnt++;
	  }
	  
	  if (cnt >= k) break;
	}
	
	if (cnt >= k) {
		cout << "YES" << endl;
	} else {
		cout << "NO" << endl;
	}
}