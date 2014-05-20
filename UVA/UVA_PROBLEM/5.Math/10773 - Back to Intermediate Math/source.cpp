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

typedef long long int llint ;
#define vi vector<int> 
#define ii pair<int,int> 
#define vii vector< pair<int,int> > 
#define sc(x) scanf("%d",&x)

int main()
{
 //   freopen("input.txt","r",stdin);
 //   freopen("output.txt","w",stdout);

int n;
sc(n);
for(int i=0;i<n;i++)
{
 float d,u,v;
scanf("%f %f %f",&d,&v,&u);
 if(u==0  || u<=v || v==0)
{
 printf("Case %d: can't determine\n",i+1);
continue;
}

float t1=d/u;
float t2=d/sqrt(u*u - v*v);

 printf("Case %d: %.3f\n",i+1,fabs(t1-t2));
}

return 0; 
}
