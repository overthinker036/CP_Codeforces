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
  	ll n, m;
  	cin >> n >> m;
  	
  	string arr[n];
  	
  	f(i, 0, n) {
  		cin >> arr[i];
  	}
  	
  	bool outerFlag = true, innerFlag = true;
  	
  	f(i, 0, n) {
  		if (!outerFlag) break;
  		f(j, 0, m) {
  			if (!innerFlag) break;
  			
  			if (arr[i][j] == '1') {
  				bool colOk = true, rowOk = true;
  				ll r = i-1, c = j;
  				
  				while(r >= 0) {
  					
  					if(arr[r][c] == '0') {
  						colOk = false;
  						break;
  					}
  					r--;
  				}
  				
  				r = i, c = j-1;
  				
  				while (c >= 0) {
  					if (arr[r][c]=='0') {
  						rowOk = false;
  						break;
  					}
  					
  					c--;
  				}
  				
  				if (!colOk && !rowOk) {
  					innerFlag = false;
  					outerFlag = false;
  				}
  			}
  		}
  	}
  	
  	if (!outerFlag && !innerFlag) {
  		cout << "NO" << endl;
  	} else {
  		cout << "YES" << endl;
  	}
  }
} 