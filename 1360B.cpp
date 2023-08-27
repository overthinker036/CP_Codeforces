#include <bits/stdc++.h>
#define pb push_back
#define f(i, x, n) for(int i = x; i < n; i++)
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

int sub (int x, int y);
 
int main() {
    optimize();
    
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int arr[n];

        f(i, 0, n) {
            cin >> arr[i];
        }

        sort (arr, arr + n);

        int minDiff = INT_MAX;

        f (i, 0, n-1) {
            if (sub (arr[i+1], arr[i]) < minDiff) {
                minDiff = sub (arr[i+1], arr[i]);
            }
        }

        cout << minDiff << endl;
    }
}

int sub (int x, int y) {
    if (x > y) {
        return x - y;
    } else {
        return y - x;
    }
}
