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

	ll t;
	cin >> t;

	while (t--) {
		ll n, m, sx, sy, d;
		cin >> n >> m >> sx >> sy >> d;

        if (d == 0) {
            cout << n+m-2 << endl;
        } else if ((sx+d >= n && sy+d >=m) || (sx-d <= 1 && sy-d <= 1) || d==n-1 || d==m-1 || (sx-d <= 1 && sx+d >= n) || (sy-d <= 1 && sy+d >= m)) {
			cout << -1 << endl;
		} else {
            if (((n-sx)+(m-sy)) <= d || ((sx-1)+(sy-1)) <= d) {
                cout << -1 << endl;
            } else {
                cout << n+m-2 << endl;
            }
		}
	}
} 
