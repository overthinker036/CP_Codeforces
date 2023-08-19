#include <bits/stdc++.h>
#define pb push_back
#define f(i, x, n) for(int i = x; i < n; i++)
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

int main() {
    optimize();

    int t;
    cin >> t;

    while (t--) {
        char ch;
        char grid[8][8];

        int beginningColumn, row, beginningPosFlag = 0;

        f (i, 0, 8) {
            f (j, 0, 8) {
                 cin >> ch;

                 if (ch >= 'a' && ch <= 'z' && beginningPosFlag == 0) {
                    beginningColumn = i;
                    row = j;
                    beginningPosFlag = 1;
                 }

                 grid[i][j] = ch;
            }
        }
        
        f (i, beginningColumn, 8) {
            if (grid[i][row] != '.') {
                cout << grid[i][row];
            }
        }

        cout << endl;

    }
}
