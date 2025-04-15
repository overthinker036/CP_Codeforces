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

    int arr[n];

    f(i, 0, n) cin >> arr[i];

    int eCnt = 0, oCnt = 0;

    f(i, 0, n) {
        if (arr[i]&1){
            oCnt++;
        } else {
            eCnt++;
        }
    }

    if (oCnt == 1) {
        f(i, 0, n) {
            if(arr[i]&1) {
                cout << i+1 << endl;
                break;
            }
        }
    } else {
        f(i, 0, n) {
            if(!(arr[i]&1)) {
                cout << i+1 << endl;
                break;
            }
        }
    }
}
