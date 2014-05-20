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
  //  freopen("input.txt","r",stdin);
 //   freopen("output.txt","w",stdout);

int arr[5][5];
int row,col;

for (int i = 0; i < 5; i++)
	for (int k = 0; k < 5; k++)
	{
        sc(	arr[i][k]);
		if(arr[i][k]==1)
		{
		  row=i;
		 col=k;
		}
	}

	int sum = abs(row-2)+abs(col-2);

	printf("%d\n",sum);
return 0; 
}
