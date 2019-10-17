#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define vl vector<ll>
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

int gcd(int a, int b) {
	if(b == 0) return a;
	return gcd(b, a%b);
}

int main() {
	int a, b;	
	cin >> a >> b;
	int ans = gcd(a, b);
	cout << "Gcd = " << ans << "\n";
	return 0;
}

