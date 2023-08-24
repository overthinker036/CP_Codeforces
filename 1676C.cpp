#include <bits/stdc++.h>
#define pb push_back
#define f(i, x, n) for(int i = x; i < n; i++)
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

int distFinder(string a, string b);

int main() {
    optimize();

    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        string arr[n];

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        int minDist = INT_MAX;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (i == j) {
                    continue;
                } else {
                    if (distFinder(arr[i], arr[j]) < minDist) {
                        minDist = distFinder(arr[i], arr[j]);
                    }
                }
            }
        }

        cout << minDist << endl;
    }
}

int distFinder(string a, string b) {
    int res = 0;

    for (int i = 0; i < a.size(); i++) {
        res += abs(a[i] - b[i]);
    }

    return res;
}
