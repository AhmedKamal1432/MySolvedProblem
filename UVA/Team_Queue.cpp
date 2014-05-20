/*
 * team_queue.cpp
 *
 *  Created on: Dec 26, 2013
 *      Author: root
 */

#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<iostream>
#include<sstream>
#include<cstring>
#include<vector>
#include<list>
#include<map>
#include<set>
#include<bitset>
#include<queue>
#include<utility>
#include<algorithm>
#include<functional>

using namespace std;

typedef long long int llint ;
#define vi vector<int>
#define ii pair<int,int>
#define vii vector< pair<int,int> >
#define sc(x) scanf("%d",&x)


int main()
{
  //  freopen("input.txt","r",stdin);
  //  freopen("output.txt","w",stdout);


	vector<vi> arr;
	vector<vi> tems;
	int n;
	int num;
	int cas =1;
	while(sc(n) != EOF && n!=0 )
	{
		printf("Scenario #%d\n",cas++);
		vector<vi> arr;
		vector<vi> tems;
		vi pl;
		map<int,int>mp;
		pl.assign(n,-1);
		tems.assign(n,vi());
		for (int i = 0; i < n; ++i) {
			sc(num);
			tems[i].assign(num,0);
			for (int k = 0; k < num; ++k){
				sc(tems[i][k]);
			    mp[tems[i][k] ] = i;
			}
		}

		string s;
		while(cin>>s && s!= "STOP")
		{
			if(s=="ENQUEUE"){
			   sc(num);
				if(pl[mp[num]]==-1){
					vi temp; temp.push_back(num);
					arr.push_back(temp);
					pl[mp[num]] = arr.size()-1;
				}
				else
					arr[ pl[mp[num]] ].push_back(num);
			}
			else if(arr.size()>0){
				printf("%d\n",arr[0][0]);
				arr[0].erase(arr[0].begin());
				if(arr[0].size() == 0)
					arr.erase(arr.begin());
			}
			else
				printf("\n");

		}
printf("\n");
}
	return 0;
}




