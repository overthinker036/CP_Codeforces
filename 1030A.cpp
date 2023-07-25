#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int i = 0;

    for (; i < n; i++) {
        if (arr[i] == 1) {
            cout << "HARD" << endl; return 0;
        }
    }

    cout << "EASY" << endl;
}