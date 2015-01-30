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
#include <utility>
#include <algorithm>
#include <functional>

using namespace std;

typedef long long int LL ;
#define vi vector<int> 
#define ii pair<int,int> 
#define vii vector< pair<int,int> > 
#define sc(x) scanf("%d",&x)
double const EPS = 2.22045e-016;
#define INF (1<<29)

#define ALL(v)        ((v).begin()), ((v).end())
#define SZ(v)       ((int)((v).size()))
#define CLR(v, d)     memset(v, d, sizeof(v))
#define REP(i, n)   for(int i=0;i<(int)(n);++i)
#define LOOP(i,b, n)    for(int i=(b);i<(int)(n);++i)

#define PB  push_back
typedef vector<double>    VD;
typedef vector<string>    VS;
int gcd(int a, int b) { return (b == 0 ? a : gcd(b, a % b)); }

double grp[100][100];
struct ant{
  int x,y,r;
  ant(int _x,int _y,int _r){
    x= _x;
    y = _y;
    r = _r;
  }
  ant(){}
};
int main()
{
#ifndef ONLINE_JUDGE
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
#endif
  int n,c;
  while(sc(n) != EOF && n!= 0){
    vector<ant> arr (n,ant(0,0,0));
    REP(i,n){
      int x,y,z; sc(x);sc(y);sc(z);
      arr[i] = ant(x,y,z);
    }
    REP(i,100)
      REP(k,100)
        grp[i][k] = INF;
    REP(i,100)
      grp[i][i]=0;

    REP(i,n){
      REP(j,n){
        int d = (arr[i].x - arr[j].x)*(arr[i].x - arr[j].x) + (arr[i].y - arr[j].y)*(arr[i].y - arr[j].y);
        if(arr[i].r *arr[i].r > d ){
         // printf(" d = %d\n",d );
          grp[i][j] = sqrt(d);
        }
      }
    }

  for (int k = 0; k < n; k++) 
    for (int i = 0; i < n; i++)
      for (int j = 0; j < n; j++)
        grp[i][j] = min(grp[i][j], grp[i][k] + grp[k][j]);

  sc(c);
  REP(i,c){
   int s,d;
    sc(s); sc(d);
    if(grp[s-1][d-1] == INF)
      printf("-1\n");
    else
      printf("%d\n",(int)grp[s-1][d-1] ); 
  }
}
return 0; 
}
