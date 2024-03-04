#include <bits/stdc++.h>
using namespace std;

int main () {
	  int t;
	  cin >> t;
	
	  while (t--) {
		    long long int a, b, tempa, tempb;
		    cin >> a >> b;
		
		    tempa = a, tempb = b;
		
		    if (a == 1 && b == 1) {
			       cout << "No" << endl;
		    } else if (a % 2 != 0 && b % 2 != 0) {
			cout << "No" << endl;
		} else {
			if (a % 2 == 0 && b % 2 != 0) {
				a /= 2;
				b *= 2;
				
				if ((a != tempa && b != tempb) && (b != tempa && a != tempb)) {
					cout << "Yes" << endl;
				} else {
					cout << "No" << endl;
				}
			} else if (a % 2 != 0 && b % 2 == 0) {
				b /= 2;
				a *= 2;
				
				if ((a != tempa && b != tempb) && (b != tempa && a != tempb)) {
					cout << "Yes" << endl;
				} else {
					cout << "No" << endl;
				}
			} else {

				a /= 2;
				b *= 2;
				
				if ((a != tempa && b != tempb) && (b != tempa && a != tempb)) {
					cout << "Yes" << endl;
					continue;
				} else {
					a = tempa;
					b = tempb;
					
					b /= 2;
					a *= 2;
					
					if ((a != tempa && b != tempb) && (b != tempa && a != tempb)) {
						cout << "Yes" << endl;
						continue;
					} else {
						cout << "No" << endl;
					}
				}
			}
		}
	}
}