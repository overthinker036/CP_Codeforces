#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define umap unordered_map
#define f(i, x, n) for(int i = x; i < n; i++)
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

        bool outer = true;

        for (ll i = 1; i <= n; i++) {
            if (outer) { //Two for loops for same rows
                bool inner1 = true;
                for (ll j = 1; j <= n; j++) {
                    if (inner1) {
                        cout << "##";
                        inner1 = false;
                    } else {
                        cout << "..";
                        inner1 = true;
                    }
                }

                cout << endl;

                bool inner2 = true;

                for (ll j = 1; j <= n; j++) {
                    if (inner2) {
                        cout << "##";
                        inner2 = false;
                    } else {
                        cout << "..";
                        inner2 = true;
                    }
                }
                cout << endl;
                outer = false;
            } else {//Two for loops for same rows
                bool inner1 = true;
                for (ll j = 1; j <= n; j++) {
                    if (inner1) {
                        cout << "..";
                        inner1 = false;
                    } else {
                        cout << "##";
                        inner1 = true;
                    }
                }

                cout << endl;

                bool inner2 = true;
                for (ll j = 1; j <= n; j++) {
                    if (inner2) {
                        cout << "..";
                        inner2 = false;
                    } else {
                        cout << "##";
                        inner2 = true;
                    }
                }

                cout << endl;
                outer = true;
            }
        }
    }
}