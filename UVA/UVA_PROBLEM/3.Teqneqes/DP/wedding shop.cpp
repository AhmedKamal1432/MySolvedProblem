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
#define INF 1000000000
#define PB	push_back
typedef vector<double>    VD;
typedef vector<string>    VS;
int gcd(int a, int b) { return (b == 0 ? a : gcd(b, a % b)); }
int n,m,c;
int k[25];
int com[25];
int arr[30][30];
int Max=-1;
int table[25][100];
int back(int l,int sum){
	if(sum > m)
		 return -INF;
	if(l==c)
		 return sum;
	if(table[l][sum] != -1)
		return table[l][sum];

	int q = 0;

	LOOP(i,k[l]){
		//com[l]=i;
		q = max(q,back(l+1,sum+arr[l][i]) );
	}
	return table[l][sum]=q;
}
int main()
{
 //   freopen("input.txt","r",stdin);
 //   freopen("output.txt","w",stdout);


sc(n);
LOOP(i,n){
	CLR(table,-1);
	sc(m);sc(c);
	LOOP(i,c){
	  sc(k[i]);
	  LOOP(j,k[i])
	   sc(arr[i][j]);
	}
	int ans = back(0,0);
	if(ans <= 0)
		printf("no solution\n");
	else
		printf("%d\n",ans);
}
return 0;
}

