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
	// ifstream cin("pizza.in");
	cin >> N;
	FOR(i, N) {
		ll x;
		cin >> x;
		ll t = x / 120;
		int r  = x % 120;
		int min = 500;
		int test;
		int times;
		// cerr << x << ":" << t << ":" << r << endl;
		FOR(a, 20) {
			FOR(b, 15) {
				FOR(c, 12) {
					test = a*6 + b*8 + c*10;
					if(test >= r) {
						if(test <= min) {
							min = test;
							times = 15*a + 20*b + 25*c;
						}
					}
									
				}
			}
		}
		// cerr << min << endl;
		ll time = times + 12*t*25;
		cout << time << endl;
		
	}

    return 0;
}



