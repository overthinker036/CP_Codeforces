#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define ull unsigned long long
#define umap unordered_map
#define f(i, x, n) for (ll i = x; i < n; i++)
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

int main() {
	optimize();
  string s;
	cin >> s;
		
	map <ll, ll> mp; //(position, pbalance)
		
	ll open = 0, close = 0, maxBalance = -1;
		
	f(i, 0, s.size()) {
		mp[i] = open-close;

        if (open-close > maxBalance) {
            maxBalance = open-close;
        }

		if (s[i] == '(') {
			open++;
		} else if (s[i] == ')') {
			close++;
		}
	}

    vector<pair<ll, ll>> inversedmp;

    for (auto it : mp) {
        pair<ll, ll> p = {it.second, it.first};
        inversedmp.pb(p);
    }

    sort(inversedmp.begin(), inversedmp.end());

    vector<vector<ll>> sorter;
    
    ll balanceTracker = 0;

	for(ll i = 0; i < inversedmp.size(); i++) {
        vector<ll> v;

        while (inversedmp[i].first == balanceTracker && balanceTracker <= maxBalance) {
            v.pb(inversedmp[i].second);
            i++;
        }

        sorter.pb(v);
        balanceTracker++;
        i--;
	}

    for (ll i = 0; i < sorter.size(); i++) {
        sort(sorter[i].begin(), sorter[i].end(), greater<ll>());
    }

    vector <ll> result;

    for (auto it : sorter) {
        for (auto kt : it) {
            result.pb(kt);
        }
    }

    for (auto it : result) {
        cout << s[it];
    }

    cout << endl;
}
