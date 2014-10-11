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
#define ii pair<int,int> 
#define vii vector< pair<int,int> > 
#define sc(x) scanf("%d",&x)
double const EPS = 2.22045e-016;
#define INF (1<<29)

#define ALL(v)				((v).begin()), ((v).end())
#define SZ(v)				((int)((v).size()))
#define CLR(v, d)			memset(v, d, sizeof(v))
#define REP(i, n)		for(int i=0;i<(int)(n);++i)
#define LOOP(i,b, n)		for(int i=(b);i<(int)(n);++i)

#define PB	push_back
typedef vector<double> VD;
typedef vector<string> VS;

int gcd(int a, int b) {
    return (b == 0 ? a : gcd(b, a % b));
}

int DFS_WHITE = -1;
int DFS_BLACK = 1;

vi topoSort; // global vector to store the toposort in reverse order
vector< vii> AdjList;
int dfs_num[100];
    int V = 50;

void dfs2(int u) { // change function name to differentiate with original dfs
    dfs_num[u] = DFS_BLACK;
    for (int j = 0; j < (int) AdjList[u].size(); j++) {
        ii v = AdjList[u][j];
        if (dfs_num[v.first] == DFS_WHITE)
            dfs2(v.first);
    }
    topoSort.push_back(u);
} // that’s is, this is the only change
// inside int main()

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
#endif

    string s;
    map<char,int> mp;
    map<int,char> mp2;
    
    int k =0;
    VS arr;
    int mx_size=0;
    while (cin >> s && s != "#") {
        arr.push_back(s);
        mx_size++;
    }
    int n = SZ(arr);
    REP(j,mx_size){
        REP(i,n-1){
            if(SZ(arr[i]) <= j || SZ(arr[i+1]) <= j)
                continue;
            if(mp.find(arr[i][j]) == mp.end()){
                 mp[arr[i][j]] =k++;
                 mp2[k-1] = arr[i][j];
                 AdjList.push_back(vii());
            }
            if(mp.find(arr[i+1][j]) == mp.end()){
               mp[arr[i+1][j]] =k++;
                mp2[k-1] = arr[i+1][j];
                AdjList.push_back(vii());

            }
             if(arr[i][j]!= arr[i+1][j] && arr[i][j-1] == arr[i+1][j-1])    
             AdjList[mp[arr[i][j]] ].push_back(make_pair(mp[arr[i+1][j]],0));
        }
    }
    
    topoSort.clear();
    CLR(dfs_num, DFS_WHITE);
    
    for (int i = 0; i < AdjList.size(); i++) // this part is the same as finding CCs
        if (dfs_num[i] == DFS_WHITE )
            dfs2(i);
    reverse(topoSort.begin(), topoSort.end()); // reverse topoSort
    for (int i = 0; i < (int) topoSort.size(); i++){ // or you can simply read
        if( i == topoSort.size()-1)
          printf("%c\n", mp2[topoSort[i]] ); // the content of ‘topoSort’ backwards
        else
            printf("%c", mp2[topoSort[i]]);
    }


    return 0;
}
