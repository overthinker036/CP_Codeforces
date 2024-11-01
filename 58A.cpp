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
    
    string s;
    cin >> s;

    if (s.size() < 4) {
        cout << "NO" << endl;
    } else {
        char curr = 'h';
        int l_count = 0;

        map<char, bool> vis;
        vis['h'] = false;
        vis['e'] = false;
        vis['o'] = false;

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == curr) {
                if (curr == 'h' && !vis['h']) {
                    vis['h'] = true;
                    curr = 'e';
                } else if (curr == 'e' && !vis['e']) {
                    vis['e'] = true;
                    curr = 'l';
                } else if (curr == 'l') {
                    l_count++;
                    if (l_count == 2) {
                        curr = 'o';
                    }
                } else if (curr == 'o' && !vis['o']) {
                    vis['o'] = true;
                    break;
                }
            }
        }

        if (vis['o']) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}
