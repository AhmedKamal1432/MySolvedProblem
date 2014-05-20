#include <cstdio>
#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include<algorithm>
using namespace std;

int main ()
{
 	int arr[100][100];

	int cas = 1;
	
	//freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);

	int ver,str,qrs;

	int st1,st2,des; 

	int q1,q2;

	while(scanf("%d %d %d",&ver,&str,&qrs) != EOF && !( ver ==0 && str== 0 && qrs==0) )
	 {
		 if (cas!=1)
			 printf("\n");

	  
		 for (int i = 0; i < 100; i++)
		  for(int k = 0; k < 100; k++)
			  arr[i][k]=999999;

//getting streets;

		 for (int stt = 0; stt < str; stt++)
		 {
			 scanf("%d %d %d",&st1,&st2,&des);
			 
			 if(arr[st1-1][st2-1] > des)
			   {
					arr[st1-1][st2-1] = des;
		             arr[st2-1][st1-1] = des;
			   }
		 }

//getting modifed min path 

		 for (int k = 0; k < ver; k++)
			for (int i = 0; i < ver; i++)
				for (int j = 0; j < ver; j++)
					arr[i][j] = min( arr[i][j],  max( arr[i][k] , arr[k][j]) );
 
		 printf("Case #%d\n",cas);
		 
		 for (int i = 0; i < qrs; i++)
		 {
			 scanf("%d %d",&q1,&q2);
			 if(arr[q1-1][q2-1]<999999)
				 printf("%d\n",arr[q1-1][q2-1]);
			 else
				 printf("no path\n");
		        
		 }

		 
	cas++;
	
	

	}

return 0;
}