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
		int x;
		while(cin >>x){
			vi arr(3,0);
			arr[0]  = x;
			int z=0,o = 0;
			if(arr[0] == 0)
				z++;
			else
				o++;	
			LOOP(i,1,3){
				sc(arr[i]);

				if(arr[i] == 0)
					z++;
				else
					o++;	
			}
			if(z == 0 || z == 3){
				printf("*\n");
			}
			else if(z == 1){
				REP(i,3){
					if(arr[i] == 0){
						printf("%c\n",i+'A' );
						continue;
					}
				}
			}
			else{
				REP(i,3){
					if(arr[i] == 1){
						printf("%c\n",i+'A' );
						continue;
					}
				}
			}
		}
	return 0; 
}
