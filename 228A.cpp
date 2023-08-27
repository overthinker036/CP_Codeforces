#include <bits/stdc++.h>
#define pb push_back
#define f(i, x, n) for(int i = x; i < n; i++)
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
 
int main() {
    optimize();
    
    int s1, s2, s3, s4;
    cin >> s1 >> s2 >> s3 >> s4;

    vector <int> vc;

    vc.pb(s1);

    if (s2 != s1) {
        vc.pb(s2);
    }

    if (s3 != s2 && s3 != s1) {
        vc.pb(s3);
    }

    if (s4 != s1 && s4 != s2 && s4 != s3) {
        vc.pb(s4);
    }

    cout << 4 - vc.size() << endl;

}
