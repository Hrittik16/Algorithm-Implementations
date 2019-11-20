#include <bits/stdc++.h>
using namespace std;
#define int long long

int bin_expo(int x, int n) {
	if(n == 0) 
		return 1;
	else if(n%2 == 0)
		return bin_expo(x*x, n/2);
	else 
		return x*bin_expo(x*x, (n-1)/2);
}

signed main() {
	int x, n;
	cin >> x >> n;	
	int val = bin_expo(x, n);
	cout << val << "\n";
	return 0;
}
