/*
 *
 * solved by Ahmed Kamal
 */
#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<iostream>
#include<sstream>
#include<cstring>
#include<vector>
#include<list>
#include<map>
#include<set>
#include<bitset>
#include<queue>
#include<utility>
#include<algorithm>
#include<functional>

using namespace std;

typedef long long int LL;
#define vi vector<int> 
#define ii pair<int,int0> 
#define vii vector< pair<int,int> > 
#define sc(x) scanf("%d",&x)
double const EPS = 2.22045e-016;
#define INF (1<<29)

#define ALL(v)              ((v).begin()), ((v).end())
#define SZ(v)               ((int)((v).size()))
#define CLR(v, d)           memset(v, d, sizeof(v))
#define REP(i, n)       for(int i=0;i<(int)(n);++i)
#define LOOP(i,b, n)        for(int i=(b);i<(int)(n);++i)

#define PB  push_back
typedef vector<double> VD;
typedef vector<string> VS;

int gcd(int a, int b) {
    return (b == 0 ? a : gcd(b, a % b));
}

#define SIZE  8
int board[SIZE][SIZE];
int calc(int t[]){
    int ans = 0;
    REP(i,SIZE)
                ans+=board[i][t[i]];
    return ans;
}

bool empty(int t[], int row, int col) {
    for (int j = 0; j < row; j++) {
        if (t[j] == col)
            //same column
            return false;
        if (abs(t[j] - col) == (row - j)) //on cross line
            return false;
    }
    return true;
}

int maxi = 0;
bool queens(int t[], int row, int col) {
    if (row == SIZE){ // found one answer
        maxi=max(maxi,calc(t));
        return true;
    }
    bool g = false;
    for (col = 0; col < SIZE; col++) {
        t[row] = col;
        if (empty(t, row, col)){
             queens(t, row + 1, 0);
             g=true;
        }
    }
    return g;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

        int t;sc(t);
        while(t--){
            maxi =0;
            REP(i,SIZE)
               REP(j,SIZE)
                 sc(board[i][j]);
            int test[SIZE];
            CLR(test,0);
            queens(test,0,0);
            
            //maxi*=100;;
            stringstream ss;string s;
            ss<<maxi; ss>>s;
            while(SZ(s)!=5){
                s.insert(s.begin(),1,' ');
            }
            cout<<s<<endl;
        }

    return 0;
}
