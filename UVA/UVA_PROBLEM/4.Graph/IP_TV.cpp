#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<iostream>
#include<sstream>
#include<string>
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

vi pset; // remember: vi is vector<int>
void initSet(int N) { pset.assign(N, 0);
for (int i = 0; i < N; i++) pset[i] = i; }
int findSet(int i) { return (pset[i] == i) ? i : (pset[i] = findSet(pset[i])); }
bool isSameSet(int i, int j) { return findSet(i) == findSet(j); }
void unionSet(int i, int j) { pset[findSet(i)] = findSet(j); }


int main()
{
//    freopen("input.txt","r",stdin);
 //   freopen("output.txt","w",stdout);

	int tst;
	scanf("%d",&tst);
	for (int ts = 0; ts < tst; ts++)
	{
		if(ts>0)
			printf("\n");

		int V,E;
		scanf("%d\n%d",&V,&E);
		map<string,int> mp;
		int index=0;
		string cit1,cit2;
		int wght;
		int i1,i2;
		map<string,int>::iterator it1,it2;
		vector<pair<int,ii > >EdgeList;
		
		for (int ed = 0; ed < E; ed++)
		{
			cin>>cit1>>cit2;
			scanf("%d\n",&wght);
		
			/////////////
			// handel map//
			it1=mp.find(cit1);
			it2=mp.find(cit2);

			if(it1 == mp.end())
			{
			 mp[cit1]=index++;
			 i1=index-1;
			}
			else
				i1=it1->second;

			
			if(it2 == mp.end())
			{
			 mp[cit2]=index++;
			 i2=index-1;
			}
			else
				i2=it2->second;
			
			/// end handala
			//////////
			
			EdgeList.push_back(make_pair(wght, ii(i1, i2)));
			EdgeList.push_back(make_pair(wght, ii(i2, i1)));

		}

		sort(EdgeList.begin(), EdgeList.end()); // sort by edge weight in O(E log E)
		int mst_cost = 0; initSet(V); // all V are disjoint sets initially
		for (int i = 0; i < 2*E; i++) { // for each edge, O(E)
		pair<int, ii> front = EdgeList[i];
		if (!isSameSet(front.second.first, front.second.second)) { // if no cycle
		mst_cost += front.first; // add the weight of e to MST
		unionSet(front.second.first, front.second.second); // link endpoints
		} } // note: the runtime cost of UFDS is very light
	 
		printf("%d\n",mst_cost);
	
	}



return 0; 
}
