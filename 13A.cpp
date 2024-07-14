#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define ull unsigned long long
#define umap unordered_map
#define f(i, x, n) for (ll i = x; i < n; i++)
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

vector<int> basify(int a, int i) {
	vector <int> v;
	
	while (a > 0) {
	  v.pb(a%i);
	  a/=i;
	}
	
	return v;
}

int main() {
	optimize();

	int a;
	cin >> a;
	
	vector<vector<int>> conversions;
	
	for (int i = 2; i < a; i++) {
		conversions.pb(basify(a, i));
	}
	
	int digitsum = 0;
	
	for (auto it : conversions) {
		for (auto kt : it) {
			digitsum += kt;
		}
	}
	
	int d = a-2;
	
	int GCD = gcd(digitsum, d);
	digitsum /= GCD;
	d /= GCD;
	
	cout << digitsum << "/" << d << endl;
}