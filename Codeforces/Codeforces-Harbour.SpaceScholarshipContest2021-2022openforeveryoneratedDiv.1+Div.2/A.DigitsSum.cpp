// time-limit: 1000
// problem-url: https://codeforces.com/contest/1553/problem/A
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
	int n; cin >> n;
	while(n--) {
		int x;
		cin >> x;
		x++;
		x = x/10;
		cout << x << endl;
	}

    return 0;
}
