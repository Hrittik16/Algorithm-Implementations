#include <bits/stdc++.h>
using namespace std;
#define int long long
int mod_expo(int x, int n, int M) {
	if(n == 0) 
		return 1;
	else if(n%2 == 0) 
		return mod_expo((x*x)%M, n/2, M);
	else 
		return (x*mod_expo((x*x)%M, (n-1)/2, M))%M;
}

signed main() {
	int x, n;
	cin >> x >> n;
	int val = mod_expo(x, n, 1e9+7);
	cout << val << "\n";
	return 0;
}
