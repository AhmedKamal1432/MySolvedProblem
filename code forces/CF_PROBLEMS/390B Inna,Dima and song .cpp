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

int main()
{
  //  freopen("input.txt","r",stdin);
 //   freopen("output.txt","w",stdout);
int n;sc(n);
vi a(n),b(n);
LOOP(i,n)
	sc(a[i]);

LOOP(i,n)
	sc(b[i]);

LL ans =0;
LOOP(i,n){

	if(b[i] == 1)
		ans--;
	else{
	if(b[i]%2 == 0){
		LL x= b[i]/2;
		if(x > a[i])
			 ans--;
		else
			ans += (x*x);
	}
	else{
		LL x= b[i]/2;
		if(x+1 > a[i])
			ans--;
		else
			ans+= (x * (x+1));
	}
	}
}

cout<<ans;
return 0;
}

