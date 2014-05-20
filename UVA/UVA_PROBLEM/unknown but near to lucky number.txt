#include <iostream>
#include <cstdio>
#include<cmath>
using namespace std;
int main()
{
	freopen("input.txt","r",stdin);

	long long int t,G,L,multi,itemp;
	float ftemp;
	bool grante;
	scanf("%lld",&t);
	for (int b = 0; b < t; b++)
	{
		grante=false;
		scanf("%lld %lld",&G,&L);
		multi=G*L;
		for (int i = G; i < L; i++)
		{
			ftemp=(float)multi/(float)i;
			itemp=multi/i;

				if (ftemp==itemp)
		         {
				   printf("%d %d/n",i,multi/i);	
				  grante=true;
				   break;
			    }
		}
	
		if(!grante)
			printf("-1/n");

	
	}
}