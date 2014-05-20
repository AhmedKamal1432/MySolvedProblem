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

int main()
{
  //  freopen("input.txt","r",stdin);
 //   freopen("output.txt","w",stdout);
int n,k;
cin>>n>>k;
for (int i = 0; i < n; ++i) {
	for (int j = 0; j < n; ++j) {
	    if(j==0 && i==0)
	    	printf("%d",k);
		else if(j==0)
			printf("0");
		else if(j==i)
			printf(" %d",k);
		else
		printf(" 0");
	}
	printf("\n");
}
return 0;
}

