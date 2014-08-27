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

#define ALL(v)				((v).begin()), ((v).end())
#define SZ(v)				((int)((v).size()))
#define CLR(v, d)			memset(v, d, sizeof(v))
#define LOOP(i, n)		for(int i=0;i<(int)(n);++i)
#define LOOPP(i,b, n)		for(int i=(b);i<(int)(n);++i)

#define PB	push_back
typedef vector<double>    VD;
typedef vector<string>    VS;
int gcd(int a, int b) { return (b == 0 ? a : gcd(b, a % b)); }

int main()
{
#ifndef ONLINE_JUDGE
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
#endif

        int n ,ax,ay,bx,by;
        sc(n); n--;
        scanf("%d %d %d %d",&ax,&ay,&bx,&by);
        int wx1=ax; int wy1 = ay;
        int wx2=bx; int wy2 = by;
        while(n--){
          scanf("%d %d %d %d",&ax,&ay,&bx,&by);
          wx1 = max(wx1,ax);
          wx2 = min(wx2,bx);
          
          wy1 = max(wy1,ay);
          wy2 = min(wy2,by);
        }
        LL ans= (wx2 - wx1)*(wy2 - wy1);
        if(wx2 < wx1 || wy2 < wy1)
            printf("0\n");
        else
        printf("%lld\n",ans);

 return 0; 
}
