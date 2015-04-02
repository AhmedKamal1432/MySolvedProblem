/*
*
* solved by Ahmed Kamal
*/
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <iostream>
#include <sstream>
#include <cstring>
#include <vector>
#include <list>
#include <map>
#include <set>
#include <bitset>
#include <queue>
#include <stack>
#include <utility>
#include <algorithm>
#include <functional>

using namespace std;

typedef long long int LL ;
#define vi vector<int> 
#define ii pair<int,int> 
#define vii vector< pair<int,int> > 

#define ALL(v)              ((v).begin()), ((v).end())
#define SZ(v)               ((int)((v).size()))
#define CLR(v, d)           memset(v, d, sizeof(v))
#define REP(i, n)       for(int i=0;i<(int)(n);++i)
#define LOOP(i,b, n)        for(int i=(b);i<(int)(n);++i)

#define SC(x) scanf("%d",&x)
#define DSC(x) int x; scanf("%d",&x)
#define DSC2(x,y) int x,y; scanf("%d %d",&x,&y)

#define PB  push_back
#define MP  make_pair
double const EPS = 2.22045e-016;
#define INF (1<<29)


typedef vector<double>    VD;
typedef vector<string>    VS;
void print_v(vi arr){
int n = SZ(arr);
  REP(i,n)
    if(i == n-1)
       printf("%d\n",arr[i] );
     else
      printf("%d ", arr[i]);
}

int gcd(int a, int b) { return (b == 0 ? a : gcd(b, a % b)); }

int m,n;
VS arr;
int dx[]={1, -1,  0,  0, 1, -1,  1, -1};
int dy[]={0,  0,  1, -1, 1,  1, -1, -1};
bool valid(int i , int j, int k ){
    if(i + dx[k] >=0 && i + dx[k] < n &&
        j + dy[k] >= 0 && j + dy[k] < m)
        if(arr[ i+dx[k] ][j + dy[k]] == '*')
            return true;
    return false;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
#endif
while(cin>>n>>m && !(n == 0 && m == 0)){
    arr.assign(n,"");
    REP(i,n)
        cin>> arr[i];
    int ans = 0;
    REP(i,n)
        REP(j,m){
            if(arr[i][j] == '*'){
                int count  = 0;
                REP(k,8){
                    if(valid(i,j,k))
                        count++;
                }
                // printf(" in %d %d count  = %d\n",i,j,count );
                if(count  == 0)
                    ans++;
            }
        }
    printf("%d\n", ans);
}


return 0; 
}
