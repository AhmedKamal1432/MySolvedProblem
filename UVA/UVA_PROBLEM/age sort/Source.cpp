#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	//freopen("input.txt","r",stdin);
	
	int n,temp;
	vector<int> list;
	scanf("%d",&n);

	while(n!=0)
	{
		list.clear();
		for (int i = 0; i <n; i++)
		{
           scanf("%d",&temp);
		   list.push_back(temp);
		}
	
		sort(list.begin(),list.end());
		
		for (int i = 0,s=list.size()-1; i < s; i++)
			printf("%d ",list[i]);
		
		printf("%d\n",list[list.size()-1]);
       
			scanf("%d",&n);
	}



return 0;
}