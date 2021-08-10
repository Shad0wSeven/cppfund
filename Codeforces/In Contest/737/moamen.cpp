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
	int t; cin >> t;
	while(t--) {
		int n, k; cin >> n >> k;
		vi x; x.resize(n);
		vpi y; y.resize(n);
		FOR(i, n) { 
			cin >> x[i];
			y[i].fi = x[i];
			y[i].se = i;
			
		}
		sort(y.begin(), y.end());
		int cnt = 1;
		FOR(i, n-1) {
			// cout << y[i].fi << " " << y[i].se <<  endl;
			if(y[i].se + 1 != y[i+1].se) {
				cnt++;
			}

		}
		if(cnt > k) {
			cout << "No" << endl;
		} else {
			cout << "Yes" << endl;
		}
		// cout << cnt << endl;
		// cout << endl << endl;

	}

    return 0;
}



