#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<iostream>
#include<sstream>
#include<string>
#include<vector>
#include<map>
#include<bitset>
#include<queue>
#include<utility>
#include<algorithm>
#include<functional>
#include<set>

using namespace std;

#define vi vector<int> 
#define ii pair<int,int> 
#define vii vector< pair<int,int> > 

#define ff  pair<float,float> 

int V;

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
  //  freopen("input.txt","r",stdin);
 //   freopen("output.txt","w",stdout);

	int tst;
	scanf("%d",&tst);
	for (int ts = 0; ts < tst; ts++)
	{
		if(ts>0)
			printf("\n");

	   scanf("%d",&V);
	   float f1,f2,wght;

	   vector< ff > arr;
	   vector<pair<int,float> >graph[100];
	   for (int i = 0; i < V; i++)
	   {
		   scanf("%f %f",&f1,&f2);
		   arr.push_back(ff (f1,f2));
		   for (int k = 0; k < i; k++)
		   {
			   wght=sqrt( abs(arr[k].first-f1) * abs(arr[k].first-f1) + abs(arr[k].second - f2)* abs(arr[k].second - f2)  );
			   graph[k].push_back(pair<int,float> (i,wght));
		   }
	   }

	   //////////////////////////////////
	   /////      *************   ///////
	   /////  kruskal            ///////
	   /////////////////////////////////

	   int E=V*(V-1)/2;

 	 vector< pair<float, ii> > EdgeList; // format: weight, two vertices of the edge
	 for (int i = 0; i < V-1; i++)
	 {
		 for (int k = 0; k <V-1-i ; k++)
		 {
			 int v1,v2;
			float w;
			 v1=i;
			 v2=graph[i][k].first;
			 w=graph[i][k].second;
			 EdgeList.push_back(make_pair(w, ii(v1, v2)));
		 }
	 }
	 
	 //for (int i = 0; i < E; i++)
	//{
	//scanf("%d %d %d", &a, &b, &weight); // read the triple: (a, b, weight)
	//EdgeList.push_back(make_pair(weight, ii(a, b))); 
	//} // store: (weight, a, b)
	sort(EdgeList.begin(), EdgeList.end()); // sort by edge weight in O(E log E)
	float mst_cost = 0;
	initSet(V); // all V are disjoint sets initially
	for (int i = 0; i < E; i++) { // for each edge, O(E)
	pair<float, ii> front = EdgeList[i];
	if (!isSameSet(front.second.first, front.second.second))
	{ // if no cycle
	mst_cost += front.first; // add the weight of e to MST
	unionSet(front.second.first, front.second.second); // link endpoints
	} 
	} // note: the runtime cost of UFDS is very light
	// note: the number of disjoint sets must eventually be one for a valid MST
	printf("%.2f\n", mst_cost);

	}

return 0; 
}
