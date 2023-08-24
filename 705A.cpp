#include <bits/stdc++.h>
#define pb push_back
#define f(i, x, n) for(int i = x; i < n; i++)
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
 
int main() {
    optimize();

    int n;
    cin >> n;

    f (i, 0, n) {
        if (i % 2 == 0) {
            cout << "I hate";
        } else {
            cout << "I love";
        }

        if (i == n-1) {
            break;
        } else {
            cout << " that ";
        }
    }

    cout << " it";
    
}
