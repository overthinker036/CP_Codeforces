#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define umap unordered_map
#define f(i, x, n) for(int i = x; i < n; i++)
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
 
int main() {
    optimize();
    
    ll t;
    cin >> t;

    while (t--) {
        ll a, b;
        cin >> a >> b;

        if (a % b == 0) {
            cout << 0 << endl;
        } else {
            cout << b-(a%b) << endl;
        }
    }
}
