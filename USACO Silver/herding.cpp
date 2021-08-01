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
vi cows;
vi pref;

int main () {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cin >> N;
	cows.resize(N);
	pref.resize(N);
	FOR(i, N) {
		cin >> cows[i];
	}
	// Prefix Sum
	int c = 0;
	FOR(i, N) {
		
	}

    return 0;
}



