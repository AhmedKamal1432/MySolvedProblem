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
double const EPS = 2.22045e-016;
#define INF (1<<29)

#define ALL(v)				((v).begin()), ((v).end())
#define SZ(v)				((int)((v).size()))
#define CLR(v, d)			memset(v, d, sizeof(v))
#define LOOP(i, n)		for(int i=0;i<(int)(n);++i)

#define PB	push_back
typedef vector<double>    VD;
typedef vector<string>    VS;
int gcd(int a, int b) { return (b == 0 ? a : gcd(b, a % b)); }

int dp[10005][105];
int k,n;
vi arr;

bool back(int sum,int c){
	if(c == n){
		if(sum ==0)
			return true;
		return false;
	}
	if(dp[c][sum]!= -1)
		return dp[c][sum];
	 bool ans =false;
	ans = back((((sum+arr[c])%k)+k)%k ,c+1);
	ans |= back((((sum-arr[c])%k)+k)%k ,c+1);
	return dp[c][sum] = (int)ans;
}

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
#endif
int t;sc(t);
while(t--){
	CLR(dp,-1);
	sc(n);sc(k);
	arr.assign(n,0);
	LOOP(i,n)
	  sc(arr[i]);
  if(back(0,0))
	  printf("Divisible\n");
  else
	  printf("Not divisible\n");

}

return 0;
}

