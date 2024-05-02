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
        string s;
        cin >> s;

        ll n = s.size();

        bool already = true;

        for (ll i = 0; i < n-1; i++) {
            if (s[i+1] < s[i]) {
                already = false;
                break;
            }
        }

        if (already) {
            cout << 0 << endl;
        } else {
            ll l = 0, r = n-1;

            for(ll i = 0; i < n; i++) {
                if (s[i] != '0') {
                    l = i;
                    break;
                }
            }

            ll start = l, end = start+1, ans = 0;
            
            for (; end <= r; end++) {
                if (s[end] == '1') {
                    continue;
                } else {
                    ans += (end-start+1);
                    start++;
                }
            }

            cout << ans << endl;
        }
    }
}
