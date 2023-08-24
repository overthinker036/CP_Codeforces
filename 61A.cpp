#include <bits/stdc++.h>
#define pb push_back
#define f(i, x, n) for(int i = x; i < n; i++)
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
 
int main() {
    optimize();
    
    string num1, num2;
    cin >> num1;
    cin >> num2;

    f (i, 0, num1.size()) {
        if (num1[i] == num2[i]) {
            cout << '0';
        } else {
            cout << '1';
        }
    }

    cout << endl;
}
