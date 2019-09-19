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

int main() {
		
	vi a = {1, 2, 3};
	rep(i, 0, (1<<a.size())) { // i = 0 to (2^n)-1
		int val = i, j = 0;
		while(val) { // until val becomes 0
			if(val&1) cout << a[j] << " ";  // if the last bit in val is set we print the jth element in the set
			j++;
			val >>= 1;   // keep on shifting bits in val until it becomes 0
		}
		cout << "\n";
	}
	
	return 0;
}


