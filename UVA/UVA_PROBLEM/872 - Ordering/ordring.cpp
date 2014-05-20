//#include<iostream>
//#include<cstdio>
//#include<vector>
//#include<algorithm>
//#include<cstring>
//#include<map>
//#include<sstream>
//#include<cmath>
//
//using namespace std;
//
//vector<int> topoSort; // global vector to store the toposort in reverse order
//
//int dfs_num[101];
// int const DFS_BLACK = 1;
// int const DFS_WHITE = -1;
//
// int loop[20];
//
// bool dfs2(vector<vector<pair<int,int> > > AdjList,int u)
//{ // change function name to differentiate with original dfs
//  			loop[u]++;
//	
//	dfs_num[u] = DFS_BLACK;
//	for (int j = 0; j < (int)AdjList[u].size(); j++)
//	{
//		pair<int,int> v = AdjList[u][j];
//
//			if(loop[v.first]>0)
//				return false;
//
//		if (dfs_num[v.first] == DFS_WHITE)
//	    {
//			if(!dfs2(AdjList,v.first))
//				return false;
//			
//		}
//
//		
//	}
//	
//		   	topoSort.push_back(u);
//			return true;
// }
//
//
//int main()
//{
//	freopen("input.txt","r",stdin);
//	freopen("output.txt","w",stdout);
//
//	vector<vector<pair<int,int> > > AdjList;
//	vector<pair<int,int> > vtmp;
//	pair<int,int> ptmp;
//
//	map<char,int> cti;
//	map<int,char> itc;
//	vector<char> arr;
//	int cas;
//	scanf("%d",&cas);
//	char c,c2;
//	string stmp;
//	vector<string> vs;
//	bool grt;
//
//	for (int tes = 0; tes < cas; tes++)
//	{
//		
//	  if(tes>0)
//		printf("\n");
//
//		grt=true;
//		vs.clear();
//		arr.clear();
//		AdjList.clear();
//		scanf("\n\n\n");
//
//		scanf("%c",&c);
//		int i=0;
//
//	
//		
//		while (c != '\n')
//		{
//			if(isalpha(c))
//			{
//				cti[c]=i;
//			    itc[i]=c;
//				arr.push_back(c);
//				i++;
//			}
//			scanf("%c",&c);
//		}
//
//
//		int n=arr.size();
//		
//		for (int k = 0; k < n; k++)
//		   AdjList.push_back(vtmp);
//		
//	
//
//
//		scanf("\n\n\n");
//		scanf("%c",&c);
//
//		while (c != '\n')
//		{
//			if(isalpha(c))
//			{
//			  	scanf("<%c",&c2);
//				ptmp.first=cti[c2];
//				ptmp.second=1;
//				AdjList[cti[c]].push_back(ptmp);
//			
//			}
//			scanf("%c",&c);
//		
//		}
//
//
//		for (int k = 0; k < n; k++)
//		{
//			stmp.clear();
//		
//				topoSort.clear();
//		memset(dfs_num, DFS_WHITE, 101);
//
//		for (int i = k; i < n; i++) // this part is the same as finding CCs
//		  {
//			  if (dfs_num[i] == DFS_WHITE)			
//			  {
//				  memset(loop,0,29);
//				  if(!dfs2(AdjList,i))
//					{
//					 grt =false;
//					 break;
//					}
//			  }
//		}
//
//		for (int i = k-1; i >= 0; i--) // this part is the same as finding CCs
//		{
//			if (dfs_num[i] == DFS_WHITE)
//			{
//						  memset(loop,0,29);
//		
//			if(!dfs2(AdjList,i))
//			{
//			 grt =false;
//			 break;
//			}
//			}
//		}
//
//		reverse(topoSort.begin(), topoSort.end()); // reverse topoSort
//		
//		if(topoSort.size()>0)
//			stmp.push_back(itc[topoSort[0]]);     
//
//		for (int i = 1; i < (int)topoSort.size(); i++) // or you can simply read
//		{
//			stmp.push_back(' ');
//			stmp.push_back(itc[topoSort[i]]);     
//		}
//		
//		vector<string>::iterator it =find(vs.begin(),vs.end(),stmp);
//		if(it == vs.end())
//			vs.push_back(stmp);
//
//		}
//
//		if(!grt)
//		{
//		printf("NO\n");
//		}
//		else
//		{
//		sort(vs.begin(),vs.end());
//
//		if(vs.size()==0)
//			printf("NO\n");
//		else
//         {
//		   for (int i = 0; i < vs.size(); i++)
//		   cout<<vs[i]<<endl;
//		 }
//		
//		}
//		 printf("\n");
//
//	}
//
//	return 0;
//}