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

	ll n, x;
	cin >> n >> x;
	
	map <ll, ll> mp;
	
	ll a, b;
	
	f(i, 0, n) {
		cin >> a >> b;
		
		if (a < b) {
			if (mp.count(a) > 0) {
  			if (b < mp[a]) {
	  			mp[a] = b;
	  		}
  		} else {
		  	mp[a] = b;
	  	}
		} else {
			if (mp.count(b) > 0) {
				if (a < mp[b]) {
					mp[b] = a;
				}
			} else {
				mp[b] = a;
			}
		} 
	}
	
	ll L = LLONG_MIN, R = LLONG_MAX;
	
	for (auto it : mp) {
		if (it.first > L) {
			L = it.first;
		}
		
		if(it.second < R) {
			R = it.second;
		}
	}
	
	if (L > R) {
		cout << -1 << endl;
	} else {
		if (x >= L && x <= R) {
			cout << 0 << endl;
		} else if (x < L) {
			cout << L-x << endl;
		} else {
			cout << x-R << endl;
		}
	}
} 