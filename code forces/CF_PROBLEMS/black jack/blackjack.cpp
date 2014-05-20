#include <cstdio>
int main()
{
 int n;
 while(scanf("%d",&n)>0)
 {
	 n=n-10;
   if(n<=0)
	   printf("0\n");
   
   else if(n>11)
	  printf("0\n");
	
   else if(n==11)
   printf("4\n");

   else if(n==10)
	printf("15\n");

   else 
	printf("4\n");
 }
 return 0;
}