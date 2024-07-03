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

    int arr[n][2];

    f(i, 0, n) {
        f(j, 0, 2) {
            cin >> arr[i][j];
        }

        if (arr[i][1] < 0) {
            int xdist = abs(arr[i][0])-1;
            int ydist = (abs(arr[i][1]) + xdist)-1;

            if (xdist >= ydist) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        } else {
            cout << "YES" << endl;
        }
    }
}
