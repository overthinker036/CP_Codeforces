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

  ll t;
  cin >> t;
  
  while (t--) {
  	ll n;
  	cin >> n;
  	
  	string s;
  	cin >> s;
  	
  	map<char, ll> m;
  	
  	for (auto it : s) m[it]++;
  	
  	vector <pair<char, ll>> v;
  	
  	for (auto it : m) v.pb(it);
  	
  	sort(v.begin(), v.end(), [](auto& a, auto& b) {return a.second > b.second;});
  	
  	char target = v[v.size()-1].first, replacer = v[0].first;
    ll targetFreq = v[v.size()-1].second;

    string ans = "";
    ll cnt = 0;
  	
  	for (auto it : s) {
        if (it == target) {
            if (cnt == targetFreq-1) {
                ans.pb(replacer);
            } else {
                ans.pb(it);
                cnt++;
            }
        } else {
             ans.pb(it);
        }
    }

    cout << ans << endl;
  }
}
