#include <bits/stdc++.h>
#define pb push_back
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    int arr[n][2];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 2; j++) {
            cin >> arr[i][j];
        }
    }

    int res = 0;

    for (int i = 0; i < n; i++) {
        if ((arr[i][1] - arr[i][0]) >= 2) {
            res++;
        }
    }

    cout << res << endl;
}
