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

#define bounds 2100

struct cow{
    int x, y;
    vector<vector<int> > adj;
    vector<vector<int> > possAdj;
    bool visited = false;
    bool comfortable = false;
};
cow maze[bounds][bounds];
int checkarr[bounds][bounds];


cow checkComfort(cow test) {
    if(checkarr[test.x + 1][test.y] > 0) {
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


    if(checkarr[test.x - 1][test.y] > 0) {
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


    if(checkarr[test.x][test.y + 1] > 0) {
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


    if(checkarr[test.x][test.y - 1] > 0) {
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

vector<int> toOutput;

int main () {
    
    // ifstream cin("comfort.in");
    cin >> N;
    
    int toSubtract = 0;
    vector<cow> cows;
    FOR(i, N) {
        int a, b;

        cin >> a >> b;
        a += (bounds)/2;
        b += (bounds)/2;
        cow x; 
        x.x = a;
        x.y = b;


        // Check if there is a new cow in its spot!

        if(checkarr[a][b] > 1) {
            toSubtract += 1; // Subtract from the total 
        }

        maze[a][b] = x;
        checkarr[a][b] = 1;
        cows.push_back(x);
        



        // Check if this cow is comfortable or not
        cow test = checkComfort(x);
        // cout << test.x << " : " << test.y << " -->  "; 
        
        if(test.adj.size() == 3) {
            cow NC;
            NC.x = test.possAdj[0][0];
            NC.y = test.possAdj[0][1];
            maze[NC.x][NC.y] = NC;
            checkarr[NC.x][NC.y] = cows.size(); // to erase this value later on.
            cows.pb(NC);
            vi tpb;
            tpb.pb(NC.x);
            tpb.pb(NC.y);
            maze[test.x][test.y].adj.pb(tpb);
        }
        vector<vector<int> > stackCheck;
        for(int j = 0; j < test.adj.size(); j++) {
            stackCheck.pb(test.adj[j]);
        }
        // Now that this cow is uncomfortable, let's check all the cows adjacent to it!
        
        // BFS TIME!!!!
        while(stackCheck.size() != 0) {
            cow currentTest = checkComfort(maze[stackCheck[0][0]][stackCheck[0][1]]);
            // cout << currentTest.x << " : " << currentTest.y << " >> ";

            // If comfortable make uncomfortable;
            if(currentTest.adj.size() == 3) {
                cow NC;
                NC.x = currentTest.possAdj[0][0];
                NC.y = currentTest.possAdj[0][1];
                maze[NC.x][NC.y] = NC;
                checkarr[NC.x][NC.y] = cows.size(); // to erase this value later on.
                cows.pb(NC);
                vi tpb;
                tpb.pb(NC.x);
                tpb.pb(NC.y);
                maze[currentTest.x][currentTest.y].adj.pb(tpb);
                vi tpbb;
                tpbb.pb(NC.x);
                tpbb.pb(NC.y);
                stackCheck.pb(tpbb);
                test = checkComfort(NC);
                for(int j = 0; j < test.adj.size(); j++) {
                    stackCheck.pb(test.adj[j]);
                }
            }
            stackCheck.erase(stackCheck.begin());
    
        }
        // cout << endl;
        // Now we should be chilling stack wise
        toOutput.pb(cows.size() - toSubtract - (i + 1));



    }
    for(int i = 0; i < toOutput.size(); i++) {
        cout << toOutput[i] << endl;
    }
    return 0;
}
