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

        string s;
        cin >> s;

        if (n==1) {
            cout << s << endl;
        } else {
            set <char> sp;

            for (ll i = 0; i < n; i++) {
                sp.insert(s[i]);
            }

            string master;

            for (auto it : sp) {
                master.push_back(it);
            }

            string ans;

            map <char, char> m;

            ll l = 0, r = master.size()-1;

            while (l <= r) {
                m[master[l]] = master[r]; 

                l++;
                r--;
            }

            for (auto it : m) {
                m[it.second] = it.first;
            }

            for (ll i = 0; i < n; i++) {
                ans.pb(m[s[i]]);
            }

            cout << ans << endl;
        }
    }
}