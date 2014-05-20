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

typedef long long int llint ;
#define vi vector<int>
#define ii pair<int,int>
#define vii vector< pair<int,int> >
#define sc(x) scanf("%d",&x)


int main()
{
   // freopen("input.txt","r",stdin);
   // freopen("output.txt","w",stdout);
int a;
while(sc(a) != EOF)
{
 if(a%6 == 0)
	 printf("Y\n");
 else
	 printf("N\n");
}

return 0;
}

