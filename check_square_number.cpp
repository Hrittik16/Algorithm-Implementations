// Prob: Given a number n check if n is a square number.
// Eg. 16 is the square of 4
// Solution: Use binary search to find if there is any number between 1 and n whose square is n

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
#define M (int)1000000007

int check(int n) {
        int beg = 0, end = n, mid;
        while(beg <= end) {
                mid = beg+(end-beg)/2;
                if(mid*mid == n)
                        return mid;
                else if(mid*mid < n)
                        beg = mid+1;
                else
                        end = mid-1;
        }
        return -1;
}

int main() {

        int n;
        cin >> n;
        int validate = check(n);
        if(validate != -1) cout << "YES\n";
        else cout << "NO\n";

        return 0;
}

