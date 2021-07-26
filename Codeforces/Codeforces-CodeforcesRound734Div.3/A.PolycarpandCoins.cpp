// time-limit: 1000
// problem-url: https://codeforces.com/contest/1551/problem/A
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

int testcases;



pi solve(int x) {
	int final = x % 3;
	int rest = x / 3;
	pi z = {rest, rest};

	if(final == 1) {
		z.fi++;
	} else if(final == 2) {
		z.se++;
	}
	return z;
}

int main () {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	cin >> testcases;
	FOR(t, testcases) {
		int s;
		cin >> s;
		pi final = solve(s);
		cout << final.fi << " " << final.se << endl;
	}

    return 0;
}
