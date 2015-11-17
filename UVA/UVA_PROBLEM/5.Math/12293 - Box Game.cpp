/*
*
* solved by Ahmed Kamal
*/
// clang++ -std=c++11 ps.cpp

#include <bits/stdc++.h>

using namespace std;

typedef long long int LL ;
#define vi vector<int> 
#define ii pair<int,int> 
#define PLL pair<LL,LL> 
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
		int n,m;
		const int  MAX = 1123456;
		while(cin >> n){
			cin>>m;
			vi arr(m,0);
			REP(i,m){
				sc(arr[i]);
			}
			sort(ALL(arr));
			vi play(MAX, 0);
			LOOP(i,1,n+1){
				int g = false;
				REP(k,m){
					if(arr[k] <= i)
						g |= !(play[i-arr[k]]);
				}
				if(g)
					play[i] = 1;
			}
			if(play[n])
				printf("Stan wins\n");
			else
				printf("Ollie wins\n");
		}
	return 0; 
}
