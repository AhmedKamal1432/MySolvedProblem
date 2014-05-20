#include <cstdio>
#include <string>
#include <cstring>

#define max_num 11
using namespace std;
char* spaces(int);

int main()
{
 int n;
 char sp[max_num];

 scanf("%d",&n);

 for(int i=n;i>0;i--)
 {
	 strcpy(sp,"");
  strcpy(sp,spaces(2*i));
  printf("%s",sp);
  
  for(int j=0;j<(n-i);j++)
   printf(" %d",j);
  for(int j=(n-i);j>=0;j--)
	  printf(" %d",j);
 
    
  printf("\n");
 }

 for(int i=0;i<n;i++)
	 printf("%d ",i);

  printf("%d",n);
 for(int i=n-1; i>=0; i--)
	 printf(" %d",i);

 printf("\n");
 for(int i=1;i<n+1;i++)
 {
	 strcpy(sp,"");
  strcpy(sp,spaces(2*i));
  printf("%s",sp);
  
  for(int j=0;j<(n-i);j++)
   printf(" %d",j);
  for(int j=(n-i);j>=0;j--)
	  printf(" %d",j);
 printf("\n");
 }


 return 0;
}




char* spaces(int n)
{
 char* dsp=new char[n]();
 for(int i=1;i<n;i++)
 {
  strcat(dsp," ");
 }
 return dsp;
}