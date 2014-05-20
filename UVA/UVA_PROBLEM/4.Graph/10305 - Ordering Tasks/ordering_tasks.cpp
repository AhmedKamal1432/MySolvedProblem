#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<iostream>
#include<sstream>
#include<cstring>
#include<vector>
#include<map>
#include<set>
#include<bitset>
#include<queue>
#include<utility>
#include<algorithm>
#include<functional>

using namespace std;

vector<int> topoSort; // global vector to store the toposort in reverse order

int dfs_num[101];
 int const DFS_BLACK = 1;
 int const DFS_WHITE = -1;


void dfs2(vector<pair<int,int>  > AdjList[],int u)
{ // change function name to differentiate with original dfs
	dfs_num[u] = DFS_BLACK;
	for (int j = 0; j < (int)AdjList[u].size(); j++)
	{
		pair<int,int> v = AdjList[u][j];
		if (dfs_num[v.first] == DFS_WHITE)
	    {
			dfs2(AdjList,v.first);
		}
	}

		   	topoSort.push_back(u);
}


int main()
{
//	freopen("input.txt","r",stdin);
//	freopen("output.txt","w",stdout);

	int n,m;

	while( scanf("%d %d",&n,&m) !=EOF &&  !( n== 0 &&  m == 0) )
	{


		memset(dfs_num, DFS_WHITE, sizeof(dfs_num));
        topoSort.clear();

		vector<pair<int,int> > AdjList[100];
		vector<pair<int,int> > vtmp;
		int v1,v2;
		 pair<int,int> ptmp;
		 string stmp;
		 vector<string> vs;

		for (int t = 0; t < m; t++)
		{
			scanf("%d %d",&v1,&v2);
			ptmp.first=v2-1;
			ptmp.second=1;
			AdjList[v1-1].push_back(ptmp);
		}

		for (int i = 0; i < n; i++) // this part is the same as finding CCs
		if (dfs_num[i] == DFS_WHITE)
			dfs2(AdjList,i);


		reverse(topoSort.begin(), topoSort.end()); // reverse topoSort

		if(topoSort.size()>0)
			printf("%d", topoSort[0]+1);

		for (int i = 1; i < (int)topoSort.size(); i++) // or you can simply read
				printf(" %d", topoSort[i]+1); // the content of topoSort backwards

		printf("\n");

	}


return 0;
}
