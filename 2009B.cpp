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
        int n;
        cin >> n;

        vector<string> notes;

        string input;

        f (i, 0, n) {
            cin >> input;
            notes.pb(input);
        }

        for (int i = notes.size()-1; i >= 0; i--) {
            for (int j = 0; j < notes[i].size(); j++) {
                if (notes[i][j] == '#') {
                    cout << j+1 << " ";
                }
            }
        }

        cout << endl;
    }
}
