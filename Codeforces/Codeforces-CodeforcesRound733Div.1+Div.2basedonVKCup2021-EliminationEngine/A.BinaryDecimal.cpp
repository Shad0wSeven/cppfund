// time-limit: 1000
// problem-url: https://codeforces.com/contest/1530/problem/A
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

int main () {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int N;
	cin >> N;
	FOR(i, N) {
		string s; cin >> s;
		sort(s.begin(), s.end());
		cout << s.at(s.size() - 1) << endl;
	}

    return 0;
}
