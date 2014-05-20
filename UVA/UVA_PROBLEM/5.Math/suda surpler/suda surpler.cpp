#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
 int drunk=0;
 int empty,newone,temp1;
 int t,e,c;

 scanf("%d",&t);
 for (int b = 0; b < t; b++)
 {
	 drunk=0;
	 scanf("%d %d %d",&e,&c,&newone);
	 empty=e+c;
	 while(empty>=newone)
	 {
	  temp1=empty/newone;
	  drunk+=temp1;
	  empty=(empty%newone)+temp1; 
	 }
 cout<<drunk<<endl;
 }
return 0; 
}