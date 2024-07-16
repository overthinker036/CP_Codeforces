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
    
    int n;
    cin >> n;

    string s;
    cin >> s;

    set <char> st;

    for (auto it : s) {
        if (it >= 65 && it <= 90) {
            st.insert(it);
        } else if (it >= 97 && it <= 122) {
            st.insert((char)it-32);
        }
    }

    if (st.size()==26) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}
