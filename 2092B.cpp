#include <bits/stdc++.h>
#define ll long long
#define ull unsigned ll
#define pb push_back
#define umap unordered_map
#define f(i, x, n) for (ll i = x; i < n; i++)
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

int main() {
	optimize();
   
  ll t;
  cin >> t;
  
  while(t--) {
  	ll n;
  	cin >> n;
  	
  	string a, b;
  	cin >> a >> b;
  	
  	ll a_ones = 0, b_zrs = 0, a_e_ones = 0, a_o_ones = 0, b_e_zrs = 0, b_o_zrs = 0;
  	
  	f(i, 0, n) {
  		if (a[i] == '1') {
  			a_ones++;
  			
  			if (i&1) {
  				a_o_ones++;
  			} else {
  				a_e_ones++;
  			}
  		} 
  		
  		if(b[i] == '0') {
  			b_zrs++;
  			
  			if(i&1) {
  				b_o_zrs++;
  			} else {
  				b_e_zrs++;
  			}
  		}
  	}
  	
  	if (a_ones == 0) {
  		cout << "YES" << endl;
  	} else if (b_zrs < a_ones) {
  		cout << "NO" << endl;
  	} else {
  		if (b_o_zrs >= a_e_ones && b_e_zrs >= a_o_ones) {
  			cout << "YES" << endl;
  		} else {
  			cout << "NO" << endl;
  		}
  	}
  }
} 