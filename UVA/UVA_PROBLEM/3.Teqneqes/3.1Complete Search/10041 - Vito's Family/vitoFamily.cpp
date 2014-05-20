#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
#include<string>
#include<map>
#include<sstream>
#include<cmath>

using namespace std;


int main()
{
//	freopen("input.txt","r",stdin);
//	freopen("output.txt","w",stdout);

	int tst;
	int rev;
	vector<int> stret;
	int temp;
	int sum ,min,myst;
	
	vector<vector<int> > vsums;

	scanf("%d",&tst);
	for (int cas = 1; cas < tst+1; cas++)
	{
		stret.clear();
		vsums.clear();

	  scanf("%d",&rev);

	  for (int k = 0; k < rev; k++)
	  {
		  scanf("%d",&temp);
		  stret.push_back(temp);
		  vector<int> tm;
		  vsums.push_back(tm);
	  }
		
	  int len =stret.size();
	  myst = stret[0];
	  min=0;
		  for (int i = 0; i < len; i++)
		  {
			temp = abs(stret[i]-stret[0]);
		     min += temp;
		  }

	  for (int k = 0; k < len-1; k++)
	  {
		  sum=0;
		  for (int i = k+1; i < len; i++)
		  {
             temp = abs(stret[i]-stret[k]);
			 vsums[i].push_back(temp);
		     vsums[k].push_back(temp);
		  }

		  for (int i = 0,n=vsums[k].size(); i < n; i++)
		  {
			  sum+=vsums[k][i];
		  }

		  if(sum < min)
		  {
			min=sum;
			  myst = stret[k];
		  }
	  }
	  sum=0;

	  for (int i = 0,n=vsums[len-1].size(); i < n; i++)
		  {
			  sum+=vsums[len-1][i];
		  }

		  if(sum < min)
		  {
			  min=sum;
			  myst = stret[len-1];
		  }

	  printf("%d\n",min);
	}


return 0;
}