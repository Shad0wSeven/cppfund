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

int main () {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int N;
	cin >> N;
	FOR(z, N) {
		int n;
		cin >> n;
		string top, bottom;
		cin >> top >> bottom;
		int cnt = 0;
		FOR(i, n) {
			if(bottom[i] == '1') {
				cnt++;
			}
		}
		for(int i = 1; i < n; i++) {
			char a = top[i-1], b = top[i], c=bottom[i-1], d=bottom[i];
			string s;
			s.push_back(a); s.push_back(b); s.push_back(c); s.push_back(d);
			if(s == "1111") {
				top[i-1] = '0';
				top[i] = '0';
				bottom[i-1] = '0';
				bottom[i] = '0';
			}
			if(s== "1101") {
				top[i-1] = '0';
				top[i] = '1';
				bottom[i-1] = '0';
				bottom[i] = '0';
			}
			if(s=="1110") {
				top[i-1] = '1';
				top[i] = '0';
				bottom[i-1] = '0';
				bottom[i] = '0';
			}
			if(s=="0011") {
				top[i-1] = '0';
				top[i] = '0';
				bottom[i-1] = '0';
				bottom[i] = '0';
			}
			if(s=="0010") {
				top[i-1] = '0';
				top[i] = '0';
				bottom[i-1] = '0';
				bottom[i] = '0';
			}
			if(s=="0001") {
				top[i-1] = '0';
				top[i] = '0';
				bottom[i-1] = '0';
				bottom[i] = '0';
			}
			if(s=="0110") {
				top[i-1] = '0';
				top[i] = '1';
				bottom[i-1] = '0';
				bottom[i] = '0';
			}
			if(s=="1001") {
				top[i-1] = '1';
				top[i] = '0';
				bottom[i-1] = '0';
				bottom[i] = '0';
			}
			if(s=="0111") {
				top[i-1] = '0';
				top[i] = '1';
				bottom[i-1] = '0';
				bottom[i] = '1';
			}
			if(s=="1011") {
				top[i-1] = '1';
				top[i] = '0';
				bottom[i-1] = '1';
				bottom[i] = '0';
			}

		}

		int cont = 0;
		FOR(i, n) {
			if(bottom[i] == '1') {
				cont++;

			}
		}
		// cout << cont << ":" << cnt << endl;
		// cout << top << endl << bottom << endl;
		cout << cnt - cont << endl;
	}

    return 0;
}



