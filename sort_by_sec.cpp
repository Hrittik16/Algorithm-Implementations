#include <bits/stdc++.h>
using namespace std;
#define ll long long
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

int main() {

	vector< pair<int, int> > vp;
	vp.pb({3, 4});
	vp.pb({2, 1});
	vp.pb({7, 5});
	vp.pb({1, 3});
	sort(all(vp), [](pair<int, int>& a, pair<int, int>& b) { return a.second < b.second;});
	for(auto x: vp) cout << x.first << " " << x.second << "\n";


	return 0;
}


