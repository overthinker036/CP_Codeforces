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
    
    ll n;
    cin >> n;

    ll p = 0, i;
    char c;

    while (n--) {
        cin >> c >> i;

        if (c=='P') {
            p+=i;
        } else {
            if (i-p > 0) {
                cout << "YES" << endl;
                p = 0;
            } else {
                cout << "NO" << endl;
                p-=i;
            }
        }
    }
}
