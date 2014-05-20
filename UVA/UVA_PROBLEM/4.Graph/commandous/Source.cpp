#include <cstdio>
#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
using namespace std;

int main()
{
	//freopen("input.txt","r",stdin);
//   freopen("output.txt","w",stdout);
  

 int cases;
 scanf("%d",&cases);
 for (int t = 0; t < cases; t++)
 {
	int vert;
		scanf("%d",&vert);
		int **arr=new int* [vert];
		
		for (int i = 0; i < vert; i++)
		   arr[i]=new int[vert];
		
		for (int i = 0; i < vert; i++)
			for (int k = 0; k < vert; k++)
				arr[i][k]=-1;

		for (int i = 0; i < vert; i++)
		    arr[i][i]=0;

		
			
		int n_road,b1,b2;
     		
		scanf("%d",&n_road);
			 
			for (int i = 0; i < n_road; i++)
			{
			    scanf("%d %d",&b1,&b2);
				arr[b1][b2]=1;	
			    arr[b2][b1]=1;
			}
 
			for (int i = 0; i < vert; i++)
				for (int k = 0; k < vert; k++)
					if(arr[i][k]==-1)
					{
						arr[i][k]=999999;
					}
 
 

      for (int k = 0; k < vert; k++) // common error: remember that loop order is k->i->j
		  for (int i = 0; i < vert; i++)
			for (int j = 0; j < vert; j++)
				arr[i][j] = min(arr[i][j], arr[i][k] + arr[k][j]);

  
	  // starting calculate bulding array
   
	  int st,end,sum;
	      scanf("%d %d",&st,&end);
			
		  int *build=new int[vert];

		  for (int i = 0; i < vert; i++)
		  {
			 sum =arr[st][i]+arr[i][end];
			 build[i]=sum;
		  }

		 sort(build,build+vert);

		 printf("Case %d: %d\n",t+1,build[vert-1]);

 }



}