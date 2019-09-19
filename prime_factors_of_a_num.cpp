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
		prime_factors(n, factors);
		for(ll i = 0; i < factors.size(); i++) cout << factors[i] << " ";
		cout << "\n";

	return 0;
}

