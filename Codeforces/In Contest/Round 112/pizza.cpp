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

int pizzas[] =  {6, 8, 10};
int val[] = {1, 1, 1};
ll m = sizeof(pizzas)/sizeof(pizzas[0]);
int N;


void mins(int x) {
	ll tens = x/120;
	ll rem = x % 120;
	ll test = 500;
	ll testtime = 1000;
	FOR(i, 20) {
		FOR(j, 15) {
			FOR(k, 12) {
				int r = 6*i + 8*j + 10*k;
				if(r >= rem) {
					if(r < test) {
						test = r;
						testtime = 15*i + 20*j + 25*k;
					}
				}
			}
		}
	}
	ll time = testtime + tens*25;
	stringstream ss;
	ss << time;
	string str = ss.str();

}
int main () {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	ifstream cin("pizza.in");
	cin >> N;
	FOR(i, N) {
		int X;

		cin >> X;
		mins(X+1);
	}
    return 0;
}



