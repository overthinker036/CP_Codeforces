#include <bits/stdc++.h>
using namespace std;

int main () {
	int t;
	cin >> t;
	
	while (t--) {
		int n;
		cin >> n;
		
		long long int* arr = new long long int[n];
		
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}
		
		sort(arr, arr+n);
		
		long long int beauty = 0;
		
		for (int i = 1; i < n; i++) {
		  beauty += arr[i] - arr[i-1];
		}
		
		cout << beauty << endl;
	}
}