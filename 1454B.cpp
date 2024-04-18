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
        ll n;
        cin >> n;

        ll arr[n];

        umap <int, int> mp;

        f (i, 0, n) {
            cin >> arr[i];

            if (mp.count(arr[i]) == 0) {
                mp[arr[i]] = 1;
            } else {
                mp[arr[i]]++;
            }
        }

        vector <int> v;

        for (auto it : mp) {
            if (it.second == 1) {
                v.pb(it.first);
            }
        }

        if (v.empty()) {
            cout << -1 << endl;
        } else {
            sort(v.begin(), v.end());

            f (i, 0, n) {
                if (arr[i] == v[0]) {
                    cout << i+1 << endl;
                    break;
                }
            }
        }
    }
}
