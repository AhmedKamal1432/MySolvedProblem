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
//    freopen("output.txt","w",stdout);

	int V,E;
	while (scanf("%d %d\n",&V,&E) != EOF &&  V != 0  &&  E != 0)
	{
		vector<pair<int,ii > > EdgeList;
		int a,b,weight;
		int allroads=0;


  for (int i = 0; i < E; i++) 
  {
	scanf("%d %d %d", &a, &b, &weight); // read the triple: (a, b, weight)
	EdgeList.push_back(make_pair(weight, ii(a, b)));
	EdgeList.push_back(make_pair(weight, ii(b,a)));
	allroads +=weight; 
  } // store: (weight, a, b)

	sort(EdgeList.begin(), EdgeList.end()); // sort by edge weight in O(E log E)
	
	int mst_cost = 0; initSet(V); // all V are disjoint sets initially
	for (int i = 0; i < 2*E; i++) { // for each edge, O(E)
	pair<int, ii> front = EdgeList[i];
	if (!isSameSet(front.second.first, front.second.second)) { // if no cycle
	mst_cost += front.first; // add the weight of e to MST
	unionSet(front.second.first, front.second.second); // link endpoints
	} } // note: the runtime cost of UFDS is very light
	
	printf("%d\n",allroads-mst_cost);
	}


return 0; 
}
