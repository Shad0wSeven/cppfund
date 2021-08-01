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

vector<int> psum(vector<int> s) {
	vector<int> a = {0}; a.resize(s.size()); int c = 0;
	for(int i=0; i < s.size(); i++) {
	a[i]=c;	c+=s[i];} return a;
}


int main () {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	vi life = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	vi ans = psum(life);
	for(auto x : ans) {
		cout << x << endl;
	}
	
    return 0;
}



