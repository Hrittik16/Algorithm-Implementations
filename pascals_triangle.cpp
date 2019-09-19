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

int fact(int n) {
	if(n == 0 || n == 1)
		return 1;
	else return n*fact(n-1);
}

int main() {
	int f = 0;
	for(int i = 0; i <= 5; i++) {
		for(int j = 5; j >= i; j--)
			cout << " ";
		for(int k = 0; k <= i; k++) {
			cout << fact(i)/(fact(i-k)*fact(k)) << " ";
		}
		cout << "\n";
	}

	
	return 0;
}