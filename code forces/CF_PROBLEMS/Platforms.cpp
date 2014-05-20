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
  //freopen("input.txt","r",stdin);
 //   freopen("output.txt","w",stdout);
LL n,d,m,l;cin>>n>>d>>m>>l;
LL st,end,x1,x2,ans=-1;
LOOP(i,n-1) {
	end=LL(LL(i*m) +l);  x1 =end/d;
	st = LL(LL(i+1)*m); x2 =st/d;
	if(x1 !=x2){
		if( (LL)(x1+1)*LL(d) < st ){
			ans = (x1+1)*d;
			break;
		}
	}
}
if(ans==-1){
	LL end =(n-1)* m+l;
	LL x =end/d;
	ans = (x+1)*d;
}

cout<<ans<<endl;
return 0;
}

