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

int N, n, pos[50000][5];



bool solve() {
	int found[50000] = {0};

	return true;
}

int main () {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	ifstream cin("gold.in"); 
	cin >> N;
	FOR(i, N) {
		vector<vector<pi> > marathons;
		marathons.resize(5);
		cin >> n;
		
		FOR(j, n) {
			FOR(k, 5) {
				int z; cin >> z;
				pi l(z, j);
				marathons[k].push_back(l);
			}
			
		}
		
		FOR(j, 5) {
			sort(marathons[j].begin(), marathons[j].end());
		}

		FOR(j, 5) {
			FOR(k, n) {
				pos[marathons[j][k].se][j] = k;
			}
		}
		
		FOR(j, n) {
			FOR(k, 5) {
				cerr << pos[j][k] << ":";
			}
			cerr << endl;
		}
		cerr << endl;


		
	}


    return 0;
}



