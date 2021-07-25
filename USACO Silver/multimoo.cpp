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

int N;
int board[250][250];
bool visited[250][250];

vector<pair<int, vector<int> > > cows;

void populate(int x, int y, int id) {
	
	if(visited[y][x]) {
		return;
	}
	
	visited[y][x] = true;
	
	if(id >= cows.size()) { vi l; cows.pb(mp(0, l)); }

	cows[id].fi++;
	
		

}

int main () {
    ifstream cin("multimoo.in");
	
	cin >> N;
	
	FOR(i, N) {
		FOR(j, N) {
			cin >> board[i][j];
		}
	}
	
	

    return 0;
}



