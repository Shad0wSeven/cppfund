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


void check(int x, int m) {
		bool tr = false;
		vpi mods (10, make_pair(0, -1));
		for(int j = 1; j < m; j++) {
			int y = x % j;
			if(mods[y].fi == 1) {
				// cout << mods[y].se << " " << j << endl;
				cout << true << endl;
				tr = true;
				break;
			} else {
				mods[y].fi = 1;
				mods[y].se = j;
			}
			
		}
		if(!tr && m==1000) {
			
		}
		if(!tr) {
			check(x, 1000);
		}
}

int main () {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int N;
	cin >> N;
	FOR(i, N) {
		int x;:ew
		cin >> x;
		check(x, 10);
	}

		

    return 0;
}



