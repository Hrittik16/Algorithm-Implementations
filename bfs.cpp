#include <bits/stdc++.h>
using namespace std;

vector<int> adj[100007];

void bfs(int n, int source, int destination) {
	queue<int> q;
	vector<bool> visited(n + 1);
	vector<int> p(n + 1), d(n + 1);

	q.push(source);
	visited[source] = true;
	p[source] = -1;

	while (!q.empty()) {
		int u = q.front();
		q.pop();
		for (auto x : adj[u]) {
			if (!visited[x]) {
				q.push(x);
				visited[x] = true;
				p[x] = u;
				d[x] = d[u] + 1;
			}
		}
	}

	// Printing Shortest Path
	if (!visited[destination])
		cout << "No Path! \n";
	else {
		vector<int> path;
		for (int i = destination; i != -1; i = p[i]) {
			path.push_back(i);
		}
		reverse(path.begin(), path.end());
		cout << "Path is : ";
		for (auto i : path)
			cout << i << " ";
		cout << "\n";
	}

}

int main() {

	int n, m;
	cin >> n >> m;

	for (int i = 0; i < m; i++) {
		int x, y;
		cin >> x >> y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}

	bfs(n, 2, 3);


	return 0;
}