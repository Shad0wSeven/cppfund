// time-limit: 1000
// problem-url: https://codeforces.com/contest/1551/problem/B1
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
typedef vector<pair<int, int> > vpi;

#define FAR(i, a, b) for (int i=a; i<b; i++)
#define FOR(i, a) for (int i=0; i<a; i++)

#define fi first
#define se second
#define endl "\n"



int returnVal (char x)
{
    return (int) x - 97;
}

int t;


void solve(string s) {
	int letters[50] = {0}; // 1 = green, 2 = red, 3 = both
	FOR(i, s.size()) {
		letters[returnVal(s.at(i))]++;
	}
	int char1 = 0, char2 = 0;
	FOR(i, 50) {
		if(letters[i] > 1) {
			char2++;
		} else if(letters[i] == 1) {
			char1++;
		}
	}
	int ans = (char1/2) + char2;
	cout << ans << endl;
}

int main () {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	cin >> t;
	FOR(i, t) {
		string s;
		cin >> s;
		solve(s);
	}
	
    return 0;
}
