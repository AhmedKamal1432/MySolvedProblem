//#include<cstdio>
//#include<cstdlib>
//#include<cmath>
//#include<iostream>
//#include<sstream>
//#include<string>
//#include<vector>
//#include<map>
//#include<set>
//#include<bitset>
//#include<queue>
//#include<utility>
//#include<algorithm>
//#include<functional>
//
//
//using namespace std;
//
//#define vi vector<int> 
//#define ii pair<int,int> 
//#define vii vector< pair<int,int> > 
//
//int V;
//
//vi pset(1000), setSize(1000);
//int _numDisjointSets;
//void initSet(int N)
//{ setSize.assign(N, 1); _numDisjointSets = N;
//pset.assign(N, 0); for (int i = 0; i < N; i++) pset[i] = i;
//}
//int findSet(int i) { return (pset[i] == i) ? i : (pset[i] = findSet(pset[i])); }
//bool isSameSet(int i, int j) { return findSet(i) == findSet(j); }
//void unionSet(int i, int j) {
//  if (!isSameSet(i, j)) {
//    _numDisjointSets--;
//    setSize[findSet(j)] += setSize[findSet(i)];
//    pset[findSet(i)] = findSet(j); } }
//int numDisjointSets() { return _numDisjointSets; }
//int sizeOfSet(int i) { return setSize[findSet(i)]; }
//
//
//int main()
//{
//    freopen("input.txt","r",stdin);
// //   freopen("output.txt","w",stdout);
//	int tst=1;
//	while(scanf("%d",&V) != EOF && V!=0)
//	{
//		if(tst>1)
//			printf("\n");
//
//    	vii points;
//		vector<pair<int,float > > graph[1000];
//		int x,y;
//		float wght;
//		for (int i = 0; i < V; i++)
//		{
//			scanf("%d %d",&x,&y);
//			points.push_back(ii(x,y));
//
//			 for (int k = 0; k < i; k++)
//		   {
//			   wght=sqrt( abs(points[k].first - x) * abs(points[k].first - x) + abs(points[k].second - y)* abs(points[k].second - y)  );
//			   graph[k].push_back( pair<int,float>(i,wght));
//		   }
//		
//
//		}
//
//
//		map<int,int> tree;
//
//   int E=V*(V-1)/2;
//
// 	 vector< pair<float, ii> > EdgeList; // format: weight, two vertices of the edge
//	 for (int i = 0; i < V-1; i++)
//	 {
//		 for (int k = 0; k <V-1-i ; k++)
//		 {
//			 int v1,v2;
//			float w;
//			 v1=i;
//			 v2=graph[i][k].first;
//			 w=graph[i][k].second;
//			 EdgeList.push_back(make_pair(w, ii(v1, v2)));
//		 }
//	 }
//	
//
//	sort(EdgeList.begin(), EdgeList.end()); // sort by edge weight in O(E log E)
//	float mst_cost = 0;
//	initSet(V); // all V are disjoint sets initially
//	for (int i = 0; i < E; i++) { // for each edge, O(E)
//	pair<float, ii> front = EdgeList[i];
//	if (!isSameSet(front.second.first, front.second.second))
//	{ // if no cycle
//	mst_cost += front.first; // add the weight of e to MST
//	unionSet(front.second.first, front.second.second); // link endpoints
//	
//	} 
//	} // note: the runtime cost of UFDS is very light
//	
//
//
//	float minimax=0;
//	for (int i = 0; i < V; i++)
//	{
//		if(pset[i]==0 || pset[i] == 1)
//		{			
//		 while(pset[i+1] != 0 || pset[i+1] != 0)
//		 {
//			 int v1=pset[i];
//			 int v2=pset[i+1];
//			 minimax=max(graph[v1][v1-1].second,graph[v2][v2-1].second);
//		  i++;
//		 }
//		  minimax=max(graph[i-1][i-2].second,graph[i][i-1].second);
//		break;
//		}
//	}
//
//     			printf("Scenario #%d\n",tst);
//				printf("Frog Distance = %.3f",minimax);
//
//	tst++;
//	}
//	
//
//return 0; 
//}
