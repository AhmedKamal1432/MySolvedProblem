#include <cstdio>
#include<iostream>
using namespace std;
int main ()
{
  int n;int sampo;
  int x=0;
  char c[3];
  scanf("%d",&n);
for(int i=0;i<n;i++)
{
	
 cin>>c;
 for(int k=0;k<3;k++)
 {
	 if(c[k] != 'X')
	 {
	  if(c[k]=='+')
		  x++;
	  else
		  x--;
	 break;
	 }
	 else
		 continue;
 }

 	for(int i=0;i<3;i++)
		c[i]=' ';


}
  
printf("%d",x);
return 0;

}
