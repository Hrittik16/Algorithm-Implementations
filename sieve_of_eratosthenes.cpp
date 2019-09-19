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

vl sieve(ll n) {
	vl p;
	vector<bool> prime(n+1, true);
	for(ll i = 2; i*i <= n; i++) {
		if(prime[i]) {
			for(ll j = i*i; j <= n; j += i) {
				prime[j] = false;
			}
		}
	}
	for(ll i = 2; i <= n; i++) {
		if(prime[i]) p.pb(i);
	}
	return p;
}

int main() {

	ll n;
	cin >> n;
	vl prime = sieve(n);
	repll(i, 0, prime.size()) cout << prime[i] << " ";
	cout << "\n";


	return 0;
}

