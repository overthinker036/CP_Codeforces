#include <bits/stdc++.h>
#define pb push_back
#define f(i, x, n) for(int i = x; i < n; i++)
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
 
int main() {
    optimize();

    vector <char> vc;

    char ch;

    while (true) {
        cin >> ch;

        if (ch == '}') {
            break;
        } else if (ch == '{' || ch == ',' || ch == ' ') {
            continue;
        } else {
            vc.pb(ch);
        }
    } 

    if (vc.empty()) {
        cout << 0 << endl;
    } else {
        int dist = 1;
        int test = 0;

        f (i, 1, vc.size()) {
            f (j, 0, i) {
                if (vc[j] == vc[i]) {
                    test = 1;
                    break;
                }
            }

            if (test == 1) {
                test = 0;
                continue;
            } else {
                dist++;
            }
        }

        cout << dist << endl;
    }
}
