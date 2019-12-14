// Problem : Return min element in the range

#include <bits/stdc++.h>
using namespace std;

void buildTree(vector<int>& tree, vector<int>& a, int index, int beg, int end) {
	// base case
	if(beg > end) return;
	// base case - leaf node
	if(beg == end) {
		tree[index] = a[beg];
		return;
	}
	// recursive case
	int mid = beg+(end-beg)/2;
	// Left subtree
	buildTree(tree, a, 2*index, beg, mid);
	// Right subtree
	buildTree(tree, a, 2*index+1, mid+1, end);

	int left = tree[2*index];
	int right = tree[2*index+1];
	tree[index] = min(left, right);
}

int query(vector<int>& tree, int index, int beg, int end, int x, int y) {
	// base case - complete overlap
	if(beg >= x && end <= y) return tree[index];
	// base case - no overlap
	if(x > end || y < beg) return INT_MAX;
	// recursive case - partial overlap
	int mid = beg+(end-beg)/2;
	return min(query(tree, 2*index, beg, mid, x, y), (query(tree, 2*index+1, mid+1, end, x, y)));
}

void updateNode(vector<int>& tree, int index, int beg, int end, int i, int value) {
	// base case - no overlap
	if(i > end || i < beg) return;
	// base case - reached leaf
	if(beg == end) { // if beg==end and i != current beg this case will never come here because the above condition takes care of it
		tree[index] = value;
		return;
	}
	// Partial overlap
	int mid = beg+(end-beg)/2;
	updateNode(tree, 2*index, beg, mid, i, value);
	updateNode(tree, 2*index+1, mid+1, end, i, value);
	tree[index] = min(tree[2*index], tree[2*index+1]); 
}

int main() {

	vector<int> a = {1, 3, 2, -2, 4, 5};
	int n = a.size();
	vector<int> tree(4*n+1);
	buildTree(tree, a, 1, 0, n-1);
	int mn = query(tree, 1, 0, n-1, 1, 3);
	cout << mn << "\n";
	updateNode(tree, 1, 0, n-1, 1, -5);
	mn = query(tree, 1, 0, n-1, 0, 5);
	cout << mn << "\n";

	return 0;
}