#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define vl vector<ll>
#define rep(i, a, b) for(int i = a; i < b; i++) 
#define repll(i, a, b) for(ll i = a; i < b; i++) 
#define all(a) a.begin(),a.end()
#define pb push_back

void bfs(vector<vector<int>>& list, int n, int beg) {
	queue<int> q;
	vector<bool> check(n+1, 0);
	vector<int> dist(n+1, 0); // bfs gives the shortest number of edges to go from beg(source) to any other node
	q.push(beg);
	check[beg] = 1;
	while(!q.empty()) {
		int curr = q.front();
		q.pop();
		for(auto x: list[curr]) {
			if(!check[x]) {
				check[x] = 1;
				q.push(x);
				dist[x] = dist[curr]+1;
			}
		}
	}
}

int main() {
	int n, m;
	cin >> n >> m;
	vector<vector<int>> list(n+1); // adj list
	rep(i, 0, m) {
		int x, y;
		cin >> x >> y;
		list[x].pb(y);
		list[y].pb(x);
	}
	bfs(list, n, 1);


	return 0;
}
