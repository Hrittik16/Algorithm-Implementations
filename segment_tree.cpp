// Segment tree for finding max value in a range query

#include <bits/stdc++.h>
using namespace std;

#define int 				long long
#define f 					first
#define s 					second
#define pb 					push_back
#define mp 					make_pair
#define vi 					vector<int>
#define pii					pair<int, int>
#define mii					map<int, int>
#define all(a) 				(a).begin(),(a).end()
#define sz(x) 				(x).size()
#define rep(i, a, b) 		for(int i = a; i < b; i++)
#define pqb					priority_queue<int>
#define pqs					priority_queue<int, vi, greater<int>>
#define setbits(x)			__builtin_popcountll(x)
#define zerobits(x)			__builtin_ctzll(x) // counts number of leading 0's before 1st occurnace of 1
#define mod 				1000000007
#define inf					1e18+7
#define ps(x, y)			fixed << setprecision(y) << x
#define string_to_int(x)	stoi(x)
#define int_to_string(x)	to_string(x)

const int N = 1e5 + 7;
int a[N], seg[4 * N];

void build(int idx, int beg, int end) {
	if (beg == end) {
		seg[idx] = a[beg];
		return;
	}
	int mid = (beg + end) / 2;
	build(2 * idx + 1, beg, mid);
	build(2 * idx + 2, mid + 1, end);
	seg[idx] = max(seg[2 * idx + 1], seg[2 * idx + 2]);
}

int query(int idx, int beg, int end, int l, int r) {
	if (beg >= l && end <= r) {
		return seg[idx];
	}
	if (l > end || r < beg) return -inf;
	int mid = (beg + end) / 2;
	return max(query(2 * idx + 1, beg, mid, l, r), query(2 * idx + 2, mid + 1, end, l, r));
}

int32_t main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	int n;
	cin >> n;
	rep(i, 0, n) cin >> a[i];

	build(0, 0, n - 1);

	int q;
	cin >> q;
	while (q--) {
		int l, r;
		cin >> l >> r;
		int ans = query(0, 0, n - 1, l - 1, r - 1);
		cout << ans << "\n";
	}

	return 0;
}
