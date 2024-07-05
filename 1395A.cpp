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
        vector<ll> v(4);

        short o = 0, e = 0;

        bool allz = 1;
        
        f(i, 0, 4) {
            cin >> v[i];

            if (v[i]) {
                allz = 0;
            }

            if (v[i] % 2 == 0) {
                e++;
            } else {
                o++;
            }
        }

        if (allz) {
            cout << "Yes" << endl;
        } else if (o == 0 || 0 == 1) {
            cout << "Yes" << endl;
        } else {
            bool z = false;

            f(i, 0, 3) {
                if (v[i]==0) {
                    z = true;
                    break;
                }
            }

            if (z) {
                if (e == 3) {
                    cout << "Yes" << endl;
                } else {
                    cout << "No" << endl;
                }
            } else {
                if (o == 0 || o == 1 || o == 3 || o == 4) {
                    cout << "Yes" << endl;
                } else {
                    cout << "No" << endl;
                }
            }
        }
    }
}
