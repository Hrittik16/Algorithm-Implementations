/*
ID		: hrittik2
LANG		: C++
TASK		: Task Prioritizing Algorithm
DESCRIPTION 	: Used greedy algorithm to prioritize which task to do to perform maximum tasks. So, we are given start and end time of each tasks and we sorted them based on the end time. Now we selected the first task. For the next tasks we compare the start value with the end time of the previous task. If it is >= the end time of the previous task we select the task otherwise we don't select them.
*/
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
#define max(x, y) (x>y)?x:y
#define min(x, y) (x>y)?y:x
#define pb push_back
#define F first
#define S second
#define sz(a) (int)((a).size())
#define sv() int t; scanf("%d", &t); while(t--)

bool sortbysec(pair<int, int>& a, pair<int, int>& b) {
	return a.second < b.second;
}

void task_priority(vpii& time, int n) {
	sort(all(time), sortbysec);
	int i = 0, j;
	auto x = time.begin();
	int val = x[0].second;
	cout << "( " << x[0].first << ", " << x[0].second << " )" << "\n";
	for(auto y: time) {
		if(i == 0) {
			i++;
			continue;
		}
		if(y.first >= val) {
			cout << "( " << y.first << ", " << y.second << " )"<< "\n";
			val = y.second;
		}
	}
}

int main() {

	vpii time;
	int n, x, y;
	cin >> n;
	rep(i, 0, n) {
		cin >> x >> y;
	       	time.pb({x, y});	
	}
	cout << "\n";
	task_priority(time, n);
	
	return 0;
}
