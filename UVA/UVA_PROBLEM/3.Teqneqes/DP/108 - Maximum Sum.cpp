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

typedef long long int LL ;
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
typedef vector<double>    VD;
typedef vector<string>    VS;
int gcd(int a, int b) { return (b == 0 ? a : gcd(b, a % b)); }
int arr[104][104];
int acc[104][104];
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
#endif
        int n;sc(n);
        REP(i,n){
            REP(j,n)
            sc(arr[i][j]);
        }
        REP(i,n)
          acc[i][0] = arr[i][0];
        
        REP(i,n)
          LOOP(j,1,n){
            acc[i][j] = acc[i][j-1]+arr[i][j];
         }
        REP(i,n)
          LOOP(j,1,n){
            acc[j][i] += acc[j-1][i];
         }
        int mx= -(1<<29);
        REP(i1,n)
          REP(j1,n)
           LOOP(i2,i1+1,n)                 
              LOOP(j2,j1+1,n){
            int  calc = acc[i2][j2] - ((i1 != 0)?acc[i1-1][j2]:0) - ((j1 != 0)?acc[i2][j1-1]:0)  + ((j1 != 0 && i1 != 0)?acc[i1-1][j1-1]:0);
            mx= max(mx ,calc);
            }
        printf("%d\n",mx);
return 0; 
}
