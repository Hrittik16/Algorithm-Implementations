#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define vl vector<ll>
#define rep(i, a, b) for(int i = a; i < b; i++) 
#define repll(i, a, b) for(ll i = a; i < b; i++) 
#define all(a) (a).begin(),(a).end()
#define pb push_back

void dfs(vector<vector<int>>& g, vector<bool>& visited, int beg) {
	visited[beg] = 1;
	cout << beg << " ";
	for(auto x: g[beg]) {
		if(!visited[x])
			dfs(g, visited, x);
	}
}

int main() {
	
	int v, e;
	cin >> v >> e;
	vector<vector<int>> g(v+1);
	vector<bool> visited(v+1, 0);
	rep(i, 0, e) {
		int x, y;
		cin >> x >> y;
		g[x].pb(y);
		g[y].pb(x);
	}
	dfs(g, visited, 1);

	return 0;
}
