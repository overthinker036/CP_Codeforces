#include <bits/stdc++.h>
#define ll long long
#define ull unsigned ll
#define pb push_back
#define umap unordered_map
#define f(i, x, n) for(ll i = x; i < n; i++)
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
 
int main() {
    optimize();
    
    ll t;
    cin >> t;

    while (t--) {
        ll n;
        cin >> n;

        ll arr[n+1][n+1];

        for (ll i = 1; i <= n; i++) {
            for (ll j = 1; j <= n; j++) {
                cin >> arr[i][j];
            }
        }

        vector<ll> maxes;

        for (ll i = n; i >= 1; i--) {
            ll temp = i, j = 1, min = 0;

            while (temp <= n) {
                if (arr[temp][j] < min) min = arr[temp][j];

                temp++;
                j++;
            }

            if (min < 0) maxes.pb(min);
        }

        for (ll j = n; j >= 2; j--) {
            ll temp = j, i = 1, min = 0;

            while (temp <= n) {
                if (arr[i][temp] < min) min = arr[i][temp];
                
                temp++;
                i++;
            }

            if (min < 0) maxes.pb(min);
        }

        ll ans = 0;

        for (auto it : maxes) {
            ans -= it;
        }

        cout << ans << endl;
    }
}
