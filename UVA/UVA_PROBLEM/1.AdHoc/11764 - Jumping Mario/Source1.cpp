#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

int main()
{
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
   
	int crt,nxt,t,temp,walls;
	int high,low;
	scanf("%d",&t);
	for (int k= 0; k <t; k++)
	{
		high=low=0;

		scanf("%d %d",&walls,&crt);
		for (int i = 1; i < walls; i++)
		{
			scanf("%d",&nxt);
			
			if(crt<nxt)
				high++;
			else if(crt>nxt)
				low++;

			crt=nxt;
		}
		printf("Case %d: %d %d\n",k+1,high,low);
	}

return 0;
}