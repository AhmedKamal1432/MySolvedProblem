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
   int word=0;
	char c; 
	bool grant=false;

	while(scanf("%c",&c)>0)
	{
		if(isalpha(c))
			grant=true;

	  else if(c=='\n')
	  {
		  if(grant)
			  word++;

		  printf("%d\n",word);
		  grant=false;
		  word=0;
	  }
	 
	  else
	  {
		  if(grant)
			  word++;
		  grant=false;
	  }
	}

	

return 0;
}