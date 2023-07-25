#include <bits/stdc++.h>
using namespace std;
#define pb push_back

int sub(int x, int y);
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n, m, k, H;
        cin >> n >> m >> k >> H;

        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        vector <int> heightGaps;
        int g;

        for (int i = 0; i < n; i++) {
            g = sub(H, arr[i]);
            heightGaps.pb(g);
        }

        vector <int> divByK;

        for (int i = 0; i < heightGaps.size(); i++) {
            if (heightGaps[i] % k == 0) {
                divByK.pb(heightGaps[i]);
            }
        }

        int res = 0;

        for (int i = 0; i < divByK.size(); i++) {
            if (((divByK[i] / k) < m) && (divByK[i] / k) != 0) {
                res++;
            }
        }

        cout << res << endl;
    }   
}

int sub (int x, int y) {
    if (x > y) {
        return x - y;
    } else {
        return y - x;
    }
}
