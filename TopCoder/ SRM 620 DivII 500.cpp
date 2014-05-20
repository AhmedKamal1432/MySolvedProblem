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
int c,d;
int dp[1005][1005];
bool back(int a,int b){
	if(a > c || b > d)
		return 0;
	if(a==c && b==d )
		return 1;
	if(dp[a][b] != -1)
		return dp[a][b];
	int ans = back( a,a+ b);
	ans |= back (a+b,b);
	return  dp[a][b] = ans;
}
class PairGameEasy {
public:
	string able(int a, int b, int c1, int d1) {
     c=c1;d=d1;
     CLR(dp,-1);
     bool ans = back(a,b);
     if(ans)
    	 return "Able to generate";
     return "Not able to generate";
	}
};


