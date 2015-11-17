/*
*
* solved by Ahmed Kamal
*/
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <iostream>
#include <sstream>
#include <cstring>
#include <vector>
#include <list>
#include <map>
#include <set>
#include <bitset>
#include <queue>
#include <stack>
#include <utility>
#include <algorithm>
#include <functional>

using namespace std;

typedef long long int LL ;
#define vi vector<int>
#define ii pair<int,int>
#define vii vector< pair<int,int> >

#define ALL(v)				((v).begin()), ((v).end())
#define SZ(v)				((int)((v).size()))
#define CLR(v, d)			memset(v, d, sizeof(v))
#define REP(i, n)		for(int i=0;i<(int)(n);++i)
#define LOOP(i,b, n)		for(int i=(b);i<(int)(n);++i)

#define sc(x) scanf("%d",&x)
#define DSC(x) int x; scanf("%d",&x)
#define DSC2(x,y) int x,y; scanf("%d %d",&x,&y)

#define PB	push_back
#define MP  make_pair
double const EPS = 2.22045e-016;
#define INF (1<<29)


typedef vector<double>    VD;
typedef vector<string>    VS;
void print_v(vi arr){
int n = SZ(arr);
  REP(i,n)
    if(i == n-1)
       cout<<arr[i] <<endl;
     else
      cout<<arr[i]<<" ";
}

int gcd(int a, int b) { return (b == 0 ? a : gcd(b, a % b)); }


int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		//freopen("output.txt", "w", stdout);
	#endif
		DSC(n);
		vector<vi> arr(n,vi(n,0));
		vector<vi> sum(n,vi(n,0));
		REP(i,n){
			REP(j,n)
					sc(arr[i][j]);
		}
		REP(i,n){
			sum[i][0] =arr[i][0];
			LOOP(j,1,n){
				sum[i][j] = sum[i][j-1] + arr[i][j];
			}
		}
		REP(j,n){
			LOOP(i,1,n){
				sum[i][j] += sum[i-1][j];
			}
		}
//		REP(i,n)
//			print_v(sum[i]);
		int ans = -INF;
		REP(x1,n){
			LOOP(x2,x1, n){
				REP(y1, n){
					LOOP(y2,y1, n){
//						printf("%d %d %d %d\n",x1,x2,y1,y2);
						int value = sum[x2][y2] + ((y1 > 0  && x1 > 0)?sum[x1-1][y1-1]:0) - ((x1 > 0)?sum[x1-1][y2]:0) - ((y1 > 0)?sum[x2][y1-1]:0);
						ans = max(ans,value );
					}
				}
			}
		}
		printf("%d\n",ans);
	return 0;
}
