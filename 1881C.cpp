#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define umap unordered_map
#define f(i, x, n) for (int i = x; i < n; i++)
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

void similarityFix(vector<vector<char>>& mat, ll l, ll r, ll &ans);

char maxChar(char a, char b);

int main()
{
    optimize();

    ll t;
    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;

        vector<vector<char>> mat(n, vector<char>(n));

        f(i, 0, n)
        {
            f(j, 0, n)
            {
                cin >> mat[i][j];
            }
        }

        ll l = 0, r = n - 1, ans = 0;

        while (l < r)
        {
            similarityFix(mat, l, r, ans);

            l++;
            r--;
        }

       cout << ans << endl;
    }
}

char maxChar(char a, char b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

void similarityFix(vector<vector<char>>& mat, ll l, ll r, ll& ans) {
    ll u, rr, d, lt;
    u = rr = l;
    d = lt = r;

    for (; u <= r, rr <= r, d >= l, lt >= l; u++, rr++, d--, lt--) {
        if (mat[l][u] == mat[rr][r] == mat[r][d] == mat[lt][l]) {
            continue;
        } else {
            char target = maxChar(mat[l][u], maxChar(mat[rr][r], maxChar(mat[r][d], maxChar(mat[lt][l], -1))));

            if (mat[l][u] < target) {
                ans += (target-mat[l][u]);
                mat[l][u] = target;
            }

            if (mat[rr][r] < target) {
                ans += (target-mat[rr][r]);
                mat[rr][r] = target;
            }

            if (mat[r][d] < target) {
                ans += (target-mat[r][d]);
                mat[r][d] = target;
            }

            if (mat[lt][l] < target) {
                ans += (target-mat[lt][l]);
                mat[lt][l] = target;
            }
        }
    }
}
