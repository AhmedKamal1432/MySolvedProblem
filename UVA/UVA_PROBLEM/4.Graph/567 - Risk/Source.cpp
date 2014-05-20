#include <cstdio>
#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include<algorithm>
using namespace std;

int main ()
{
	int hash[101];	

	
	//freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
	int cas=1;
	int num, bord;
	int arr[20][20];
	int col;
	int qsr;
	int big, end;

	while(scanf("%d",&num)!=EOF)
	 {
		 
		for (int i = 0; i < 20; i++)
		for(int k = 0; k < 20; k++)
			arr[i][k]=999999;
		
		for (int i = 0; i < 20; i++)
		  arr[i][i]=0;

		
//fill the firest row
		for (int i = 0; i < num; i++)
		{
			scanf("%d",&col);
		   arr[0][col-1] = 1;
		   arr[col-1][0] = 1;
		}

//fill the all row
		for (int i = 1; i < 19; i++)
		{
			scanf("%d",&num);
			for (int k = 0; k < num; k++)
			{
				scanf("%d", & col);
			   arr[i][col-1] = 1;
			   arr[col-1][i] = 1;
			}
		}


		for (int k = 0; k < 20; k++)
			for (int i = 0; i < 20; i++)
				for (int j = 0; j < 20; j++)
					arr[i][j] = min(arr[i][j], arr[i][k] + arr[k][j]);

		printf("Test Set #%d\n",cas);
		scanf("%d",&qsr);

		for (int i = 0; i < qsr; i++)
		{
			scanf("%d %d",&big,&end);
			
			if(big<10)
				printf("%2d",big);
			else
				printf("%d",big);

			printf(" to ");

			if(end<10)
				printf(" %d",end);
			else
				printf("%d",end);

		if(arr[big-1][end-1]>999999)
			printf(": -1\n");
		else
			printf(": %d\n",arr[big-1][end-1]);
		 
		
		}
		 printf("\n");

	cas++;
	}

	
	return 0;
}