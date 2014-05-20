/*
*
* solved by Ahmed Kamal
*/
#include<cstdio>
#include<cstdlib>
#include <algorithm>
using namespace std;
#define sc(x) scanf("%d",&x)
#define LOOP(i, n)		for(int i=0;i<(int)(n);++i)
int gcd(int a, int b) { return (b == 0 ? a : gcd(b, a % b)); }
int main()
{
int t;sc(t);
LOOP(i,t){
	 int p,q;
	sc(p);sc(q);
	int gd =gcd(max(p,q),min(p,q));
	p/=gd; q/=gd;
	if((float)p/q >2 ){
		printf("NO\n");
		continue;
	}
	while(!(q&1)) q>>=1;

	 if( ((p&(p-1))==0 && ((q+1)&q)==0) )
		printf("YES\n");
	else
		printf("NO\n");
}return 0;}

