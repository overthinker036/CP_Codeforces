#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool isNeighbour(pair<int, int> p1, pair<int, int> p2);

int main () {
    vector<vector<char>> grid(4, vector<char>(4));

    int A = 0, B = 0, C = 0;
	
    for (int i = 1; i <= 3; i++) {
		for (int j = 1; j <= 3; j++) {
			cin >> grid[i][j];
			
			if (grid[i][j] == 'A') {
				A++;
			} else if (grid[i][j] == 'B') {
				B++;
			} else if (grid[i][j] == 'C') {
				C++;
			}
		}
	}
	
	if (A == 0 && B == 0) {
		cout << "CCC" << endl;
	} else if (B == 0 && C == 0) {
		cout << "AAA" << endl;
	} else if (A == 0 && C == 0) {
		cout << "BBB" << endl;
	} else {

        /*
            {"AA" : {(x1, y1), (x2, y2)}}
        */
        vector<pair<string, pair<pair<int, int>, pair<int, int>>>> com1;
        
        string ans;

        for (int i = 1; i <= 3; i++) {
            for (int j = 1; j <= 3; j++) {
                for (int k = 1; k <= 3; k++) {
                    for (int l = 1; l <= 3; l++) {
                        if (isNeighbour({i, j}, {k, l})) {
                            string temp;
                            temp += grid[i][j];
                            temp += grid[k][l];
                            com1.push_back({temp, {{i, j}, {k, l}}});
                        }
                    }
                }
            }
        }

        sort(com1.begin(), com1.end());

        ans += com1[0].first;

        pair<string, pair<pair<int, int>, pair<int, int>>> equals = com1[0];

        vector<pair<string, pair<pair<int, int>, pair<int, int>>>> com2;

        com2.push_back(com1[0]);

        for (ll i = 1; i < com1.size(); i++) {
            if (com1[i].first != equals.first) {
                break;
            }

            com2.push_back(com1[i]);
        }

        vector<string> com3;

        for (auto it : com2) {
            for (int i = 1; i <= 3; i++) {
                for (int j = 1; j <= 3; j++) {
                    if (i == it.second.first.first && j == it.second.first.second) {
                        continue;
                    } else if (isNeighbour({i, j}, it.second.second)) {
                        string temp = "";
                        temp += ans;
                        temp += grid[i][j];
                        com3.push_back(temp);
                    }
                }
            }
        }

        sort(com3.begin(), com3.end());

        cout << com3[0] << endl;
	}
}

bool isNeighbour(pair<int, int> p1, pair<int, int> p2) {
	if (p1 == p2) {
        return false;
    } else if ((abs(p1.first-p2.first) <= 1) && (abs(p1.second-p2.second) <= 1)) {
		return true;
	} else {
		return false;
	}
}
