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
        ll n, k;
        cin >> n >> k;

        ll arr[n];
        bool okay = false;

        f(i, 0, n) {
            cin >> arr[i];

            if (arr[i]%k==0) {
                okay = true;
            }
        }

        if (n==1) {
            if (k==2||k==3||k==5) {
                cout << k-arr[0] << endl;
            } else {
                if (arr[0] < k) {
                    cout << k-arr[0] << endl;
                } else if (arr[0]==k) {
                    cout << 0 << endl;
                } else {
                    cout << k-(arr[0]%k) << endl;
                }
            }
        } else {
            if (okay) {
                cout << 0 << endl;
            } else {
                if (k==2 || k==3 || k==5) {
                    ll ans = LLONG_MAX;

                    f(i, 0, n) {
                        ll gap = k-(arr[i]%k);
                        if (gap < ans) {
                            ans = gap;
                        }
                    }

                    cout << ans << endl;
                } else {
                    bool ev_gaps[n];
                    int four_gaps[n];

                    f (i, 0, n) {
                        if (arr[i]%2==0) {
                            ev_gaps[i] = false;
                        } else {
                            ev_gaps[i] = true;
                        }

                        if (arr[i] % 4 == 0) {
                            four_gaps[i]=0;
                        } else {
                            four_gaps[i] = 4-(arr[i]%4);
                        }
                    }

                    sort(four_gaps, four_gaps+n);
                    sort(ev_gaps, ev_gaps+n);

                    cout << min(four_gaps[0], ev_gaps[0]+ev_gaps[1]) << endl;
                }
            }
        }

    }
}
