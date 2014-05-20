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

class DropCoins {
public:
int ac[32][32];
VS arr;
void acumilate()
{
	LOOP(i,SZ(arr)){
		ac[i][0]=(arr[i][0] == 'o')? 1 : 0;
		for(int k =1;k<SZ(arr[0]);k++)
		ac[i][k]=ac[i][k-1] + ((arr[i][k] == 'o')? 1 : 0) ;
	}
	LOOP(i,SZ(arr[0])){
		for(int k =1;k<SZ(arr);k++)
		ac[k][i]+=ac[k-1][i]  ;
	}
}
	int getMinimum(vector <string> board, int K) {
 //x1 == 0 && x2 == 1 && y1 ==0 && y2 == 2
	CLR(ac,0);
	  arr = board;
	  acumilate();
      int h=SZ(arr),w=SZ(arr[0]);
      int res = INF;
      LOOP(x1,w)
       for (int x2 = x1; x2 < w; ++x2)
		 LOOP(y1,h)
		   for (int y2 = y1; y2 < h; ++y2) {
			int coins =ac[y2][x2] - ((x1 != 0)?ac[y2][x1-1]:0) - ((y1 != 0)?ac[y1-1][x2]:0) + ((x1 !=0 && y1 !=0)? ac[y1-1][x1-1] : 0);
			if(coins == K){
			int	a= x1,b = y1,c=w-x2-1, d = h-y2-1;
			res = min(res,a+c+b+d + min(a,c)+min(d,b));
			}
		}
      return (res==INF)? -1 : res;
	}
};

