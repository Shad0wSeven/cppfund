// time-limit: 3000
// problem-url: https://codeforces.com/contest/1553/problem/C
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
		string s; cin >> s;
		int aa = 0, ba = 0, ab = 0, bb = 0;
		FOR(i, 10) {
			if(s[i] == '?') {
				if(i % 2) {
					bb++;
				} else {
					aa++;
				}
			} else {
				if(s[i] == '1') {
					if(i % 2) {
						bb++;
						ab++;
					} else {
						aa++;
						ba++;

					}
				}
			}
			cout << i << " " << aa << ":" << ab << "|" << ba << ":" << bb << endl;
		}

	}

    return 0;
}
