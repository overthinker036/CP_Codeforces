#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int t;
	cin >> t;

	while (t--) {
		char mat[3][3];

		int r, c;

		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) {
				cin >> mat[i][j];

				if (mat[i][j] == '?') {
					r = i;
					c = j;
				}
			}
		}

		vector<char> v;

		for (int i = 0; i < 3; i++) {
			if (i == r) {
				continue;
			} else {
				v.push_back(mat[i][c]);
			}
		}

		for (int j = 0; j < 3; j++) {
			if (j == c) {
				continue;
			} else {
				v.push_back(mat[r][j]);
			}
		}

		int a = 0, b = 0, cc = 0;

		for (auto it : v) {
			if (it == 'A') {
				a++;
			} else if (it == 'B') {
				b++;
			} else {
				cc++;
			}
		}

		if (a == 0) {
			cout << 'A' << endl;
		} else if (b == 0) {
			cout << 'B' << endl;
		} else if (cc == 0) {
			cout << 'C' << endl;
		}
	}

	return 0;
}