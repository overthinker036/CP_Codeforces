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
        ull x;
        cin >> x;

        vector<int> num;

        while (x > 0) {
            num.pb(x%10);
            x /= 10;
        }

        reverse(num.begin(), num.end());

        if (num[0] != 1) {
            cout << "NO" << endl;
        } else if (num[num.size()-1] < 0 || num[num.size()-1] > 8) {
            cout << "NO" << endl;
        } else {
            bool ok = true;

            num[0] = -1;
            num[num.size()-1] = -1;

            for (ll i = 0; i < num.size()-1; i++) {
                if(num[i] == -1) {
                    continue;
                } else {
                    if (num[i] < 1 || num[i] > 9) {
                        ok = false;
                        break;
                    }
                }
            }

            if (ok) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    }
}