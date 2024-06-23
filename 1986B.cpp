#include <bits/stdc++.h>
#define ll long long
#define ull unsigned ll
#define pb push_back
#define umap unordered_map
#define f(i, x, n) for(ll i = x; i < n; i++)
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

bool isGreaterThanAllNeighbours (ll t, ll n1, ll n2, ll n3, ll n4) {
    vector <ll> n;

    if (n1) n.pb(n1);
    if (n2) n.pb(n2);
    if (n3) n.pb(n3);
    if (n4) n.pb(n4);

    for (ll i = 0; i < n.size(); i++) {
        if (t <= n[i]) return false;
    }

    return true;
}
 
int main() {
    optimize();
    
    ll t;
    cin >> t;

    while (t--) {
        int n, m; cin >> n >> m;

        ll arr[n][m];

        f(i, 0, n) {
            f (j, 0, m) cin >> arr[i][j];
        }

        f(i, 0, n) {
            f (j, 0, m) {
                ll n1 = 0, n2 = 0, n3 = 0, n4 = 0;

                if (i-1 >= 0) n1 = arr[i-1][j]; //Up
                if (i+1 < n) n2 = arr[i+1][j]; //Down
                if (j-1 >= 0) n3 = arr[i][j-1]; //Left
                if (j+1 < m) n4 = arr[i][j+1]; //Right
               
                if (isGreaterThanAllNeighbours(arr[i][j], n1, n2, n3, n4)) {
                    arr[i][j] = max(n1, max(n2, max(n3, n4)));
                }
            }
        }

        f (i, 0, n) {
            f(j, 0, m) cout << arr[i][j] << " ";

            cout << endl;
        }
    }
}