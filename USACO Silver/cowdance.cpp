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

int N, T;
vi cows;


int Tcalc(int K) {
	
}

int main () {
	ifstream cin("cowdance.in");
	cin >> N >> T;
	cows.resize(N);
	FOR(i, N) {
		cin >> cows[i];
	}

	// Basically, first calculate the minimum value of K, and the maximum value of K
	// Then Binary search on this with a function to output if it's true or not.
	
    return 0;
}



