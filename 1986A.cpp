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
        ll arr[3];

        f(i, 0, 3) {
            cin >> arr[i];
        }

        sort(arr, arr+3);

        ll t = arr[1];

        cout << abs(t-arr[0] + abs(t-arr[1] + abs(t-arr[2]))) << endl;
    }
}