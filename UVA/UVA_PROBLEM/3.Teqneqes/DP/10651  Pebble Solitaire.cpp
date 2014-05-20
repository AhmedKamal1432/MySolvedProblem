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
int gcd(int a, int b) { return (b == 0 ? a : gcd(b, a % b)); }

int memo[(1<<13)];
int back (int stat){
	if(memo[stat]!=-1)
		return memo[stat];
	int q=0;
	LOOP(i,10){
		if( ((stat & (1<<i) ) && !(stat&(1<<(i+2))) && (stat&(1<<(i+1))) )  )
		 q = max(q,1+back((stat & ~(1<<i) & ~(1<<(i+1)) ) | (1<<(i+2)) ));
		else if( ( !(stat&(1<<i)) && (stat&(1<<(i+2))) && (stat&(1<<(i+1))) ))
			q = max(q,1+back((stat & ~(1<<(i+2)) & ~(1<<(i+1)) ) | (1<<i) ));
	}
	return memo[stat]=q;
}

int main()
{
 //  freopen("input.txt","r",stdin);
 //   freopen("output.txt","w",stdout);
int n;sc(n);
string s;
LOOP(i,n){
	CLR(memo,-1);
	cin>>s;
	int stat=0;
	int count =0;
	LOOP(i,12)
	 if(s[i]=='o'){
		 stat|=(1<<i);
	   count++;
	 }
	int ans = back(stat);
	printf("%d\n",count-ans);
}


return 0;
}

