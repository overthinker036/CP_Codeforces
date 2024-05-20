#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define umap unordered_map
#define f(i, x, n) for(ll i = x; i < n; i++)
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

bool isPrime(ll x) {
    if (x == 2) return true;

    for (ll i = 2; i*i <= x; i++) {
        if (x % i == 0) {
            return false;
        }
    }

    return true;
}
 
int main() {
    optimize();
    
    ll t;
    cin >> t;

    while (t--) {
        ll x;
        cin >> x;

        if (isPrime(x)) {
            cout << x-1 << endl;
        } else {
            ll mxsum = LLONG_MIN;
            ll mx = LLONG_MIN;

            for (ll i = 2; i < x; i++) {
                if ((__gcd(x, i) + i) > mxsum) {
                    mxsum = __gcd(x, i) + i;
                    mx = i;
                }
            }

            cout << mx << endl;
        }
    }
}
