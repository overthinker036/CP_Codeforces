#include <bits/stdc++.h>
#define ll long long
#define ull unsigned ll
#define pb push_back
#define umap unordered_map
#define f(i, x, n) for(ll i = x; i < n; i++)
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

ll counter_1543(vector<char> v) {
    ll cnt = 0;

    v.pb(v[0]);
    v.pb(v[1]);
    v.pb(v[2]);

    for (ll i = 0; i < v.size()-3; i++) {
        if(v[i] == '1' && v[i+1] == '5' && v[i+2] == '4' && v[i+3] == '3') {
            cnt++;
        }
    }

    return cnt;
}
 
int main() {
    optimize();
    
    ll t;
    cin >> t;

    while (t--) {
        ll n, m;
        cin >> n >> m;

        vector<string> p;

        string inp;

        for (ll i = 0; i < n; i++) {
            cin >> inp;
            p.pb(inp);
        }

        char v[n+1][m+1];

        for (ll i = 0; i < n; i++) {
            for (ll j = 0; j < m; j++) {
                v[i+1][j+1] = p[i][j];
            }
        }

        ll ans = 0, r = 1, c = 1;

        vector<char> layer;

        while (r <= n/2 && c <= m/2) {
            for (ll j = c+1; j <= m-c+1; j++) {
                layer.pb(v[r][j]);
            }

            for (ll i = r+1; i <= n-r+1; i++) {
                layer.pb(v[i][m-c+1]);
            }

            for (ll j = m-c; j >= c; j--) {
                layer.pb(v[n-r+1][j]);
            }

            for (ll i = n-r; i >= r; i--) {
                layer.pb(v[i][c]);
            }

            ans += counter_1543(layer);
            layer.clear();

            r++;
            c++;
        }

        cout << ans << endl;
    }
}
