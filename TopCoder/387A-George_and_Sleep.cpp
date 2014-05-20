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

int main()
{
//	freopen("input.txt","r",stdin);
 //   freopen("output.txt","w",stdout);
int m1,m2,h1,h2;
scanf("%d:%d",&h1,&m1);
scanf("%d:%d",&h2,&m2);
int a1,a2;
if(m2>m1){
	h1--;
	h1 =(h1+24)%24;
	a2=m1-m2+60;
}
else
	a2 = m1-m2;
if(h2 < 0)
	h2+=24;

a1 = h1-h2;
if(a1 < 0)
	a1 += 24;

if(a1>9)
	printf("%d:",a1);
else
	printf("0%d:",a1);


if(a2>9)
	printf("%d",a2);
else
	printf("0%d",a2);

return 0;
}

