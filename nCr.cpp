/*
	Prob: Find nCr where 1 <= r <= n <= 100
	Solution: 
	Using property nCr = (n-1)Cr + (n-1)C(r-1) we get time limit excedeed
	So, since r, n <= 100 we can simplify the expansion of nCr i.e., 
	nCr = n!/((n-r)! r!)
	Simplifying we can get in numerator n*(n-1)*(n-2)*...*max(r, n-r) and in
	denominator we can get min(r, n-r) * min(r, n-r)-1 *...*3*2*1
	We can store numerator and denominator in vectors and then divide individual
	elements in denominator to elements in numerator

*/

#include <bits/stdc++.h>
using namespace std;
#define ll uint64_t
#define vi vector<int>
#define vl vector<ll>
#define pii pair<int, int>
#define pll pair<ll, ll>
#define vpii vector< pii >
#define vpll vector< pll >
#define rep(i, a, b) for(int i = a; i < b; i++) 
#define repll(i, a, b) for(ll i = a; i < b; i++) 
#define all(a) (a).begin(),(a).end()
#define pb push_back
#define F first
#define S second
#define string_to_int(s) stoi(s)
#define string_to_ll(s) stoll(s)
#define int_to_string(n) to_string(n)
#define ll_to_string(n) to_string(n)
#define char_to_int(c) c-'0'
#define int_to_char(c) c+'0'
#define to_uppercase(s) transform(all(s), s.begin(), ::toupper)
#define to_lowercase(s) transform(all(s), s.begin(), ::tolower)
//#define test

int main() {
	
	#ifdef test
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif

	ll n, r;
	cin >> n >> r;
	while(n != 0 && r != 0) {
		ll mn = min(r, n-r);
		ll mx = max(r, n-r);
		vl a, b;
		for(ll i = n; i > mx; i--) a.pb(i);
		for(ll j = mn; j > 1; j--) b.pb(j);
		ll flag = 1, prod = 1;
			for(ll i = 0; i < b.size(); i++) {
				for(ll j = 0; j < a.size(); j++) {
					if(a[j]%b[i] == 0 && a[j] != 1 && b[i] != 1) {
						a[j] = a[j]/b[i];
						b[i] = 1;
						break;
					}
				}
			}

		for(ll k = 0; k < a.size(); k++) prod *= a[k];
		for(ll l = 0; l < b.size(); l++) prod /= b[l]; 

		cout << n << " things taken " << r << " at a time is " << prod << " exactly.\n";
		cin >> n >> r;
	}

	return 0;
}

