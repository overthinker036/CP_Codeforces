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

	string xml;
	cin >> xml;
	
	stack <char> s;
	
	for (ll i = 0; i < xml.size(); i++) {
		if (xml[i] >= 97 && xml[i] <= 122) {
			if (s.empty()) {
				s.push(xml[i]);
				cout << '<' << xml[i] << '>' << endl;
			} else {
				if (xml[i] == s.top() && xml[i-1] == '/') {
				  for (ll j = 1; j <= 2*(s.size()-1); j++) {
						cout << ' ';
				 }
					
			   
			   cout << "</" << s.top() << '>' << endl;
			   s.pop();
				} else {
					s.push(xml[i]);
					
					for (ll j = 1; j <= 2*(s.size()-1); j++) {
						cout << ' ';
					}
					
					cout << '<' << xml[i] << '>' << endl;
				}
			}
		}
	}
}