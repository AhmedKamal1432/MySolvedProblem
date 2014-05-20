#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
#include<string>
#include<map>
#include<sstream>
#include<cmath>

using namespace std;

int main()
{
//	freopen("input.txt","r",stdin);
//	freopen("output.txt","w",stdout);
	
	
	double pa3,pb3,pc3,pd3;
	double temp,fd;
	int id;


	for( int a=2;a<201;a++)
	{
	
	   pa3=pow(a,3);

	   for (int b = 2; b < a; b++)
	   {
		   pb3=pow(b,3);

		   for (int c = b; c < a; c++)
		   {
			   pc3=pow(c,3);
			   
			if((pb3+pc3) > pa3)
				break;
			   
			   temp =pa3 -(pb3+pc3);

			   fd=pow(temp,1.0/3.0);
			   id=ceil(fd-0.5);

			   if(abs(fd-id)<0.0000001 && id>c )
			   {
			    printf("Cube = %d, Triple = (%d,%d,%d)\n",a,b,c,id);
			   }

			   
		   }


	   }
	
	
	
	
	}


	return 0;
}
