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

    int inputter;

    vector <int> s1;
    vector <int> s2;
    vector <int> s3;

    f (i, 0, n) {
        cin >> inputter;
        s1.pb(inputter);
    }

    f (i, 0, n-1) {
        cin >> inputter;
        s2.pb(inputter);
    }

    f (i, 0, n-2) {
        cin >> inputter;
        s3.pb(inputter);
    }

    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    sort(s3.begin(), s3.end());

    bool flag1 = true, flag2 = true;

    for (int i = 0; i < n-1; i++) {
        if (s1[i] != s2[i]) {
            cout << s1[i] << endl;
            flag1 = false;
            break;
        }
    }

    if (flag1) {
        cout << s1[s1.size()-1] << endl;
    }

    for (int i = 0; i < n-2; i++) {
        if (s2[i] != s3[i]) {
            cout << s2[i] << endl;
            flag2 = false;
            break;
        }
    }

    if (flag2) {
        cout << s2[s2.size()-1] << endl;
    }
}
