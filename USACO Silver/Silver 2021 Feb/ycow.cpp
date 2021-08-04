#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

#define mp make_pair
#define pb push_back

#define FAR(i, a, b) for (int i=a; i<b; i++)
#define FOR(i, a) for (int i=0; i<a; i++)

#define fi first
#define se second
#define lb lower_bound
#define ub upper_bound
#define endl "\n"

vector<int> times; 



bool beenthere[10000][10000];
int minTime = 10000000;

void visit(int time, int jumpsLeft, int timeSpent, int timeIndex) {
    if(beenthere[timeIndex][jumpsLeft]) {
        return;
    }
    beenthere[timeIndex][jumpsLeft] = true;

    if(timeIndex == (times.size() - 1)) {
        return;
    }
    // cout << time << " : " << jumpsLeft <<  " : " << timeSpent << endl;
    
    // TimeSpent is time spent waiting, Time = time left
    // TimeIndex is index on the array



    // If at end, record how much time left.
    if(jumpsLeft == 0) {
        int currentTime = (time + timeSpent);
        if(currentTime < minTime) {
            minTime = currentTime;
        }
        return;
    } else {
        if(times[timeIndex + 1] == 0) {
            int currTime = (timeSpent + (times[timeIndex] % 12));
            if(currTime < minTime) {
                minTime = currTime;
            }
            return;
        }

    }

    // If next time < 12 years into the future walk to it
    if((time - (times[timeIndex + 1])) < 12) {
        int tmp = timeSpent + (time - (times[timeIndex + 1]));
        visit(times[timeIndex + 1], jumpsLeft, tmp, (timeIndex + 1));
    } else {
        // Walk to nearest
        int tmp = timeSpent + (time - (times[timeIndex + 1]));
        visit(times[timeIndex + 1], jumpsLeft, tmp, (timeIndex + 1));



        // Walk to Nearest
        int timeWalked = (times[timeIndex] % 12);

        // First take modulus of next timeIndex
        timeWalked += (12 - (times[timeIndex + 1] % 12));
        
        // Then walk
        visit(times[timeIndex + 1], (jumpsLeft - 1), (timeSpent + timeWalked), (timeIndex + 1));
    } 

    // Try Jumping Forward
}

int main () {
    // ifstream cin("ycow.in");
    int N, K;
    cin >> N >> K;

    FOR(i, N) {
        int x;
        cin >> x;
        times.pb(x);
    }
    sort(times.begin(), times.end(), greater<int>());
    times.push_back(0);
    int timeWalked = (12 - (times[0] % 12));
    visit(times[0], (K-1), timeWalked, 0);

    cout << minTime << endl;
    
    return 0;
}