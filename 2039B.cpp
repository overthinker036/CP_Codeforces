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

        if (s.size()==1) {
            cout << -1 << endl;
        } else if (s.size()==2) {
            if (s[0]==s[1]) {
                cout << s << endl;
            } else {
                cout << -1 << endl;
            }
        } else {
            bool ok = false;
            string ans = "";

            for (ll i = 0; i+1 < s.size(); i++) {
                if (s[i]==s[i+1]) {
                    ans.pb(s[i]);
                    ans.pb(s[i+1]);

                    ok = true;
                    break;
                }
            }

            if (ok) {
                cout << ans << endl;
                continue;
            } else {
                for (ll i = 0; i+2 < s.size(); i++) {
                    if (s[i]!=s[i+1] and s[i+1]!=s[i+2] and s[i] != s[i+2]) {
                        ok = true;

                        ans.pb(s[i]);
                        ans.pb(s[i+1]);
                        ans.pb(s[i+2]);

                        break;
                    }
                }

                ok ? cout << ans << endl : cout << -1 << endl;
            }
        }
    }
}
