#include <bits/stdc++.h>
#define pb push_back
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, t;
    cin >> n >> t;

    string str;
    cin >> str;

    for (int k = 1; k <= t; k++) {
        for (int i = 0; i < n-1; i++) {
            if (str[i] == 'B' && str[i+1] == 'G') {
                str[i] = 'G';
                str[i+1] = 'B';
                i++;
            }
        }
    }  

    cout << str << endl;
}
