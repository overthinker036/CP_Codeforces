#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define ull unsigned long long
#define umap unordered_map
#define f(i, x, n) for (ll i = x; i < n; i++)
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

int main() {
	optimize();
	
	string s, t;
	cin >> s >> t;
	
	int moves;
	
	if (s == t) {
		cout << 0 << endl;
	} else {
		int sx = s[0], sy = s[1], tx = t[0], ty = t[1];
		
		if (sx == tx || sy == ty) {
			if (sx == tx) {
				if (sy > ty) {
					moves = sy-ty;
					
					cout << moves << endl;
					for (int i = 1; i <= moves; i++) {
						cout << 'D' << endl;
					}
				} else {
					moves = ty-sy;
					
					cout << moves << endl;
					
					for (int i = 1; i <= moves; i++) {
						cout << 'U' << endl;
					}
				}
			} else {
			  if (sx > tx) {
			  	moves = sx-tx;
			  	cout << moves << endl;
			  	
			  	for (int i = 1; i <= moves; i++) {
			  		cout << 'L' << endl;
			  	}
			  } else {
			  	moves = tx-sx;
			    
			    cout << moves << endl;
			    
			    for (int i = 1; i <= moves; i++) {
			    	cout << 'R' << endl;
			    }
			  }
			}
		} else {
			if (tx < sx && ty > sy) {
				int xdist = sx-tx;
				int ydist = ty-sy;
				
				if (xdist < ydist) {
					cout << xdist + (ydist-xdist) << endl;
					for (int i = 1; i <= xdist; i++) {
						cout << "LU" << endl;
					}
					
					for (int i = 1; i <= ydist-xdist; i++) {
						cout << 'U' << endl;
					}
				} else if (xdist == ydist) {
					cout << xdist << endl;
					
					for (int i = 1; i <= xdist; i++) {
						cout << "LU" << endl;
					}
				} else {
					cout << ydist + (xdist-ydist) << endl;
					
					for (int i = 1; i <= ydist; i++) {
						cout << "LU" << endl;
					}
					
					for (int i = 1; i <= xdist-ydist; i++) {
						cout << 'L' << endl;
					}
				}
			} else if (tx > sx && ty > sy) {
				int xdist = tx-sx;
				int ydist = ty-sy;
				
				if (xdist < ydist) {
					cout << xdist + (ydist-xdist) << endl;
					for (int i = 1; i <= xdist; i++) {
						cout << "RU" << endl;
					}
					
					for (int i = 1; i <= ydist-xdist; i++) {
						cout << 'U' << endl;
					}
				} else if (xdist == ydist) {
					cout << xdist << endl;
					
					for (int i = 1; i <= xdist; i++) {
						cout << "RU" << endl;
					}
				} else {
					cout << ydist + (xdist-ydist) << endl;
					
					for (int i = 1; i <= ydist; i++) {
						cout << "RU" << endl;
					}
					
					for (int i = 1; i <= xdist-ydist; i++) {
						cout << 'R' << endl;
					}
				}
				
			} else if (tx < sx && ty < sy) {
				int xdist = sx-tx;
				int ydist = sy-ty;
				
				if (xdist < ydist) {
					cout << xdist + (ydist-xdist) << endl;
					for (int i = 1; i <= xdist; i++) {
						cout << "LD" << endl;
					}
					
					for (int i = 1; i <= ydist-xdist; i++) {
						cout << 'D' << endl;
					}
				} else if (xdist == ydist) {
					cout << xdist << endl;
					
					for (int i = 1; i <= xdist; i++) {
						cout << "LD" << endl;
					}
				} else {
				  cout << ydist + (xdist-ydist) << endl;
					
					for (int i = 1; i <= ydist; i++) {
						cout << "LD" << endl;
					}
					
					for (int i = 1; i <= xdist-ydist; i++) {
						cout << 'L' << endl;
					}
				}
			} else {
				int xdist = tx-sx;
				int ydist = sy-ty;
				
				if (xdist < ydist) {
					cout << xdist + (ydist-xdist) << endl;
					for (int i = 1; i <= xdist; i++) {
						cout << "RD" << endl;
					}
					
					for (int i = 1; i <= ydist-xdist; i++) {
						cout << 'D' << endl;
					}
				} else if(xdist == ydist) {
					cout << xdist << endl;
					
					for (int i = 1; i <= xdist; i++) {
						cout << "RD" << endl;
					}
				} else {
					cout << ydist + (xdist-ydist) << endl;
					
					for (int i = 1; i <= ydist; i++) {
						cout << "RD" << endl;
					}
					
					for (int i = 1; i <= xdist-ydist; i++) {
						cout << 'R' << endl;
					}
				}
			}
		}
	}
}