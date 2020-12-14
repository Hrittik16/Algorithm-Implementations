#include <bits/stdc++.h>
#define ll long long
#define vi std::vector<int>
#define vl std::vector<ll>
#define rep(i, a, b) for(int i = a; i < b; i++)
#define repll(i, a, b) for(ll i = a; i < b; i++)
#define all(x) x.begin(), x.end()
#define pb push_back

vl adj[200007];
vl parent(200007);
std::vector<bool> visited(200007, 0);

bool ancestor(ll u, ll s) {
	// Check if u is an ancestor of s
	bool flag = 0;
	while (parent[s] != -1) {
		if (parent[s] == u) {
			flag = 1;
			break;
		}
		s = parent[s];
	}
	return flag;
}

void dfs(ll s) {
	visited[s] = 1;
	for (auto u : adj[s]) {
		if (u == parent[s]) continue;
		if (visited[u]) {
			if (ancestor(u, s)) {
				// code here
			}
		}
		else {
			parent[u] = s;
			dfs(u);
		}
	}
}

int main() {
	ll t;
	std::cin >> t;
	while (t--) {
		ll n;
		std::cin >> n;
		repll(i, 0, n) {
			ll u, v;
			std::cin >> u >> v;
			adj[u].pb(v);
			adj[v].pb(u);
		}
		parent[1] = -1;
		dfs(1);
	}


	return 0;
}