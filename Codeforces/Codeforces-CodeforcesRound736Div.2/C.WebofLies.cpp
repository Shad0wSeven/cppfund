// time-limit: 2000
// problem-url: https://codeforces.com/contest/1549/problem/C
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

int n, m, q;

struct noble {
	int fa = 0;
	map<int, int> friends; // 0 = above, 1 = below;
};
vector<noble> nobles;
map<int, int> survivors;
void update(int x) {
	if(nobles[x].fa == 0) {
		if(survivors.find(x) == survivors.end()) {
			survivors.insert(pair<int, int>(x, 0));
		}
	} else {
		survivors.erase(x);
	}
}


int main () {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> m;
	nobles.resize(n+1);
	FOR(i, m) {
		int x, y;
		cin >> x >> y;
		nobles[x].friends.insert(pair<int, int>(y,(x>y))); nobles[x].fa += (y>x);
		nobles[y].friends.insert(pair<int, int>(x,(y > x))); nobles[y].fa += (x>y);
	}
	FOR(i, n) {
		update(i);
	}

	cin >> q;
	FOR(i, q) {
		int u;
		cin >> u;
		if(u == 3) {cout << survivors.size() << endl;}
		else {
			if(u == 1) {
				int x, y;
				cin >> x >> y;
				nobles[x].friends.insert(pair<int, int>(y,(x>y))); nobles[x].fa += (y>x);
				nobles[y].friends.insert(pair<int, int>(x,(y > x))); nobles[y].fa += (x>y);
				update(x); update(y);
			} else {
				int x, y;
				cin >> x >> y;
				nobles[x].friends.erase(y); nobles[x].fa -= (y>x);
				nobles[y].friends.erase(x); nobles[y].fa -= (x>y);
				update(x); update(y);
			}
		}
	}

    return 0;
}
