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
    ll n; char c;
    cin >> n >> c;

    string s;
    cin >> s;

    if (c=='g') {
      cout << 0 << endl;
      continue;
    }

    vector<ll> gpos, cpos;

    f (i, 0, n) {
      if(s[i]==c) cpos.pb(i);
      if(s[i]=='g') gpos.pb(i);
    }

    ll ans = -1;

      for (ll i = 0; i < cpos.size(); i++) {
         ll len = 0;

         if (gpos.size()==1) {
           if (cpos[i] < gpos[0]) {
             len = gpos[0]-cpos[i];
           } else {
             len = n-cpos[i]+gpos[0];
           }
         } else {
           if (cpos[i] < gpos[0]) {
             len = gpos[0]-cpos[i];
           } else if (cpos[i] > gpos[gpos.size()-1]) {
           
             len = (n-cpos[i])+gpos[0];
           } else {
             for (ll j = 1; j < gpos.size(); j++) {
                if (cpos[i] > gpos[j-1] && cpos[i] < gpos[j]) {
                   len = gpos[j]-cpos[i];
                   break;
                 }
               }
             }
           }

           if (len > ans) {
              ans = len;
            }
        }

        cout << ans << endl;
    }
}