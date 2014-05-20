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
 //   freopen("input.txt","r",stdin);
 //   freopen("output.txt","w",stdout);

	int n,k;
	cin>>n>>k;
	if(n==1){
		printf("-1\n");
		return 0;
	}

	int i=1;
	if(k%2==1){
    printf("1 2");
    k--;
    i=3;
	}
	else
	{
		printf("2 1");
		i=3;
	}

int temp=3;
	for (; i <= n-k;i+=2) {
		printf(" %d %d",i+1,i);
		temp=i+1;
	}
i=temp+1;
	for (int my=0; my < k;my++ ) {
		printf(" %d",i);
		i++;
	}

	printf("\n");
 return 0;
}

