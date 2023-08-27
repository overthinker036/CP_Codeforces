#include <bits/stdc++.h>
#define pb push_back
#define f(i, x, n) for(int i = x; i < n; i++)
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
 
int main() {
    optimize();
    
    long long int n;
    cin >> n;

    (n % 2 == 0) ? (cout << n/2 << endl) : (cout << -(n - (n/2)));
}
