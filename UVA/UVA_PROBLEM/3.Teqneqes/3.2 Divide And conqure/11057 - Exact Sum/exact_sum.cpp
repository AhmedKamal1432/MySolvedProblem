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
	int n ,b,mon;
	vector<int>book;
	pair<int,int>pr;
	vector<pair<int,int> > vpi; 
	int def;
	int min;
	int b1,b2;

	while(scanf("%d",&n) != EOF)
	{
		book.clear();
		vpi.clear();

		for (int i = 0; i < n; i++)
		{
			scanf("%d",&b);
			book.push_back(b);
		}

		sort(book.begin(),book.end());
	
		scanf("%d",&mon);
		for (int i = 0; i < n-1; i++)
		{
			for (int k = i+1; k < n; k++)
			{
				if( book[i]+book[k] > mon)
				 break;
				 
				else if(book[i]+book[k] == mon)
				{
					pr.first=i;
					pr.second=k;
					vpi.push_back(pr);
				}

			}
		}

		min=book[vpi[0].second ] - book[ vpi[0].first ];
		b2=book[ vpi[0].second ];
		b1=book[ vpi[0].first ];
		for (int i = 1,len=vpi.size(); i <len ; i++)
		{
			def=book[vpi[i].second] - book[vpi[i].first];
			if(def<min)
			{
			  b2=book[ vpi[i].second ];
        	b1=book[ vpi[i].first ];
			}
		}

		printf("Peter should buy books whose prices are %d and %d.\n\n",b1,b2);

	}


	return 0;
}