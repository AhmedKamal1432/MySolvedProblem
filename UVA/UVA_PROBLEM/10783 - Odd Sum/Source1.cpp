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
   
	int t,a,b,temp,num;
	int sum;
	scanf("%d",&t);
	for (int k= 0; k <t; k++)
	{
		sum =0;
		scanf("%d %d",&a,&b);
		if(b<a)
		{
		 temp=a;
		 a=b;
		 b=temp;
		}

		if (a==b)
		{
			if(a%2==1)
				sum=0;
			else
				sum=a;
		}

		else
		{
          //make sure thats are odds
			if(a%2==0)
				a++;
		  if(b%2==0)
			  b--;

		  num=((b-a)/2)+1;
		  
			sum=((float)num/2.0)*(float)(a+b);
		}

		printf("Case %d: %d\n",k+1,sum);
	}

return 0;
}