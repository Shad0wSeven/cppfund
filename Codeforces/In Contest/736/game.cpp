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

struct noble {
	map<int, int> fa;
	map<int, int> fb;
	bool alive = true;
};

vector<noble> nobles; 

void solve() {
	dfs(0);
}

void dfs() {

}


int main () {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n, m;
	nobles.resize(n);
	FOR(i, m) {
		int u, v; cin >> u >> v;
		if(u > v) {
			nobles[v].fa.insert(pair<int, int>(u, 1));
			nobles[u].fb.insert(pair<int, int>(v, 1));
		} else {	
			nobles[v].fb.insert(pair<int, int>(u, 1));
			nobles[u].fa.insert(pair<int, int>(v, 1));
		}
	}
	int q; cin >> q;
	FOR(i, q) {
		int a; cin >> a;
		if(a == 3) {

		} else {
			int u, v; cin >> u >> v;
			if(a == 1) {
				if(u > v) {
					nobles[v].fa.insert(pair<int, int>(u, 1));
					nobles[u].fb.insert(pair<int, int>(v, 1));
				} else {
					nobles[v].fb.insert(pair<int, int>(u, 1));
					nobles[u].fa.insert(pair<int, int>(v, 1));
				}
			} else {
				if(u > v) {
					nobles[u].fb.erase(v);
					nobles[v].fa.erase(u);
				} else  {
					nobles[u].fa.erase(v);
					nobles[v].fb.erase(u);
				}
			}
		}
	}

    return 0;
}



