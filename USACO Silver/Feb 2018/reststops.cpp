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

int L, N, F, B;
vpi stops;

int main () {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	ifstream cin("reststops.in");
	cin >> L >> N >> F >> B; stops.resize(N);
	FOR(i, N) {
		cin >> stops[i].se >> stops[i].fi;
	}
	sort(stops.begin(), stops.end());

	FOR(i, N) {
		cout << stops[i].first << ":" << stops[i].se << endl;
	}
	
	FOR(i, N)

    return 0;
}



