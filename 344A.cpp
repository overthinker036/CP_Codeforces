#include <bits/stdc++.h>
#define pb push_back
#define f(i, x, n) for(int i = x; i < n; i++)
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
 
int main() {
    optimize();
    
    int n, res = 1;
    cin >> n;
    int arr[n];

    f(i, 0, n) {
        cin >> arr[i];
    }

     f(i, 0, (n-1)) {
        if (arr[i+1] != arr[i]) {
            res++;
        }
     }

     cout << res << endl;

}
