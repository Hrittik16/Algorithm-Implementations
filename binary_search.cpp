#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int>& a, int target) {
	int l = 1, r = a.size(), mid;
	while(l <= r) {
		mid = l + (r-l)/2;
		if(a[mid-1] == target) 
			return mid-1;
		else if(a[mid-1] < target)
			l = mid+1;
		else 
			r = mid-1;
	}
	return -1;
}

int main() {

	vector<int> ar = {1, 5, 6, 11, 12, 15};
	int target = 15;
	int index = binarySearch(ar, target);
	cout << index << "\n";
	return 0;
}
