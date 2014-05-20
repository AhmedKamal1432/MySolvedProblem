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
#define INF (1<<28)
#define ALL(v)				((v).begin()), ((v).end())
#define SZ(v)				((int)((v).size()))
#define CLR(v, d)			memset(v, d, sizeof(v))
#define LOOP(i, n)		for(int i=0;i<(int)(n);++i)

#define PB	push_back
typedef vector<double>    VD;
typedef vector<string>    VS;

int ac[105][105];
int arr[105][105];
int h,w;
void acumilate()
{
	LOOP(i,h){
		ac[i][0]=(arr[i][0] == 1)? 1 : 0;
		for(int k =1;k<w;k++)
		ac[i][k]=ac[i][k-1] + ((arr[i][k] == 1)? 1 : 0) ;
	}
	LOOP(i,w){
		for(int k =1;k<h;k++)
		ac[k][i]+=ac[k-1][i]  ;
	}
}
int solve(int K) {
 //x1 == 0 && x2 == 1 && y1 ==0 && y2 == 2
	CLR(ac,0);
	  acumilate();
      int res = 0;
      LOOP(x1,w)
       for (int x2 = x1; x2 < w; ++x2)
		 LOOP(y1,h)
		   for (int y2 = y1; y2 < h; ++y2) {
			int coins =ac[y2][x2] - ((x1 != 0)?ac[y2][x1-1]:0) - ((y1 != 0)?ac[y1-1][x2]:0) + ((x1 !=0 && y1 !=0)? ac[y1-1][x1-1] : 0);
			if(coins == K){
			int	a=x2-x1+1, b= y2-y1+1;
			//res = max(res,a*b);
			if(a*b > res){
				res= a*b;
//				printf("x1 =%d y1 =%d  ,,,  x2 =%d y2 =%d\n",y1,x1,y2,x2 );

			}
			}
		}
      return res;
	}

int main()
{
  //  freopen("input.txt","r",stdin);
 //   freopen("output.txt","w",stdout);

while(sc(h) !=EOF && sc(w)!= EOF && !(h ==0 && w==0) )
{
LOOP(i,h)
 LOOP(j,w)
  sc(arr[i][j]);
int ans = solve(0);
printf("%d\n",ans);
}
return 0;
}

