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
 //  freopen("input.txt","r",stdin);
 //   freopen("output.txt","w",stdout);
int n,m,v;sc(n);sc(m);sc(v);
int b;
if(m<n-1 || ( (2*(m-1)+n-3)/(n-2)) >n-1){
	printf("-1\n");
	return 0;
}
(v==1)?b=2:b=1;
LOOP(i,n){
	if(i+1==b)
		 continue;
	for(int k=i+1;k<n;k++){
		if(k+1==b)
		 continue;
		if(m<2)
			break;
		printf("%d %d\n",i+1,k+1);
		m--;
	}
	if(m<2)
		break;
}
printf("%d %d\n",v,b);

return 0;
}

