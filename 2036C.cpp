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
        string s;
        cin >> s;
        
        ll n = s.size();

        map <string, ll> mp;

        for (ll i = 0; i < n-3; i++) {
            string h = "";
            h.pb(s[i]);
            h.pb(s[i+1]);
            h.pb(s[i+2]);
            h.pb(s[i+3]);

            mp[h]++;
        }

        ll q;
        cin >> q;

        while (q--) {
            ll idx;
            char c;

            cin >> idx >> c;

            idx--;

            if (s[idx] == c) {
                mp["1100"] ? cout << "YES" << endl : cout << "NO" << endl;
            } else {
                for (ll i = idx-3; i <= idx; i++) {
                    if (i < 0) {
                        continue;
                    } else if (i >= n-3) {
                        continue;
                    } else {
                        string p = "";

                        p.pb(s[i]);
                        p.pb(s[i+1]);
                        p.pb(s[i+2]);
                        p.pb(s[i+3]);

                        mp[p]--;
                    }
                }

                s[idx] = c;

                for (ll i = idx-3; i <= idx; i++) {
                    if (i < 0) {
                        continue;
                    } else if (i >= n-3) {
                        continue;
                    } else {
                        string p = "";

                        p.pb(s[i]);
                        p.pb(s[i+1]);
                        p.pb(s[i+2]);
                        p.pb(s[i+3]);

                        mp[p]++;
                    }
                }

                mp["1100"] ? cout << "YES" << endl : cout << "NO" << endl;
            }
        }
    }
}
