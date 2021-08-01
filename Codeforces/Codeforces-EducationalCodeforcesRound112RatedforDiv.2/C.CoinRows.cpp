// time-limit: 2000
// problem-url: https://codeforces.com/contest/1555/problem/C
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
	FOR(t, N) {
		int n;
		cin >> n;
		vpi arg; arg.resize(n);
		vpi parg; parg.resize(n);
		int sum = 0;
		FOR(i, n) {
			cin >> arg[i].first;
			sum += arg[i].first;
		}
		int sumb = 0;
		FOR(i, n) {cin >> arg[i].second; sumb += arg[i].second;}
		int bb = 100000;
		int atop = 0;
		int abottom = 0;
		int tosub = arg[n - 1].second;
		FOR(i, n) {
			atop += arg[i].first;
			abottom += arg[i].second;
			// cout << atop << ":" << abottom << endl;
			int ascore = max((sum-atop), abottom);
			// cout << ascore << endl;
			if(bb > ascore - tosub) {
				bb = ascore - tosub;
			}
			
		}
		cout << bb << endl;
		// cout << endl;
	}

    return 0;
}
