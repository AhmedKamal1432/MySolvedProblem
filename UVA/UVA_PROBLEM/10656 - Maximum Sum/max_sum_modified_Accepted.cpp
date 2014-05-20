#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
#include<cstring>
#include<map>
#include<sstream>
#include<cmath>

using namespace std;

int main()
{
//	freopen("input.txt","r",stdin);
//   freopen("output.txt","w",stdout);
	int n;
   vector<int> arr,fin;
   int num;

	while( scanf("%d",&n) !=EOF && (n != 0) )
	{
		arr.clear();
		fin.clear();
		
		for (int i = 0; i < n; i++)
		{
			scanf("%d",&num);
			arr.push_back(num);
		}

		for (int i = 0,len=arr.size(); i < len; i++)
		{
			if(arr[i] != 0)
				fin.push_back(arr[i]);
		}

		if(fin.size()==0)
			{
				printf("0\n");
				continue;
		}
		
		
		
		printf("%d",fin[0]);

			for (int i = 1,len=fin.size(); i < len; i++)
		{
			printf(" %d",fin[i]);
		}
			printf("\n");

	}
return 0;
}