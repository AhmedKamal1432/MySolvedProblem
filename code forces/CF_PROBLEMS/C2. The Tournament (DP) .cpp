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
#define INF (1<<29)
#define PB	push_back
typedef vector<double>    VD;
typedef vector<string>    VS;
int gcd(int a, int b) { return (b == 0 ? a : gcd(b, a % b)); }
vector<ii> arr;
int num,k,curp;

int dp[105][105][105];
int back(int n,int r,int p){

	//invalid case
	if(p<0)
		return INF;
	if(n == 0 && p != 0 )
		return INF;
	if(n==0 && p==0 && r>k)
		return INF;

	//base case
	if(n==0 && p==0 && r<=k)
		return 0;

	//dp case
	if(dp[n][r][p] != -1)
		return dp[n][r][p];

	int win,lose;
	// at win
	if(curp >= arr[n-1].first)
		win =arr[n-1].second +back(n-1,r-1,p-1);
	else
		win =arr[n-1].second +back(n-1,r,p-1);

	//at lose
	if(curp > arr[n-1].first +1)
		lose = back(n-1,r-1,p);
	else
		lose = back(n-1,r,p);

 return dp[n][r][p]=min(win,lose);
}

int main()
{
  // freopen("input.txt","r",stdin);
 //   freopen("output.txt","w",stdout);
int hamada;
sc(num);sc(k);
arr.assign(num,ii(0,0));
LOOP(i,num){
	sc(arr[i].first);sc(arr[i].second);
}

int mn =INF;
LOOP(i,num+1){
	curp=i;
CLR(dp,-1);
int ans = back(num,num+1,i);
mn =min(ans,mn);
}

if(mn != INF  ){
	printf("%d\n",mn);
}
else
	printf("-1\n");
return 0;
}
