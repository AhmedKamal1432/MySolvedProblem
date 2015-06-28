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

#define ALL(v)        ((v).begin()), ((v).end())
#define SZ(v)       ((int)((v).size()))
#define CLR(v, d)     memset(v, d, sizeof(v))
#define REP(i, n)   for(int i=0;i<(int)(n);++i)
#define LOOP(i,b, n)    for(int i=(b);i<(int)(n);++i)

#define sc(x) scanf("%d",&x)
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
      printf("%d,", arr[i]);
}

int gcd(int a, int b) { return (b == 0 ? a : gcd(b, a % b)); }

int visit[1000];
int main()
{
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
#endif
int st; string line; stringstream ss;
getline(cin,line);
line.push_back(',');
ss<<line;
int MAX = 100;
vector<vector<bool> > gr(MAX,vector<bool>(MAX,false));
int a,b;
char c;
vi found(1000,0);
while(ss>>a>>b>>c){
  // printf("%d %d %c\n",a,b,c);
  gr[a][b]=true;
  found[a]=found[b]=1;
}
CLR(visit,false);
vi arr;
REP(i,MAX){
  REP(k,MAX){
    if(visit[k])
      continue;
    if(!found[k])
      continue;

    int g = true;
    REP(m,MAX){
      if(gr[k][m]){
        g = false;
        break;
      }
    }
    if(g){
      REP(m,MAX){
        gr[m][k] = false;
      }
      arr.push_back(k);
      visit[k]=true;
      break;
    }
  }
}
print_v(arr);
return 0; 
}
