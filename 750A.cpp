#include <bits/stdc++.h>
#define pb push_back
#define f(i, x, n) for(int i = x; i < n; i++)
#define optimize() ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define endl '\n'
using namespace std;
 
int main() {
    optimize();
    
    int n, k;
    cin >> n >> k;

    int solvingTime = 240 - k, spentTime = 0, solved = 0;

    for (int i = 1; i <= n; i++) {
        spentTime += (5 * i);
        solved++;

        if (solvingTime - spentTime < 0) {
            solved--;
            break;
        }
    }

    cout << solved << endl;
}
