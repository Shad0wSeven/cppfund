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

int N;


struct cow{
    int x, y;
    vector<vector<int> > adj;
    vector<vector<int> > possAdj;
    bool visited = false;
    bool comfortable = false;
};

cow maze[1000][1000];
int checkarr[1000][1000] = {0};


cow checkComfort(cow test) {
    if(checkarr[test.x + 1][test.y]) {
        vi coords;
        coords.pb(test.x + 1);
        coords.pb(test.y);
        test.adj.pb(coords);
    } else {
        vi coords;
        coords.pb(test.x + 1);
        coords.pb(test.y);
        test.possAdj.pb(coords);
    }


    if(checkarr[test.x - 1][test.y]) {
        vi coords;
        coords.pb(test.x - 1);
        coords.pb(test.y);
        test.adj.pb(coords);
    } else {
        vi coords;
        coords.pb(test.x - 1);
        coords.pb(test.y);
        test.possAdj.pb(coords);
    }


    if(checkarr[test.x][test.y + 1]) {
        vi coords;
        coords.pb(test.x);
        coords.pb(test.y + 1);
        test.adj.pb(coords);
    } else {
        vi coords;
        coords.pb(test.x);
        coords.pb(test.y + 1);
        test.possAdj.pb(coords);
    }


    if(checkarr[test.x][test.y - 1]) {
        vi coords;
        coords.pb(test.x);
        coords.pb(test.y - 1);
        test.adj.pb(coords);
    } else {
        vi coords;
        coords.pb(test.x);
        coords.pb(test.y - 1);
        test.possAdj.pb(coords);
    }
    return test;
}

int main () {
    ifstream cin("comfort.in");
    cin >> N;
    vector<cow> cows;
    FOR(i, N) {
        int a, b;
        cin >> a >> b;
        cow x; 
        x.x = a;
        x.y = b;
        maze[a][b] = x;
        checkarr[a][b] = 1;
        cows.push_back(x);
    }

    // Now for each cow, check if it is comfortable over and over again
    for(int l = 0; l < 10; l++) {
        int i = 0;
        while(i < cows.size()) {
            cow test = checkComfort(cows[i]);
            if(test.adj.size() == 3) {
                cow NC;
                NC.x = test.possAdj[0][0];
                NC.y = test.possAdj[0][1];
                maze[NC.x][NC.y] = NC;
                checkarr[NC.x][NC.y] = 1;
                cows.pb(NC);
            }
            cout << test.x << ":" << test.y << endl;
            
            i++;
            
        }   
    }

    // Now we have the list for all of the cows for x = N;
    
    return 0;
}
