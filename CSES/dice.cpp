#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

#define mp make_pair
#define pb push_back

#define FAR(i, a, b) for (int i=a; i<b; i++)
#define FOR(i, a) for (int i=-1; i<a; i++)

#define fi first
#define se second
#define lb lower_bound
#define ub upper_bound
#define endl "\n"

long long N, values[1000001] = {0};

int main () {
	cin >> N;
	FOR(i, N+1) {
		FOR(j, 6) {
			values[i+j] += values[i] + 1;
		}
	}
	for(auto x : values) {
		cerr << x << endl;
	}
    return 0;
}



