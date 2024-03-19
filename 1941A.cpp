#include <bits/stdc++.h>
using namespace std;

int main () {
	int t;
	cin >> t;
	
	while (t--) {
		int n, m, k;
		cin >> n >> m >> k;
		
		int* arr1 = new int[n];
		int* arr2 = new int[m];
		
		for (int i = 0; i < n; i++) {
			cin >> arr1[i];
		}
	
	  for (int i = 0; i < m; i++) {
	  	cin >> arr2[i];
	  }
	  
	  int res = 0;
	  
	  for (int i = 0; i < n; i++) {
	    for (int j = 0; j < m; j++) {
	    	if (arr1[i] + arr2[j] <= k) {
	    		res++;
	    	}
	    }
	  }
	  
	  cout << res << endl;
	}
}