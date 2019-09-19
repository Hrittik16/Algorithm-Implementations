#include <bits/stdc++.h>
using namespace std;
// template for generic graph
template<typename T>
class Graph {
public:
	map<T, list<T>> adjList;
	Graph() {
	
	}
	void addEdge(T u, T v, bool bidir=true) {
		adjList[u].push_back(v);
		if(bidir) adjList[v].push_back(u);
	}
	void printAdjList() {
		for(auto row: adjList) {
			cout << row.first << "->";
			for(auto x: row.second) {
				cout << x << ",";
			}
			cout << "\n";
		}
	}

};
int main() {
		
	Graph<int> g;
	g.addEdge(10, 12);
	g.addEdge(10, 14);
	g.addEdge(12, 16);
	g.addEdge(12, 18);
	g.addEdge(12, 20);
	g.addEdge(10, 16);

	g.printAdjList();

	return 0;
}
