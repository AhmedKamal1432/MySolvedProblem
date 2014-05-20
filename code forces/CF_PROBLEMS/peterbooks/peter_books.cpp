#include <iostream>
#include<cstdio>

int main()
{
 int page;
 scanf("%d",&page);
 int arr[7];
 for (int i = 0; i < 7; i++)
 {
 scanf("%d",&arr[i]);
 }

 int sum=0;
 while (sum<page)
 {
	 for (int i = 0; i < 7; i++)
	 {
		 sum+=arr[i];
		 if(sum>=page)
		 {
		 printf("%d\n",i+1);
		 break;
		 }
	 }
 }

}