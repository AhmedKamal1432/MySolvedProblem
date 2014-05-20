#include <cstdio>
#define domino 2
int main()
{
	int m,n,temp,max;
	while(scanf("%d %d",&n,&m)>0)
	{
	max=(n/domino)*m ;
	if(n%2==1)
		max += m/domino;
	printf("%d\n",max); 
    }
return 0;
}