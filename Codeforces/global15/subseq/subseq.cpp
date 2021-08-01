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
	
	// ifstream cin("subseq.in");
	cin >> N;
	FOR(i, N){
		int x, permutations = 0; cin >> x;
		string test; cin >> test;
		string test2 = test;
		sort(test2.begin(), test2.end());
		// cerr << test2 << ":" << test << endl;
		FOR(j, x) {

			// cerr << test[j] << ":" << test2[j] << endl;
			if(test[j] != test2[j]) {
				permutations++;
			}
		}
		cout << permutations << endl;
	}
	
    return 0;
}



