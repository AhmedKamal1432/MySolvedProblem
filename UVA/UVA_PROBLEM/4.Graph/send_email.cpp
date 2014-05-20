#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
#include<string>
#include<map>
#include<sstream>
#include<cmath>
#include<bitset>
#include<queue>
#include<utility>
#include<functional>
using namespace std;
#define vi vector<int>
#define ii pair<int,int>
#define INT_MAX 9999999
int V;


vector<int> dijkstra(vector<ii>* AdjList,int s)
{
	vector<int>dist(V,INT_MAX); dist[s] = 0; // INF = 1B to avoid overflow
   priority_queue< ii, vector<ii>, greater<ii> > pq;
   pq.push(ii(0, s));    
   
   // ^to sort the pairs by increasing distance from s
   while (!pq.empty())
   { // main loop
	   ii front = pq.top(); pq.pop(); // greedy: pick shortest unvisited vertex
      int d = front.first, u = front.second; 
       if (d == dist[u]) // this check is important, see the explanation
           for (int j = 0; j < (int)AdjList[u].size(); j++) 
		   {
               ii v = AdjList[u][j]; // all outgoing edges from u
            if (dist[u] + v.second < dist[v.first])
			{
             dist[v.first] = dist[u] + v.second; // relax operation
             pq.push(ii(dist[v.first], v.first));
           }
         }
   } // note: this variant can cause duplicate items in the priority queue
   return dist;
}


int main()
{
//	  freopen("input.txt","r",stdin);
 //   freopen("output.txt","w",stdout);

int tst;
int n,m,s,t;
int n1,n2,w;
scanf("%d\n",&tst);
for (int ts = 0; ts < tst; ts++)
{
		vector<ii>graph[20002];
	scanf("%d %d %d %d",&V,&m,&s,&t);
	
	for (int k = 0; k < m; k++)
	{
		scanf("%d %d %d",&n1,&n2,&w);
		graph[n1].push_back(pair<int,int>(n2,w));
	    graph[n2].push_back(pair<int,int>(n1,w));
	}

	vi arr;
	arr=dijkstra(graph,s);
	if(arr[t]<INT_MAX)
		printf("Case #%d: %d\n",ts+1,arr[t]);
	else
		printf("Case #%d: unreachable\n",ts+1);
}


return 0;

}