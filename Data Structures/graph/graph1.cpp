#include <bits/stdc++.h>
using namespace std;
// Adj list implementation for integer nodes
class Graph {
public:
	int V;  // number of vertices
	// Array of linked lists of size V
	list<int> *adjList;

	Graph(int v) {
		V = v;
		adjList = new list<int>[V];
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
};
int main() {
	Graph g(4);
	g.addEdge(0, 1);
	g.addEdge(0, 2);
	g.addEdge(0, 3);
	g.addEdge(1, 3);
	g.addEdge(3, 2);
	
	g.printAdjList();

	return 0;
}
