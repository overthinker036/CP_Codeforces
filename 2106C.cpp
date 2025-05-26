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
  
  while (t--) {
  	ll n, k;
  	cin >> n >> k;
  	
  	ll a[n], b[n], cnt=0, x=-1, mx = LLONG_MIN, mn = LLONG_MAX;
  	bool ok_1 = true, ok_2 = true;
  	
  	f(i, 0, n) {
  		cin >> a[i];
  	  if (a[i] > mx) mx = a[i];
  	  if (a[i] < mn) mn = a[i];
  	} 
  	
  	f(i, 0, n) {
  		 cin >> b[i];
  		 if(b[i]==-1) {
  		 	cnt++;
  		 } else {
  		 	if (x==-1) {
  		 		x = a[i]+b[i];
  		 	} else if (a[i]+b[i] != x){
  		 		ok_1 = false;
  		 	}
  		 }
  	}
  	
  	if (!ok_1) {
  		cout << 0 << endl;
  	} else {
  		if (cnt == n) {
  		  if (k < (mx-mn)) {
  		  	cout << 0 << endl;
  		  } else if (k == (mx-mn)) {
  		  	cout << 1 << endl;
  		  } else {
  		  	cout << (k-(mx-mn))+1 << endl;
  		  }
    	} else {
  	  	f(i, 0, n) {
  		  	if(b[i] == -1) {
  		  		if ((x > k && x-a[i] > k) || (x<=k && x < a[i])) {
  		  			ok_2 = false;
  		  			break;
  		  		}
  		  	}
  	  	}
  	  	
  	  	!ok_2 ? cout << 0 << endl : cout << 1 << endl;
    	}
  	}
  }
} 