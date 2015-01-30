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
#define ii pair<int,int> 
#define vii vector< pair<int,int> > 
#define sc(x) scanf("%d",&x)
double const EPS = 2.22045e-016;
#define INF (1<<29)

#define ALL(v)        ((v).begin()), ((v).end())
#define SZ(v)       ((int)((v).size()))
#define CLR(v, d)     memset(v, d, sizeof(v))

#define REP(i, n)   for(int i=0;i<(int)(n);++i)
#define LOOP(i,b,n)   for(int i=(b);i<(int)(n);++i)

#define PB  push_back
typedef vector<double>    VD;
typedef vector<string>    VS;
int gcd(int a, int b) { return (b == 0 ? a : gcd(b, a % b)); }

int main()
{
  #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin);
      //freopen("output.txt", "w", stdout);
  #endif
LL n,m,r,y,z,p;
while(cin>>n>>m>>r>>y>>z>>p){
    y%=2;
    z*=3;
    r%=4 ;
    z%=4;
  n;m;
  int k = y;
  while(p--){
    int nn = n;
    int mm = m;
    int bb = y;
    int nc = z;
    int c=r;
    // printf("nc %d  c = %d\n",nc,c );
    int x,y,ansx,ansy;;
    sc(x);sc(y);
    ansx = x;
    ansy = y;
// printf("x%d y %d ans = \n",x,y );
    while(c > 0){
        ansx = y;
        ansy = nn-x+1;
        x = ansx;
        y = ansy;        
    c--;
    swap(nn,mm);
  }
  // printf("after clock x = %d , y= %d\n",ansx , ansy );
  if(bb){
    ansy = mm - ansy+1;
    // printf("miror x = %d , y= %d\n",ansx , ansy );
    y = ansy;
  }

    while(nc > 0){
        ansx = y;
        ansy = nn-x+1;
        x = ansx;
        y = ansy;        
        nc--;
    swap(nn,mm);
  }
  // printf("anti x = %d , y= %d\n",ansx , ansy );

    printf("%d %d\n",ansx,ansy);
  
  } 
}
return 0; 
}