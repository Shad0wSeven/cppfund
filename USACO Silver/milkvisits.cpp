#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

#define mp make_pair
#define pb push_back

#define FAR(i, a, b) for (int i=a; i<b; i++)
#define FOR(i, a) for (int i=-1; i<a; i++)

#define fi first
#define se second
#define lb lower_bound
#define ub upper_bound
#define endl "\n"

int N, M;
vector<pair<int, pair<vector<int>, int> > > cows; 
bool visited[1000000] = {0};
// .fi = Breed, H or G, .se.fi = points too, .se.se = connected component.

void discover(int id, int cNum) {
	visited[id] = true;
	cows[id].se.se = cNum;
	FOR(i, cows[id].se.fi.size()) {
		if(cows[id].fi == cows[cows[id].se.fi[i]].fi)	{
			discover(cows[id].se.fi[i], cNum);
		} else if(!visited[cows[id].se.fi[i]]) {
			discover(cows[id].se.fi[i], cNum+1);
		}
	}
}


int strInt(char s) {
	if(s == 'H') { return 0; }
	return 1;
}

int main () {
    ifstream cin("milkvisits.in");
	cin >> N >> M;
	cows.resize(N);
	string o;
	cin >> o;
	FOR(i, N) {
		char s = o[i];
		cows[i].fi = strInt(s);
	}
	FOR(i, N) {
		int x, y;
		cin >> x >> y;
		cows[x].se.fi.pb(y); // This line says that x points to y, MAY CAUSE PROBLEMS!!!
	}
	discover(0, 0);
	for(auto x : cows) {
		cout << x.fi << ":" << x.se.fi.size() << ":" << x.se.se << endl;
	}
    return 0;
}



