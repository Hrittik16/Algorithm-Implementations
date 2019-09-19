#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define rep(i, a, b) for(int i = a; i < b; i++)
#define repll(i, a, b) for(ll i = a; i < b; i++)
#define all(v) (v).begin(), (v).end()
#define vi vector<int>
#define vvi vector< vi >
#define vl vector<ll>
#define vvl vector< vl >
#define pll pair<ll, ll>
#define pii pair<int, int>
#define vpii vector< pii > 
#define vpll vector< pll >
#define pb push_back
#define F first
#define S second

int fib(int n, vi& dp) {
	if(n == 1 || n == 2) dp[n] = 1;
	else if(dp[n] == -1)
		dp[n] = fib(n-1, dp)+fib(n-2, dp);
	return dp[n];
}

int main() {
	int n;
	cin >> n;
	vi dp(n+1, -1);
	int f = fib(n, dp);
	cout << f << "\n";

	return 0;
}

