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
   
	int a,b,t,temp;
	char c;
	scanf("%d",&t);
	for (int i = 0; i <t; i++)
	{
		scanf("%d %d",&a,&b);
		if(a<b)
			c='<';
		else if(a>b)
			c='>';
		else
			c='=';

		printf("%c\n",c);
	}

return 0;
}