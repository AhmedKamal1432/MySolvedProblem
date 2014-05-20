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

void print(int n)
{
	if(n<5){
		printf("O-|");
		for (int i = 0; i < n; ++i)
			printf("O");
		printf("-");
		for (int i = n; i < 4; ++i) {
			printf("O");
		}
		printf("\n");
	}
	else {
		printf("-O|");
		n-=5;
		for (int i = 0; i < n; ++i)
			printf("O");
		printf("-");
		for (int i = n; i < 4; ++i) {
			printf("O");
		}
		printf("\n");

	}
}
int main()
{
   // freopen("input.txt","r",stdin);
   // freopen("output.txt","w",stdout);
int num;
sc(num);
int temp = num;
int rat =10;
if(num==0)
	print(0);
else
while(temp > 0)
{
 int ve	= temp %rat;
 temp/=10;
 print(ve);
}

return 0;
}

