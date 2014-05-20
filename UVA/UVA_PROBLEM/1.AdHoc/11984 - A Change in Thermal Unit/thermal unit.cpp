#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
#include<string>
#include<map>
#include<sstream>
#include<cmath>

using namespace std;


int main()
{
//	freopen("input.txt","r",stdin);
//	freopen("output.txt","w",stdout);

int tst;
scanf("%d",&tst);
float cl,d,fh,out;
for (int t = 0; t < tst; t++)
{
	scanf("%f",&cl);
	scanf("%f",&d);
	fh = (9*cl/5)+32;
	fh += d;
	out = 5*(fh-32)/9;
	printf("Case %d: %.2f\n",t+1,out);
}
return 0;
}