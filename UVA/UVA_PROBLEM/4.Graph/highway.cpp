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


vi pset(1000), setSize(1000);
int _numDisjointSets;
void initSet(int N)
{ setSize.assign(N, 1); _numDisjointSets = N;
pset.assign(N, 0); for (int i = 0; i < N; i++) pset[i] = i;
}
int findSet(int i) { return (pset[i] == i) ? i : (pset[i] = findSet(pset[i])); }
bool isSameSet(int i, int j) { return findSet(i) == findSet(j); }
void unionSet(int i, int j) {
  if (!isSameSet(i, j)) {
    _numDisjointSets--;
    setSize[findSet(j)] += setSize[findSet(i)];
    pset[findSet(i)] = findSet(j); } }
int numDisjointSets() { return _numDisjointSets; }
int sizeOfSet(int i) { return setSize[findSet(i)]; }




int main()
{
 //   freopen("input.txt","r",stdin);
 //   freopen("output.txt","w",stdout);

  int tst;
  scanf("%d",&tst);
for (int ts = 0; ts < tst; ts++)
{
	if(ts>0)
		printf("\n");

	vector<pair<float,ii> >ans;
	vector<ii> points;
	vector<pair<float,ii> >EdgeList;
	int N;
	scanf("%d",&N);
	int x1,y1;
	for(int i=0;i<N; i++)
	{
	  scanf("%d %d",&x1,&y1);
	  points.push_back(ii(x1,y1));

	  for (int k = 0; k < points.size(); k++)
	  {
		  if(i==k)
			  continue;

		  float wght=sqrt(pow(abs(x1-points[k].first),2) +pow(abs(y1-points[k].second),2));
		  EdgeList.push_back(pair<float,ii>(wght,ii(i,k)));
		  EdgeList.push_back(pair<float,ii>(wght,ii(k,i)));
	  }

	}

	int c1,c2;
	int M;
	scanf("%d",&M);
	for (int i = 0; i < M; i++)
	{
		scanf("%d %d",&c1,&c2);
		  EdgeList.push_back(pair<float,ii>(0,ii(c1-1,c2-1)));
		  EdgeList.push_back(pair<float,ii>(0,ii(c2-1,c1-1)));
	}



	sort(EdgeList.begin(), EdgeList.end()); // sort by edge weight in O(E log E)
	float mst_cost = 0;
	initSet(N); // all V are disjoint sets initially
	for (int i = 0; i < (int)EdgeList.size(); i++) { // for each edge, O(E)
	pair<float, ii> front = EdgeList[i];
	if (!isSameSet(front.second.first, front.second.second))
	{ // if no cycle
		ans.push_back(front);
	mst_cost += front.first; // add the weight of e to MST
	unionSet(front.second.first, front.second.second); // link endpoints
	} 
	} // note: the runtime cost of UFDS is very light
	// note: the number of disjoint sets must eventually be one for a valid MST

	bool zero=true;
	for (int i = 0; i < ans.size(); i++)
	{
		if(ans[i].first != 0)
		{
		 zero=false;
		 printf("%d %d\n",ans[i].second.first+1,ans[i].second.second+1);
		}
	}

	if(zero)
	printf("No new highways need\n");

}

return 0; 
}