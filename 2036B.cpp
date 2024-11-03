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
        ll n, k;
        cin >> n >> k;

        map <ll, ll> mp;

        f(i, 0, k) {
            ll bi, ci;
            cin >> bi >> ci;

            if (!mp.count(bi)) {
                mp[bi] = ci;
            } else {
                mp[bi] += ci;
            }
        }

        ll ans = 0;

        if (n >= k) {
            for (auto it : mp) {
                ans += it.second;
            }

            cout << ans << endl;
        } else {
            vector<pair<ll, ll>> v;

            for (auto it : mp) {
                v.pb({it.second, it.first});
            }

            sort(v.begin(), v.end(), greater<pair<ll, ll>>());

            for (int i = 0; i < n; i++) {
                ans += v[i].first;
            }

            cout << ans << endl;
        }
    }
}
