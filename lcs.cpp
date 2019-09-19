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
// Spoj : Edit Distance
int lcs_using_recursion(string a, string b, int m, int n) {
	if(m == 0 || n == 0) return 0;
	else if(a[m-1] == b[n-1]) 
		return 1+lcs_using_recursion(a, b, m-1, n-1);
	else 
		return max(lcs_using_recursion(a, b, m, n-1), lcs_using_recursion(a, b, m-1, n));
}

int lcs_using_dp(string a, string b, int m, int n) {
	vector< vector<int> > l(m+1, vector<int>(n+1, 0));
	for(int i = 0; i <= m; i++) {
		for(int j = 0; j <= n; j++) {
			if(i == 0 || j == 0) l[i][j] = 0;
			else if(a[i-1] == b[j-1]) 
				l[i][j] = l[i-1][j-1]+1;
			else
				l[i][j] = max(l[i][j-1], l[i-1][j]);
		}
	}
	return l[m][n];
}


int main() {

	string a, b;
	cin >> a >> b;
	int x = lcs_using_dp(a, b, a.length(), b.length());
	cout << x << "\n";

	return 0;
}


