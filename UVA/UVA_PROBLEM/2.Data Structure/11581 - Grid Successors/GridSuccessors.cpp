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

int arr[3][3];
int temp[3][3];
int func()
{
	for (int R = 0; R < 3; R++)
		for (int C = 0; C < 3; C++)
		{
			int num=0 ;

			if(R-1>=0)
				num+=arr[R-1][C];
			if(R+1 <3)
				num+=arr[R+1][C];
			if(C-1>=0)
				num+=arr[R][C-1];
			if(C+1 <3)
				num+=arr[R][C+1];

			temp[R][C]=num%2;
		}

		int cnt_z=0;
		for (int R = 0; R < 3; R++)
			for (int C = 0; C < 3; C++)
			{
				arr[R][C]=temp[R][C];
				if(temp[R][C]==0)
					cnt_z++;
			}
			return cnt_z;
}

int main()
{
	 //  freopen("input.txt","r",stdin);
	//   freopen("output.txt","w",stdout);

	int tst;
	scanf("%d",&tst);
	for (int C = 0; C < tst; C++)
	{
		int zero=0;
		for (int r = 0; r < 3; r++)
			for (int c = 0; c < 3; c++)
			{
				scanf("%1d",&arr[r][c]);
				if(arr[r][c]==0)
					zero++;
			}

			if(zero==9)
			{
				printf("-1\n");
				continue;
			}

			int i=0;

			while(zero!=9)
			{
				zero=func();
				i++;
			}

			printf("%d\n",i-1);
	}

	return 0; 
}
