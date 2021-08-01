// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/1555/D
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

string listy[6] = {"abc", "acb", "bca", "bac", "cba", "cab"};
int currn[6] = {0};
int prefix[6][200005];

int main () {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n, m; cin >> n >> m;
	string s; cin >> s;
	for(int i=1; i < n+1; i++) {
		int y = (i-1) % 3;
		FOR(j, 6) {
			if(listy[j].at(y) != s.at(i-1)) {
				currn[j]++;
			}
				prefix[j][i] = currn[j];
		}
	}
	// FOR(i, 6) {
		// FOR(j, n+1) {
			// cout << prefix[i][j] << ":";
		// }
		// cout << endl;
	// }
	// FOR(i, 6) {
		// cout << currn[i] << endl;
	// }
	FOR(i, m) {
		int x, y; cin >> x >> y;
		int ans = 1000000;
		FOR(j, 6) {
			if (ans > prefix[j][y] - prefix[j][x-1]) {
				ans = (prefix[j][y] - prefix[j][x-1]);
			}
		}
		cout << ans << endl;
	}


    return 0;
}
