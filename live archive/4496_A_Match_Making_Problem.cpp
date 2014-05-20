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
  // freopen("input.txt","r",stdin);
 //   freopen("output.txt","w",stdout);

 int cas = 1;
 int b,g,nu;
 while(scanf("%d %d",&b,&g) != EOF && !(b==0 && g==0)){
	 vi arr(b);
	 LOOP(i,b)
	  sc(arr[i]);
	 LOOP(i,g)
	   sc(nu);
	 printf("Case %d: ",cas++);
	 if(b>g){
      int num = * min_element(ALL(arr));
      printf("%d %d\n",b-g,num);
	 }
	 else{
	 printf("0\n");
	 }

 }


return 0;
}

