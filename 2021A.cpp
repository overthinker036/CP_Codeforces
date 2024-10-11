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

        ll arr[n];

        f(i, 0, n) cin >> arr[i];

        sort(arr, arr+n);

        ll ans = (arr[0]+arr[1])/2;

        for (ll i = 2; i < n; i++) {
            ans = (ans + arr[i])/2;
        }

        cout << ans << endl;

    }
}
