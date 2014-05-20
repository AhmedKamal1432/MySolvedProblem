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

#define PB	push_back
typedef vector<double>    VD;
typedef vector<string>    VS;
vi f,s;
int hash[60];
int l;
LL dp[1<<10][102][60];
LL solve (int ss,int n,int i){
	if(n < 0 )
		return 0;
	if(i == l)
		return 1;
	if(dp[ss][n][i] != -1)
		return dp[ss][n][i];

	LL ans = solve(ss,n,i+1);

	int t=0;
	if(hash[f[i]] ==0)
		t++;
	hash[f[i]]++;

	if(hash[s[i]] ==0)
		t++;
	hash[s[i]]++;
int b= ss|(1<<(s[i]-1));
if(f[i]<=10 )
	b|=(1<<(f[i]-1));

	ans+=solve(b,n-t,i+1);
	hash[f[i]]--;
	hash[s[i]]--;

return dp[ss][n][i]=ans;
}
class TaroCards {
public:
	long long getNumber(vector <int> first, vector <int> second, int K) {
           f=first; s= second;
           CLR(hash,0);
           CLR(dp,-1);
           l = SZ(f);
           LL ans=solve(0,K,0);
     return ans;
	}
};


