#include <bits/stdc++.h>
#define ll long long
#define ull unsigned ll
#define pb push_back
#define umap unordered_map
#define f(i, x, n) for (ll i = x; i < n; i++)
#define endl '\n'
#define optimize()                    \
	ios_base::sync_with_stdio(false); \
	cin.tie(0);                       \
	cout.tie(0);
using namespace std;

int main()
{
	optimize();

	int t;
	cin >> t;

	while (t--)
	{
		string p, s;
		cin >> p >> s;

		bool ok = true;

		for (ll i = 0, j = 0; i < p.size() || j < s.size(); i++, j++)
		{
			if (!ok)
				break;

			ll ii = i, jj = j;

			string p_test, s_test;

			if (p[i] == 'L')
			{
				while (ii < p.size() && p[ii] == 'L')
				{
					p_test.pb(p[ii]);
					ii++;
				}

				while (jj < s.size() && s[jj] == 'L')
				{
					s_test.pb(s[jj]);
					jj++;
				}
			}
			else if (p[i] == 'R')
			{
				while (ii < p.size() && p[ii] == 'R')
				{
					p_test.pb(p[ii]);
					ii++;
				}

				while (jj < s.size() && s[jj] == 'R')
				{
					s_test.pb(s[jj]);
					jj++;
				}
			}

			if ((p_test.size() > s_test.size() || s_test.size() > 2 * p_test.size()) || p_test.empty() || s_test.empty())
			{
				ok = false;
			}

			i = ii - 1, j = jj - 1;
		}

		if (ok)
		{
			cout << "YES" << endl;
		}
		else
		{
			cout << "NO" << endl;
		}
	}
}