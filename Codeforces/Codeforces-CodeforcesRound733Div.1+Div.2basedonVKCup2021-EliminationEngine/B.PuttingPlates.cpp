// time-limit: 2000
// problem-url: https://codeforces.com/contest/1530/problem/B
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

int N;

int main () {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cin >> N;
	while(N--) {
		int x, y;
		cin >> y >> x;
		// top string
		string tb = "";
		if(x % 2 == 1) {
			FOR(i, x) {
				tb.append(to_string((i+1)%2));
			}
		} else {

			FOR(i, x-2) {
				tb.append(to_string((i+1)%2));
			}
			tb.append("01");
		}
		cout << tb << endl;
		string az ="", so="";
		az.append("0"); so.append("1");
		while(az.size() != x-1) {
			az.append("0");
			so.append("0");
		}
		az.append("0"); so.append("1");
		cout << az << endl;
		for(int i = 1; i < (((y-1)/2)); i++) {
			cout << so << endl << az << endl;
		}
		if(y%2 == 0) {
			cout << az << endl;
		}

		cout << tb << endl;
		cout << endl;
	}

    return 0;
}
