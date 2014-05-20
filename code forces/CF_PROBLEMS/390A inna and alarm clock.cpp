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
double const Epsilon = 2.22045e-016;

#define ALL(v)				((v).begin()), ((v).end())
#define SZ(v)				((int)((v).size()))
#define CLR(v, d)			memset(v, d, sizeof(v))
#define LOOP(i, n)		for(int i=0;i<(int)(n);++i)

#define PB	push_back
typedef vector<double>    VD;
typedef vector<string>    VS;
int gcd(int a, int b) { return (b == 0 ? a : gcd(b, a % b)); }

int rows[102],col[102];

int main()
{
 //   freopen("input.txt","r",stdin);
 //   freopen("output.txt","w",stdout);

    CLR(rows,0);
    CLR(col,0);
int n;sc(n);
int x,y;
LOOP(i,n){
 sc(x);sc(y);
 rows[x]++;
 col[y]++;
}

int c=0,r=0;
LOOP(i,101){
 if(rows[i]>0)
	 r++;
 if(col[i]>0)
	 c++;
}

int ans= min(c,r);
printf("%d\n",ans);

return 0;
}

