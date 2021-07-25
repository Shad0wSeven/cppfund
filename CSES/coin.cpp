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

int N, X, coins[100], types[1000001] = {0};

int main () {

	ifstream cin("coin.in");
	cin >> N >> X;
	FOR(i, N) {	cin >> coins[i]; }
	FOR(i, X)	{
		FOR(i, N) {
			types[i + coins[N]] += types[i]; 
		}
	}
	return 0;
}


