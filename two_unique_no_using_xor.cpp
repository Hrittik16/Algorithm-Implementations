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
#define max(x, y) (x>y)?x:y
#define min(x, y) (x>y)?y:x
#define pb push_back
#define F first
#define S second
#define sz(a) (int)((a).size())
#define sv() int t; scanf("%d", &t); while(t--)

int main() {
	int xorr1 = -1, xorr2 = -1;
	vi a = {100, 100, 200, 1, 200, 5, 300, 300};
	int xorr = a[0], val;
	rep(i, 1, a.size()) xorr = xorr^a[i];
	val = xorr; 
	int j = 0;
	while(val) {
		if(val&1) break;
		j++;
		val = val>>1;
	}
	// Check which bit is set and create a bitmask
	// xorr1 calculates the xor of no.s whose bit is set with bitmask
	// xorr1 calculates the xor of no.s whose bit is not set
	rep(i, 0, a.size()) {
			if(a[i]&(1<<j)) {
				if(xorr1 == -1) xorr1 = a[i];
				else xorr1 = xorr1^a[i];
			}
			else {
				if(xorr2 == -1) xorr2 = a[i];
				else xorr2 = xorr2^a[i];
			}
	}
	
	cout << xorr1 << " " << xorr2 << "\n";
	
	return 0;
}
