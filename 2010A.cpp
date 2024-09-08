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
	
	int t;
	cin >> t;
	
	while (t--) {
		int n, input; cin >> n;
		
		ll sum = 0;
		
		f(i, 0, n) {
			cin >> input;
			if (i%2==0) {
				sum += input;
			} else {
				sum -= input;
			}
		}
		
		cout << sum << endl;
	}
}