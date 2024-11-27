#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define ull unsigned long long
#define umap unordered_map
#define f(i, x, n) for (ll i = x; i < n; i++)
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

string drinks[11] = {"ABSINTH", "BEER", "BRANDY", "CHAMPAGNE", "GIN", "RUM", "SAKE", "TEQUILA", "VODKA", "WHISKEY", "WINE"};

string ages[18];


int main() {
	optimize();
	
	for (ll i = 0; i < 18; i++) {
		ages[i] = to_string(i);
	}

	ll n;
	cin >> n;

	ll cnt = 0;
	string in;
	
	f(i, 0, n) {
		cin >> in;
		
		f (i, 0, 11) {
			if (drinks[i] == in) {
				cnt++;
			}
		}
		
		f(i, 0, 18) {
			if (ages[i] == in) {
				cnt++;
			}
		}
	}
	
	cout << cnt << endl;
}