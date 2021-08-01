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


struct racer {
	int id;
	int races[5];
};


bool cmp(racer x, racer y) {
	int wins = 0;
	FOR(i, 5) {
		if(x.races[i] < y.races[i]) {
			wins++;
		}
	}
	return wins >= 3;
}

int main () {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
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

		FOR(j, 5){
			FOR(k, n) {
				pos[marathons[j][k].se][j] = k;
			}
		}
		
		vector<racer> racers;

		FOR(j, n) {
			racer z;
			z.id = j;
			FOR(k, 5) {
				// cout << pos[j][k] << ":";
				z.races[k] = pos[j][k];
			}
			// cout << endl;
			racers.push_back(z);
		}
		sort(racers.begin(), racers.end(), cmp);
		FOR(i, racers.size()) {
			// cout << racers[i].id << endl;
		}
		// cout << endl;

		// check if 0 is actually valid
		racer winner = racers[0];
		bool good = true;
		for(int i = 1; i < n; i++) {
			good = cmp(racers[0], racers[i]);
		}
		// cout << good << endl << endl;
		if(good) {
			cout << racers[0].id+1 << endl;
		} else {
			cout << "-1" << endl;
		}

	}


    return 0;
}



 
