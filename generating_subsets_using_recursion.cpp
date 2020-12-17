#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define vl vector<ll>
#define rep(i, a, b) for(int i = a; i < b; i++)
#define repll(i, a, b) for(ll i = a; i < b; i++)
#define pb push_back
#define all(x) x.begin(),x.end()

vi subset;

void generate_subset(int k, int n, vi& a) {
	if (k == n + 1) {
		for (auto x : subset)
			cout << a[x - 1] << " ";
		cout << "\n";
	}
	else {
		subset.pb(k);
		generate_subset(k + 1, n, a);
		subset.pop_back();
		generate_subset(k + 1, n, a);
	}
}

int main() {

	vi a = {1, 2, 3};
	int n = a.size();
	generate_subset(1, n, a);

	return 0;
}
