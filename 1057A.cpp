#include <bits/stdc++.h>
#define ll long long
using namespace std;

void dfs (vector<vector<ll>>& g, vector<bool>& vis, ll v, vector<ll>& parent);

void pathReconstruction(vector<ll>& parent, vector<ll>& path, ll n);

int main () {
	ll n, inp; cin >> n;
	
	vector<vector<ll>> g(n+10);
  vector<bool> vis(n+10, 0);
  vector <ll> parent(n+10, -1), path;
	
	for (ll i = 2; i <= n; i++) {
		cin >> inp;
		
		if (inp == 1) {
			g[1].push_back(i);
			g[i].push_back(1);
	  } else {
	  	g[i].push_back(inp);
	  	g[inp].push_back(i);
	  }
	}
	
	dfs(g, vis, 1, parent);
	pathReconstruction(parent, path, n);
	
	for (auto it : path) {
		cout << it << " ";
	}
	
	cout << endl;
}

void dfs (vector<vector<ll>>& g, vector<bool>& vis, ll v, vector<ll>& parent) {
	stack <ll> s;
	s.push(v);
	vis[v] = 1;
	
	while (!s.empty()) {
		ll curr = s.top();
		s.pop();
		
		for (auto it : g[curr]) {
			if (!vis[it]) {
				vis[it] = 1;
				s.push(it);
				parent[it] = curr;
			}
		}
	}
}

void pathReconstruction(vector<ll>& parent, vector<ll>& path, ll n) {
	ll current = n;
	while (current != -1) {
		path.push_back(current);
		current = parent[current];
	}
	
	reverse(path.begin(), path.end());
}