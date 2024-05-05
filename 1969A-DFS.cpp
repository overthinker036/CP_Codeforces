#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define umap unordered_map
#define f(i, x, n) for(ll i = x; i < n; i++)
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

void dfs(const vector<vector<ll>>& g, vector<bool> vis, ll v, ll& dfsDepth);
 
int main() {
    optimize();
    
    ll t;
    cin >> t;

    while (t--) {
        ll n, inp; cin >> n;

        vector<vector<ll>> g (n+1);
        vector<bool> vis(n+1, 0);

        vector <ll> componentLengths;

        f (i, 0, n) {
            cin >> inp;
            g[inp].pb(i+1);
            g[i+1].pb(inp);
        }

        for (auto it : g) {
            for (auto kt : it) {
                if (!vis[kt]) {
                    ll dfsDepth = 0;
                    dfs(g, vis, kt, dfsDepth);
                    componentLengths.pb(dfsDepth);
                }
            }
        }

        sort(componentLengths.begin(), componentLengths.end());

        ll mn = componentLengths[0];

        if (mn > 3) {
            cout << 3 << endl;
        } else {
            cout << mn << endl;
        }
    }
}

void dfs (const vector<vector<ll>>& g, vector<bool> vis, ll v, ll& dfsDepth) {
    stack<ll> s;
    s.push(v);

    while (!s.empty()) {
        ll curr = s.top();
        s.pop();

        vis[curr] = 1;
        dfsDepth++;

        for (auto it : g[curr]) {
            if (!vis[it]) {
                s.push(it);
                vis[it] = 1;
            }
        }
    }
}
