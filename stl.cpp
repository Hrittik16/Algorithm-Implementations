#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
#define rep(i, a, b) for(i = a; i < b; i++)
#define repn(i, a, b, c) for(i = a; i < b; i += c)
#define all(v) (v).begin(), (v).end()

bool f(int x, int y) { return x > y; }

void vectorDemo() {
	vi a = {11, 2, 3, 14};	
	
	/* binary search  */
	sort(a.begin(), a.end());
	int present = binary_search(a.begin(), a.end(), 2);
	if(present) {
		cout << "Yes\n";
		cout << "index = " << present-1 << "\n";
	}
	else cout << "No\n";
	/* *********************************************** */
	
	/* upper bound and lower bound  */
	// only on sorted array (it used binary search)
	a.push_back(100);
	a.push_back(100);
	a.push_back(100);
	a.push_back(100);
	a.push_back(123);
	// the array is 2 3 11 14 100 100 100 100 123
	// We want to find the first occurance of 100
	// we can use a lower_bound which returns an iterator
	// which is >= the value
	// Now, we want the next number > 100 in the array
	// we can use upper_bound which returns an iterator
	// which is > the value
	
	vi::iterator it = lower_bound(a.begin(), a.end(), 100);
	cout << "Value = " << *it << "\n";
	auto it2 = upper_bound(a.begin(), a.end(), 100);
	cout << "Value = " << *it2 << "\n";
	cout << it2-it << "\n"; // difference between the index
	/* ************************************************* */
		

	/* Sorting in reverse order */
	sort(a.begin(), a.end(), f); 
	// f is a comparator function which returns 
	// true or false
	/* ************************************** */
	

		
	/* looping */
	for(auto i : a) {
		i++; // i++ actually doesn't happen in the array
		cout << i << "\n";
	}

	for(auto &i: a) {
		i++; // i++ also updates the array value here
		cout << i << "\n";
	}

	/* ************************************************ */

}


void setDemo() {
	
	/* set */
	
	// say we have sorted a vector and then inserted
	// couple of values. Then we need to sort it again.
	// So, set helps us to insert and sort both at 
	// log(n) time complexity

	set<int> s;	
	s.insert(1);	
	s.insert(2);
	s.insert(-1);
	s.insert(-10);
	// -10 -1 1 2
	
	auto it = s.find(-1);
	if(it == s.end()) cout << "not present\n";
	else cout << "it was present\n";
	
	auto it2 = s.lower_bound(-1);
	auto it3 = s.upper_bound(-1);
	cout << *it2 << " " << *it3 << "\n";

	s.erase(1); // 0 based indexing
	for(auto i : s) cout << i << " ";
	cout << "\n";

}


void mapDemo() {

	map<int, int> a;
	a[1] = 100;
	a[2] = -1;
	a[3] = 200;
	a[1000] = 1;

	map<char, int> cnt;
	string x = "rachit jain";
	for(char c : x) cnt[c]++;   
	// loop is increasing the frequency of each character in the string
	
	
	cout << cnt['a'] << " " << cnt['i'] << "\n";
	
	
	map<char, int>::iterator it = cnt.find('r');
	if(it != cnt.end()) {
		cout << cnt.find('r')->second << "\n";	
	}


}


void PowerOfStl() {


	set< pair<int, int> > s;
	s.insert({ 2, 3 });
	s.insert({ 10, 20 });
	s.insert({ 30, 400 });
	s.insert({ 401, 450 });
	
	/*
	how pairs are compared
	(a, b) and (c, d)
	if a < c then (a, b) will come before (c, d)
	if a == c and B < d then (a, b) will come before (c, d) 
	*/
	

}


int main() {

	PowerOfStl();
	return 0;
}
