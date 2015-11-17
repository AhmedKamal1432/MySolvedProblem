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

vector<vi > arr;
int l ,c;
void swap_raw(int a ,int b){
	REP(i,c)
		swap(arr[a][i], arr[b][i]);
}

void swap_col(int a ,int b){
	REP(i,l)
		swap(arr[i][a], arr[i][b]);
}

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		//freopen("output.txt", "w", stdout);
	#endif
		while(cin >>l >>c ){
			arr.assign(l, vi(c));
			REP(i,l)
				REP(k,c)
					sc(arr[i][k]);

			bool g = true;
			REP(i,l){
				vi tmp(c,0);
				REP(k,c)
					tmp[k] = arr[i][k];
				sort(ALL(tmp));
				LOOP(k,1,c)
					if(tmp[k] != tmp[k-1] +1 )
						g = false;
			}
			// if(g)
			// 	printf("ynfa3 with rows\n");
			REP(i,c){
				vi tmp(l,0);
				REP(k,l)
					tmp[k] = arr[k][i];
				sort(ALL(tmp));
				// print_v(tmp);
				LOOP(k,1,l)
					if(tmp[k] != tmp[k-1] + c){
						// printf("k: %d , k -1: %d\n",tmp[k] , tmp[k-1]);
						g = false;
						break;
					}
			}
			
			if(!g){
				printf("*\n" );
				continue;
			}
			// printf("ynfa3\n");

			int ans = 0;
			REP(i,l){
				if((arr[i][0]-1)/c == i)
					continue;
				LOOP(k,i+1,l){
					if((arr[k][0]-1)/c == i){
						swap_raw(i,k);
						ans++;
						break;
					}
				}				
			}

			REP(i,c){
				if(arr[0][i]%c == i+1)
					continue;
				// printf("find i = %d\n", i);
				LOOP(k,i+1,c){
					if(arr[0][k]%c == i+1){
						swap_col(i,k);
						// printf("%d %d\n",i, k );
						ans++;
						break;
					}
				}				
			}
			printf("%d\n",ans);

		}
	return 0; 
}
