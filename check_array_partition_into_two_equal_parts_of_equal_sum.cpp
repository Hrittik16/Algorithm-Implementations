/*
 * Prob: Check if array can be partitioned into two parts where sum of first part is equal to second part
 * Solution : Put the first element in the first map and the rest of the elements in the second map.
 * Now, check if prefix sum of ith element is equal to the required sum. If it is equal return yes. Else if it is
 * less then required sum check if the sum-pref_sum is present in the second map. If it is more then the sum then check
 * if pref_sum-sum is present in first map and remove it. In every iteration keep on adding the first element from second
 * map to first map and removing first element from second map.
 */
#include <bits/stdc++.h>
#define ll long long
#define rep(i, a, b) for(int i = a; i < b; i++)
#define repll(i, a, b) for(ll i = a; i < b; i++)
#define vi vector<int>
#define vl vector<ll>
#define all(v) v.begin(),v.end()
using namespace std;

int main() {
	
	ll n, s = 0;
	cin >> n;
	vl a(n+5, 0);
	map<ll, ll> first, second;
	repll(i, 0, n) {
		cin >> a[i];
	 	s += a[i];	
	}
	if(s%2 != 0) {
		cout << "NO\n";
		return 0;
	}
	first[a[0]]++;
	repll(i, 1, n) second[a[i]]++;
	ll sDash = 0;
	repll(i, 0, n) {
		sDash += a[i];
		if(sDash == s/2) {
			cout << "YES\n";
			return 0;
		}
		if(sDash < s/2) {
			ll x = (s/2)-sDash;
			if(second[x] > 0) {
				cout << "YES\n";
				return 0;
			}
		}
		else {
			ll y = sDash-(s/2);
			if(first[y] > 0) {
				cout << "YES\n";
				return 0;
			}
		}
		first[a[i+1]]++;
		second[a[i+1]]--;
	}
	
	cout << "NO\n";
	
	
	return 0;
}
