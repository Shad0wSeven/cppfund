#include <iostream>
#include <fstream>
#include <vector>
#include <set>
#include <algorithm>
#include <iterator>


using namespace std;

int main() {
    int N, K;
    // ifstream cin("swap.in");
    cin >> N >> K;
    // Method: after 1 full swap of K, you know where all the values will be, and you can just keep doing this over and over to add do the values now in each place, until you get an area you want?
    
    vector<set<int> > magic;
    // Array of 1 - N
    int maze[N];
    for(int i = 0; i < N; i++) {
        maze[i] = i;
        set<int> z;
        z.insert(i);
        magic.push_back(z);
    }



    for(int i = 0; i < K; i++) {
        int a, b;
        cin >> a >> b;
        a -= 1;
        b -= 1;
        int temp = maze[a];
        maze[a] = maze[b];
        maze[b] = temp;
        magic[maze[a]].insert(a);
        magic[maze[b]].insert(b);
        // for(int i = 0; i < N; i++) {
        //     cout << maze[i] << " : ";
        // }
        // cout << endl;
    }
    int swapArray[N];

    copy(maze, maze+N, swapArray);
    // for(int i = 0; i < N; i++) {
    //         cout << swapArray[i] << " : ";
    //     }
    
    // now just spam
    for(int i = 0; i < 20; i++) {
        int newArray[N];
        for(int i = 0; i < N; i++) {
            newArray[i] = swapArray[maze[i]];
        }
        // Now append
        for(int i = 0; i < N; i++) {
            magic[newArray[i]].insert(magic[i].begin(), magic[i].end());
        }
        copy(newArray, newArray+N, swapArray);
    }

    for(int i = 0; i < N; i++) {
        cout << magic[i].size() << endl;
    }
}
