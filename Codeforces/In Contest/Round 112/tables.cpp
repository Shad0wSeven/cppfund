#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<ll> vi;
typedef pair<ll, ll> pi;
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
	// ifstream cin("tables.in");
	cin >> N;
	FOR(i, N) {
		ll W, H;
		cin >> W >> H;
		pi left, right;
		cin >> left.fi >> left.se >> right.fi >> right.se;
		ll Ws, Hs;
		cin >> Ws >> Hs;
		ll LeftDistance = left.fi;
		ll RightDistance = W - right.fi;
		ll UpDistance = H - right.se;
		ll DownDistance = left.se;
		ll LeftMovDist = Ws - LeftDistance;
		ll RightMovDist = Ws - RightDistance;
		ll UpMovDist = Hs - UpDistance;
		ll DownMovDist = Hs - DownDistance;

		ll UpPosition = right.se + UpMovDist;
		ll DownPosition = left.se - DownMovDist;
		ll LeftPosition = left.fi - LeftDistance;
		ll RightPosition = right.fi + RightDistance;

		// cout << W << ":" << H << endl;
		// cout << endl;
		// cout << LeftDistance << endl;
		// cout << RightDistance << endl;
		// cout << UpDistance << endl;
		// cout << DownDistance << endl;

		// cout << endl;


		if(LeftPosition < 0 || right.fi+LeftMovDist > W) {
			LeftMovDist = -1;
		}
		if(RightPosition > W || left.fi-RightMovDist < 0) {
			RightMovDist = -1;
		}
		if(DownPosition < 0 || right.se+DownMovDist > H) {
			DownMovDist = -1;
		}
		if(UpPosition > H || left.se-UpMovDist < 0) {
			UpMovDist = -1;
		}

		// cout <<	LeftMovDist << endl;
		// cout << RightMovDist << endl;
		// cout << DownMovDist << endl;
		// cout << UpMovDist << endl;

		// cout << endl;

		// cout << LeftPosition << endl;
		// cout << RightPosition << endl;
		// cout << UpPosition << endl;
		// cout << DownPosition << endl;
		// cout << "----------" << endl << endl << endl;
		ll answers[4] = {LeftMovDist, RightMovDist, UpMovDist, DownMovDist};
		vector<ll> ans;
		FOR(y, 4) {
			if(answers[y] != -1) {
				ans.push_back(answers[y]);
			}
		}


		// cout << *min_element(ans.begin(), ans.end());
		if(ans.size() == 0) {
			cout << -1 << endl;
		} else {
			sort(ans.begin(), ans.end());
			cout << ans[0] << endl;
		}
	}

    return 0;
}



