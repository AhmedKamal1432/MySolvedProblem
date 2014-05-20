#include <cstdio>
#include <iostream>
#include <vector>
#include <string>
#include <sstream>
using namespace std;

int main ()
{
	//freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
	int n;
	int arr[101][101];
	
	int erCol,erRow;
	int numErCol,numErRow;
	int sum;
	while(scanf("%d",&n)!=EOF && n!=0)
	{
		erCol=erRow=0;
		numErCol = numErRow = 0;
		sum=0;

		for (int i = 0; i < n; i++)
			for (int k = 0; k < n; k++)
               scanf("%d",&arr[i][k]);


	//row chick

		for (int i = 0; i < n; i++)
		{
			for (int k = 0; k < n; k++)
			{
				sum += arr[i][k];
			}

			if(sum % 2 == 1)
			 {
				 erRow=i;
				 numErRow++;
			 }
		 sum=0;
		}

		if(numErRow>1)
		{
			printf("Corrupt\n");
		  continue;
		}


//colume chick

		for (int i = 0; i < n; i++)
		{
			sum=0;
			for (int k = 0; k < n; k++)
			{
				sum += arr[k][i];
			}

			if(sum % 2 == 1)
			 {
				 erCol=i;
				 numErCol++;
			 }
		  sum=0;
		}
		
		if(numErCol>1)
		{
		  printf("Corrupt\n");
		  continue;
		}

	
		if (numErCol ==0 && numErRow == 0)
		{	
		  printf("OK\n");
		  continue;
		}

		if (numErCol ==1 && numErRow == 1)
		{	
			printf("Change bit (%d,%d)\n",erRow+1,erCol+1);
		  continue;
		}
		else
		{
			printf("Corrupt\n");
		  continue;
		}
	}


	return 0;
}
