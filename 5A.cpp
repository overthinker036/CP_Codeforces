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
    
    string s;

    ll pcount = 0, ans = 0, i;

    while (getline(cin, s)) {
        if (!isalnum(s[0])) {
            if (s[0]=='+') {
                pcount++;
            } else {
                pcount--;
            }
        } else {
            for (i = 0; i < s.size(); i++) {
                if (s[i] == ':') {
                    break;
                }
            }

            ans += (s.size()-i-1)*pcount;
        }
    }

    cout << ans << endl;
}
