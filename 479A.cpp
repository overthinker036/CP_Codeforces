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
    
    int arr[3];

    cin >> arr[0] >> arr[1] >> arr[2];

    int oneCount = 0;

    for (int i = 0; i < 3; i++) {
        if (arr[i]==1) oneCount++;
    }

    if (oneCount == 0) {
        cout << arr[0]*arr[1]*arr[2] << endl;
    } else if (oneCount == 1) {
        if (arr[0]==1) {
            cout << (arr[0]+arr[1])*arr[2] << endl;
        } else if (arr[1]==1) {
            cout << max(((arr[0]+arr[1])*arr[2]), (arr[0]*(arr[1]+arr[2]))) << endl;
        } else {
            cout << arr[0]*(arr[1]+arr[2]) << endl;
        }
    } else if (oneCount == 2) {
        if (arr[0] == arr[1] && arr[1] == 1) {
            cout << (arr[0]+arr[1])*arr[2] << endl;
        } else if (arr[1] == arr[2] && arr[2] == 1) {
            cout << arr[0] * (arr[1] + arr[2]) << endl;
        } else {
            cout << arr[0] + arr[1] + arr[2] << endl;
        }
    } else {
        cout << 3 << endl;
    }
}
