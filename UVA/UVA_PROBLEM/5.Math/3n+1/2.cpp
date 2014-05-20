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
	
	int max_i,num1,num2,max_cle,cle,temp,pvt;
   max_cle=cle=0;
   bool swap =false;
	while(scanf("%d %d",&num1,&num2)>0)
   {
	   swap =false;
    /* if((num1==1) || (num2=1))
		break;*/
    max_cle=0;
	 if(num1>num2)
	 {
		 swap =true;
	   temp=num2;
	   num2=num1;
	   num1=temp;   
	 }
	 max_i=num1;
	 for(int i=num1;i<=num2;i++)
	 {
		 cle=0;
       pvt=i;
	  while(pvt!=1)
	  {
		  cle++;
	   if(pvt%2==1)
	   pvt= pvt*3+1;
	   else
	     pvt=pvt/2;
	  }
	 
	  if(cle>max_cle)
	  {
		 max_cle=cle;
	    max_i=i;
	  }
	 }
  
	if(swap)
    printf("%d %d %d\n",num2,num1,++max_cle);
	else
	printf("%d %d %d\n",num1,num2,++max_cle);
  }
return 0;
}