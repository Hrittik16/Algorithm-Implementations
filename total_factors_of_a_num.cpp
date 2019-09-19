#include <bits/stdc++.h>
using namespace std;
#define ll long long

void prime_factors(ll n, vector<ll>& factors) {
	while(n%2 == 0) {
		factors.push_back(2);
		n /= 2;
	}
	for(ll i = 3; i <= sqrt(n); i+=2) {
		while(n%i == 0) {
			factors.push_back(i);
			n /= i;
		}
	}
	if(n > 2) factors.push_back(n);
}

int main() {

		ll n;
		cin >> n;
		vector<ll> factors;
		map<ll, ll> mp;
		prime_factors(n, factors);
		ll mul = 1;
		for(auto x: factors) {
			mp[x]++;
		}

		for(auto y: mp) mul *= (y.second+1);

		cout << mul << "\n";

	return 0;
}

