#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define f(i, x, n) for(ll i = x; i < n; i++)
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
 
int main() {
    optimize();
    
    ll t;
    cin >> t;

    while (t--) {
        ll arr[3];

        f(i, 0, 3) {
            cin >> arr[i];
        }

        sort(arr, arr+3);

        ll a = arr[0], b = arr[1], c = arr[2];

        if (a == c) {
            cout << "YES" << endl;
        } else {
            if (b % a != 0 || c % a != 0) {
                cout << "NO" << endl;
            } else {
                ll test = (b/a) + (c/a) - 2; /*Because it takes one less step to break the larger number into the pieces of the smallest number. i.e.
                
                To break 36 into 6s, 
                op-1: 6 and 30
                op-2: 6, 6, 24
                op-3: 6, 6, 6, 18
                op-4: 6, 6, 6, 6, 12
                op-5: 6, 6, 6, 6, 6, 6

                but 36/6 = 6 and number of ops = 5 = 6-1
                */
                if (test <= 3) {
                    cout << "YES" << endl;
                } else {
                    cout << "NO" << endl;
                }
            }
        }
    }
}
