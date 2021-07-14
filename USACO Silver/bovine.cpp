#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

#define mp make_pair
#define pb push_back

#define FAR(i, a, b) for (int i=a; i<b; i++)
#define FOR(i, a) for (int i=0; i<a; i++)

#define fi first
#define se second
#define lb lower_bound
#define ub upper_bound
#define endl "\n"

int N, items[100000] = {0};
vector<vi> pointers;
vi empty;

void check(int x) {
	if(items[x] != 0) {
		return;
	}
	for(int y = 0; y < pointers[x].size(); y++) {
		items[pointers[x][y]]--;
		check(pointers[x][y]);
	}
	pointers.clear();
	cout << x << "is empty" << endl;
	empty.pb(x);
}


int main () {
    ifstream cin("shuffle.in");
	cin >> N;
	pointers.resize(N);
	FOR(i, N) {
		int x; cin >> x;
		items[x]++;
		pointers[i].pb(x);
	}
	cout << "finished" << endl;
	// Now DFS
	FOR(i, N) {
		check(i);
	}
	cout << empty.size() << endl;
    return 0;
}



