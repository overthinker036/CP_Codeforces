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
    
    ll n;
    cin >> n;

    ll arr[n+1];
    ll res[n+1];

    for (ll i = 1; i < n+1; i++) {
        cin >> arr[i];
        res[arr[i]] = i;
    }

    for (ll i = 1; i < n+1; i++) {
        cout << res[i] << " ";
    }

    cout << endl;
}
