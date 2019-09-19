#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define rep(i, a, b) for(int i = a; i < b; i++)
#define repll(i, a, b) for(ll i = a; i < b; i++)
#define all(v) (v).begin(), (v).end()
#define vi vector<int>
#define vvi vector< vi >
#define vl vector<ll>
#define vll vector< vl >
#define pll pair<ll, ll>
#define pii pair<int, int>
#define vpii vector< pii > 
#define vpll vector< pll >
#define pb push_back
#define F first
#define S second
#define sz(a) (int)((a).size())
#define sv() int t; scanf("%d", &t); while(t--)
#define hrittik

long long maxSubArray(vector<long long>& nums) {
        long long m = INT_MIN, mn = INT_MIN, prev = 0;
        for(long long i = 0; i < nums.size(); i++) {
            mn = max(nums[i], prev+nums[i]);
            prev = mn;
            m = max(m, mn);
        }
        return m;
}

int main() {
		
	#ifndef hrittik 
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif

	long long n;
	cin >> n;
	vector<long long> a(n);
	// {-3, 2, 1, 0, -1, 5};
	for(long long i = 0; i < n; i++) cin >> a[i];

	long long m = maxSubArray(a);

	cout << m << "\n";

	return 0;
}
