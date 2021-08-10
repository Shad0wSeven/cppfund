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
#define float double

int t;

int main () {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cin >> t;
	while(t--) {
		int n; cin >> n;
		vi test; test.resize(n);
		FOR(i, n) {
			cin >> test[i];
		}
		sort(test.begin(), test.end());
		// cout << test[test.size() - 1] << endl;
		float sum = test[test.size() - 1];
		float avg = 0; 
		FOR(i, n-1) {
			avg+=test[i];
			// cout << test[i] << endl;
		}
		// cout << avg << endl;
		float m = n-1;
		float ans = (float) avg / (float) m;
		// cout << ans << endl;
		float s = sum + ans;
		cout.precision(13);
		cout << s<< endl;
		// cout << endl << endl;
	}


    return 0;
}



