// BFS(Breadth First Search) - iterative way of traversing
#include <bits/stdc++.h>
using namespace std;
class Graph {
public:
        int V;  // number of vertices
        // Array of linked lists of size V
        list<int> *adjList;
		vector<int> dist;
        Graph(int v) {
                V = v;
                adjList = new list<int>[V];
		dist = vector<int>(V); // dist is the depth of ith node or we can say distance between the ith node and the root node.
        }
        void addEdge(int u, int v, bool bidir=true) {
                adjList[u].push_back(v);
                if(bidir) adjList[v].push_back(u);
        }
        void printAdjList() {
                for(int i = 0; i < V; i++) {
                        cout << i << " -> ";
                        for(auto node: adjList[i]) {
                                cout << node << ",";
                        }
                        cout << "\n";
                }
        }

	void bfs(int src) {
		// traverse allthe nodes of the graph
		queue<int> q;
		bool *visited = new bool[V]{0};
		q.push(src);
		visited[src] = true;
		dist[src] = 0;
		while(!q.empty()) {
			int node = q.front();
			cout << node << ",";
			q.pop();
			for(int neighbour: adjList[node]) {
				if(!visited[neighbour]) {
					q.push(neighbour);
					visited[neighbour] = true;
					dist[neighbour] = dist[node]+1; 
				}
			}
		}
		cout << "\n";
	}
};
int main() {
        Graph g(6);
        g.addEdge(0, 1);
        g.addEdge(1, 2);
        g.addEdge(0, 4);
        g.addEdge(2, 4);
        g.addEdge(3, 2);
	g.addEdge(2, 3);
	g.addEdge(3, 5);

        g.bfs(0);

        return 0;
}

