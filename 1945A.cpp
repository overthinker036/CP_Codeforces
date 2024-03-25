#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define f(i, x, n) for(int i = x; i < n; i++)
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
 
int main() {
    optimize();
    
    ll t;
    cin >> t;

    while (t--) {
        ll in, ex, un;
        cin >> in >> ex >> un;

        if (ex == 0 && un == 0) {
            cout << in << endl;
        } else if (ex > 0 && un == 0) {
            if (ex % 3 == 0) {
                cout << in + ex/3 << endl;
            } else {
                cout << -1 << endl;
            }
        } else if (ex == 0 && un > 0) {
            if (un % 3 == 0) {
                cout << in + un/3 << endl;
            } else {
                cout << in + un/3 + 1 << endl;
            }
        } else {
            if (ex % 3 == 0) {
                if (un % 3 == 0) {
                    cout << in + ex/3 + un/3 << endl;
                } else {
                    cout << in + ex/3 + un/3 + 1 << endl;
                }
            } else {
                ll num = (ex % 3) + un;

                if (num < 3) {
                    cout << -1 << endl;
                } else {
                    if (num % 3 == 0) {
                        cout << in + ex/3 + num/3 << endl;
                    } else {
                        cout << in + ex/3 + num/3 + 1 << endl;
                    }
                }
            }
        }
    }
}
