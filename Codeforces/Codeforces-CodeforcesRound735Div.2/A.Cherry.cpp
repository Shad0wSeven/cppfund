// time-limit: 1000
// problem-url: https://codeforces.com/contest/1554/problem/A
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
	FOR(i, N) {
		ll n; cin >> n;
		ll cm = 0;
		vector<ll> numbers;
		numbers.resize(n);
		FOR(j, n) {
			cin >> numbers[j];
		}
		FOR(k, n-1) {
			ll ans = numbers[k+1]*numbers[k];
			if(ans > cm) {
				cm = ans;
			}
		}
		cout << cm << endl;
		// cout << endl;
	}

    return 0;
}
