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
   
  int t;
  cin >> t;
  
  while(t--) {
  	ll n, m, k, perRowMax, perRowBlank;
  	cin >> n >> m >> k;
  	
  	if (k < n) {
  		cout << 1 << endl;
  	} else {
  		k%n==0 ? perRowMax=k/n : perRowMax = (k/n)+1;
  		perRowBlank = m-perRowMax;
  		
  		if(m >= ((2*perRowMax)-1)) {
  			cout << 1 << endl;
  		} else {
  			if(perRowMax % (perRowBlank+1)==0) {
  				cout << perRowMax/(perRowBlank+1) << endl;
  			} else {
  				cout << (perRowMax/(perRowBlank+1))+1 << endl;
  			}
  		}
  	}
  }
} 