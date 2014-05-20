#include <cstdio>

int main()
{
  int n,val=1;
 while( scanf("%d",&n)>0)
 {
	 val=1;
  for(int i=1;i<n;i++)
  {
    val=val+i;
	
	if(val>=n+1)
	val=(val%n);

	printf("%d ",val);

  }

  printf("\n");
}
  return 0;

}