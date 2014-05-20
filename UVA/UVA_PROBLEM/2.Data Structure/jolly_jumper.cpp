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

#define vi vector<int> 
#define ii pair<int,int> 
#define vii vector< pair<int,int> > 

int main()
{
 //   freopen("input.txt","r",stdin);
 //   freopen("output.txt","w",stdout);

	int arr[3000];
	int N;
	while (scanf("%d",&N)!= EOF )
	{
		memset(arr,0,sizeof(arr));
		int n1,n2;
		scanf("%d",&n1);
		for(int i=0;i<N-1;i++)
		{
		  scanf("%d",&n2);
		  arr[abs(n2-n1)]++;
		  n1=n2;
		}

		bool hamada =true;
		for (int i = 1; i < N; i++)
		{
			if(arr[i]!=1)
				hamada=false;
		}
	
		if(hamada)
			printf("Jolly\n");
		else
			printf("Not jolly\n");
	}

return 0; 
}
