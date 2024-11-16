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

        bool inp;

        ll on = 0, off = 0;

        f (i, 0, 2*n) {
            cin >> inp;
            inp?on++:off++;
        }

        cout << off%2 << " " << min(on, off) << endl;
    }
}
