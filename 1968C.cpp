#include <bits/stdc++.h>
#define ll long long
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
        ll n; cin >> n;

        ll arr[n-1];

        for (ll i = 0; i < n-1; i++) {
            cin >> arr[i];
        }

        ll p = 1000;

        cout << p << " ";

        for (ll i = 0; i < n-1; i++) {
            cout << (p+=arr[i]) << " ";
        }

        cout << endl;
    }
}
