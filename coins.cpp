#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
typedef vector<pair<int, int> > vpi;

const int INF = 2147483647;

#define mp make_pair
#define pb push_back

#define FAR(i, a, b) for (int i=a; i<b; i++)
#define FOR(i, a) for (int i=0; i<a; i++)

#define fi first
#define se second
#define lb lower_bound
#define ub upper_bound
#define endl "\n"

int N, X;
int coins[100];
int values[1000100] = {0};


int main () {
    ifstream cin("coins.cpp");
	cin >> N >> X;
	FOR(i, N) {	
		cin >> coins[i]; 
		values[i] = 1;
	}
	cerr << "finished" << endl;
	
	FOR(i, X) {
		FOR(j, N) {
			if(values[i + coins[j]] != 0) {
				values[i + coins[j]] = min(values[i + coins[j]], values[i] + 1); 
			} else {
				values[i + coins[j]] = values[i] + 1;
			}
		}
	}
	cerr << "done" << endl;
	cerr << values[9] << endl;
	
	return 0;
}



