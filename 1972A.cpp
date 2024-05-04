#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define umap unordered_map
#define f(i, x, n) for(ll i = x; i < n; i++)
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

bool allGood(ll a[], ll b[], ll n, ll& ans);
 
int main() {
    optimize();
    
    ll t;
    cin >> t;

    while (t--) {
        ll n;
        cin >> n;

        ll a[n], b[n];

        for (auto& it : a) {
            cin >> it;
        }

        for (auto& it : b) {
            cin >> it;
        }

        bool already = true;

        f (i, 0, n) {
            if (a[i] > b[i]) {
                already = false;
                break;
            }
        }

        if (already) {
            cout << 0 << endl;
        } else {
            ll ans = 0;
            
            while (!allGood(a, b, n, ans)) {
                ans++;
            }
            cout << ans << endl;
        }
    }
}

bool allGood(ll a[], ll b[], ll n, ll& ans) {

    for (ll i = 0; i < n-ans; i++) {
        if (a[i] > b[i+ans]) {
            return false;
        }
    }

    return true;
}
