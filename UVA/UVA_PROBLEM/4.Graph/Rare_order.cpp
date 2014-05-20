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

#define vi vector<int> 
#define ii pair<int,int> 
#define vii vector< pair<int,int> > 

int dfs_num[100];
const int DFS_BLACK=-1;
const int DFS_WHITE= 5;

vi topoSort;
void dfs2(vector<ii>AdjList[],int u)
{
	dfs_num[u]=DFS_BLACK;
	for (int j = 0; j < AdjList[u].size(); j++)
	{
		ii v =AdjList[u][j];
		if(dfs_num[v.first]==DFS_WHITE)
			dfs2(AdjList,v.first);
	}
	topoSort.push_back(u);
}

int main()
{
   // freopen("input.txt","r",stdin);
 //   freopen("output.txt","w",stdout);
	
	vector<ii> AdjList[100];
	
	string s_old,s_new;
	cin>>s_old;
	 map<char,int> mp;
	 map<int ,char> r_mp;
	 char c1,c2,c3;
	 int index=0;
	 for (int i = 0; i < s_old.size(); i++)
	 {
		 if(mp.find(s_old[i]) == mp.end())
		 {
			 r_mp[index] = s_old[i];
			 mp[s_old[i]]= index++;
		 }
	 }

	while(cin>>s_new && s_new!= "#")
	{
	 for (int i = 0; i < s_new.size(); i++)
		 if(mp.find(s_new[i]) == mp.end())
		 {
			 r_mp[index] = s_new[i];
			 mp[s_new[i]]= index++;
		 }

		int min_indx= min(s_old.size(),s_new.size());
		int D=0;
		while(D<min_indx && s_old[D] == s_new[D])
			D++;

		if(D < min_indx)
		AdjList[mp[s_old[D]]].push_back(ii(mp[s_new[D]],1) );
		
		s_old=s_new;
	}


	topoSort.clear();

	for (int k = 0; k < 50; k++)
	{
		dfs_num[k]=DFS_WHITE;
	}
	
	for(int i=0;i<index;i++)
		if(dfs_num[i]==DFS_WHITE)
			dfs2(AdjList,i);
	reverse(topoSort.begin(),topoSort.end());

	for (int i = 0; i < topoSort.size(); i++)
		printf("%c",r_mp[topoSort[i]]);
	
	printf("\n");

return 0; 
}