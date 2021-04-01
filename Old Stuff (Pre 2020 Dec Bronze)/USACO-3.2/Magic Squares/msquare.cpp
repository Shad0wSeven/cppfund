/*
ID: ayushn.2
TASK: msquare
LANG: C++11
*/
#include <iostream>
#include <fstream>
#include <cmath>
#include <vector>

using namespace std;

struct square {
    string str = "";
    int val = 0;
};


int A(int N) { // Reverse an Integer
    int rem, reverse = 0;
    while(N != 0)  
    {  
        rem = N % 10;    
        reverse = reverse * 10 + rem;  
        N /= 10;  
    }  
    return reverse;
}

int B(int N) {

    int four = (N/10000) % 10;
    int five = (N/1000) % 10;
    int seg2 = N % 1000;
    int seg1 = N / 100000;

    return (four*10000000) + (five) + (seg2*10) +(seg1*10000);

}

int C(int N) {
    int two, three, six, sev;
    two = (N/1000000) % 10;
    three = (N/100000) % 10;
    six = (N/100) % 10;
    sev = (N/10) % 10;

    N += (sev - two) * 1000000;
    N += (two - three) * 100000;
    N += (three - six) * 100;
    N += (six - sev) * 10;

    return N;
}

int main()
{
    ofstream fout ("msquare.out");
    ifstream fin ("msquare.in");
    int N = 0;
    int M = 12345678;
    for(int i = 0; i < 8; i++) {
        int q;
        fin >> q;
        N += (q * pow(10, (7-i)));
    }

    // Now for BFS
    vector<square> unsolved;
    square starter;
    starter.str = "";
    starter.val = M;
    unsolved.push_back(starter);
    while(unsolved.size() > 0) {
        // bfs
        square a;
        a.val = A(unsolved[0].val);
        a.str = unsolved[0].str += "A";

        if(a.val == N){
            cout << a.str.size() << endl;
            cout << a.str << endl;
            return 0;
        }


        square b;
        b.val = B(unsolved[0].val);
        b.str = unsolved[0].str += "B";

        if(b.val == N){
            cout << b.str.size() << endl;
            cout << b.str << endl;
            return 0;
        }

        square c;
        c.val = C(unsolved[0].val);
        c.str = unsolved[0].str += "C";

        if(c.val == N){
            cout << c.str.size() << endl;
            cout << c.str << endl;
            return 0;
        }

        unsolved.erase(unsolved.begin());
        unsolved.push_back(a);
        unsolved.push_back(b);
        unsolved.push_back(c);


    }

    return 0;
    
}