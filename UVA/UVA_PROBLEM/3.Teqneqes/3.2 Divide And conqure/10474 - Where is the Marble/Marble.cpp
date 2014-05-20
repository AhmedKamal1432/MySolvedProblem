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

	int num,qrs;
	vector<int> mrb;
	int n,q;
	vector<int>::iterator it;
	int pvt;
	int tst=1;
	while(scanf("%d %d",&num,&qrs)!=EOF && !(num==0 && qrs==0) )
	{
		mrb.clear();

		printf("CASE# %d:\n",tst);

		for (int i = 0; i < num; i++)
		{
			scanf("%d",&n);
			mrb.push_back(n);
		}
	
		sort(mrb.begin(),mrb.end());

		for (int i = 0; i < qrs; i++)
		{
			scanf("%d",&q);
			it=lower_bound(mrb.begin(),mrb.end(),q);
			if(it==mrb.end())
				printf("%d not found\n",q);
			else if(*it != q)
				printf("%d not found\n",q);
			else
			{
				pvt=(it-mrb.begin()) + 1;
			    printf("%d found at %d\n",q,pvt);
			}

		}
	
		tst++;
	}



	return 0;
}