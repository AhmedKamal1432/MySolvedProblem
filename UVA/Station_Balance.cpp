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
    freopen("input.txt","r",stdin);
 //   freopen("output.txt","w",stdout);
int c,m;
int set=1;
while (sc(c)!=EOF)
{
	//if(set>1)
	//	printf("\n");
	sc(m);
	vi arr;    arr.assign(m,0);
	for (int i = 0; i < m; i++)
		sc(arr[i]);
	
	printf("Set #%d\n",set);
	
	if(c >= m)
	{
		for (int i = 0; i < m; i++)
		 printf(" %d: %d\n",i,arr[i]);

		for (int i = m; i < c; i++)
		{
	      printf(" %d: \n",i);
		  arr.push_back(0);
		}

		int sum=0;
		for (int i = 0; i < m; i++)
		 sum+=arr[i];
		double av= (double)sum/double(c);
		double imp=0;
		for (int i = 0; i < c; i++)
			imp += fabs(av-arr[i]);
		printf("IMBALANCE = %.5f\n",imp);
	}
	else
	{
		vi ham;
		ham.assign(c,0);
	
		for (int i = m; i < 2*c; i++)
			arr.push_back(0);	  
		sort(arr.begin(),arr.end());

		for (int i = 0; i < c; i++)
		{
			printf(" %d: ",i);
			if(arr[i]!=0)
				printf("%d ",arr[i]);
			printf("%d\n",arr[2*c -1-i]);

			ham[i] += arr[i]+arr[2*c -1-i];
		}

		int sum=0;
		for (int i = 0; i < c; i++)
		 sum+=ham[i];
		double av= (double)sum/double(c);
		double imp=0;
		for (int i = 0; i < c; i++)
			imp += fabs(av-ham[i]);
		printf("IMBALANCE = %.5f\n\n",imp);
	}	
	set++;
}


return 0; 
}
