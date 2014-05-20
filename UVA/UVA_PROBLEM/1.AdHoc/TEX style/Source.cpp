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
   char c; 
	bool frist=true;
	while(scanf("%c",&c)>0)
	{
		if (c=='"')
		{
			if(frist)
			{
				printf("``");
				frist=false;
			}
			else
			{
				printf("''");
				frist=true;
			}
		}
		else
			printf("%c",c);
	}

return 0;
}