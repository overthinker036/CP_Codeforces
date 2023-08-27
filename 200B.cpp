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

    double arr[n];

    f(i, 0, n) {
        cin >> arr[i];
    }

    double res;

    f (i, 0, n) {
        res += (arr[i]/100);
    }

    cout << (res/(double)n) * 100 << endl;
}
