n/*
*
* solved by Ahmed Kamal
*/
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <iostream>
#include <sstream>
#include <cstring>
#include <vector>
#include <list>
#include <map>
#include <set>
#include <bitset>
#include <queue>
#include <stack>
#include <utility>
#include <algorithm>
#include <functional>

using namespace std;

typedef long long int LL ;
#define vi vector<int> 
#define ii pair<int,int> 
#define vii vector< pair<int,int> > 

#define ALL(v)				((v).begin()), ((v).end())
#define SZ(v)				((int)((v).size()))
#define CLR(v, d)			memset(v, d, sizeof(v))
#define REP(i, n)		for(int i=0;i<(int)(n);++i)
#define LOOP(i,b, n)		for(int i=(b);i<(int)(n);++i)

#define sc(x) scanf("%d",&x)
#define DSC(x) int x; scanf("%d",&x)
#define DSC2(x,y) int x,y; scanf("%d %d",&x,&y)

#define PB	push_back
#define MP  make_pair
double const EPS = 2.22045e-016;
#define INF (1<<29)


typedef vector<double>    VD;
typedef vector<string>    VS;
void print_v(vi arr){
int n = SZ(arr);
  REP(i,n)
    if(i == n-1)
       cout<<arr[i] <<endl;
     else
      cout<<arr[i]<<" ";
}

int gcd(int a, int b) { return (b == 0 ? a : gcd(b, a % b)); }

//Set the global vars using add edge and run max_flow
struct edge{
int to, flow, rev;
};
vector<vector<edge> > adj;
#define MAX_NODES 600
#define infinity 1e9
bool vis[MAX_NODES];
int source, sink, node_count , edge_count;

void add_edge(int from,int to, int flow)
{
	edge e1={to,flow,adj[to].size()};
	edge e2={from,0,adj[from].size()};
	adj[from].push_back(e1);
	adj[to].push_back(e2);
}

int find_path(int cur, int flow)
{
	if(cur == sink)
	return flow;
	if(vis[cur] || !flow)
	return 0;
	vis[cur] = true;
	for(int i=0 ; i < adj[cur].size(); i++)
	{
		edge &e = adj[cur][i];
		int fl = find_path(e.to,min(flow,e.flow));
		if(fl){
		edge &r = adj[e.to][e.rev];
		e.flow -= fl;
		r.flow += fl;
		return fl;
		}

	}

	return 0;
}

int max_flow()
{
	memset(vis,0,sizeof(vis));
	int res = 0, fl;
	while((fl=find_path(source,infinity)))
	{
	res += fl;
	memset(vis,0,sizeof(vis));
	}
	return res;
}

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		//freopen("output.txt", "w", stdout);
	#endif
		DSC( T);
		REP(i,T){
			DSC2(p,s);
			DSC2(c,m);
			source = p+s;
			sink = p+s+1;
			adj.assign(p+s+1+1,vector<edge>());
			REP(i,m){
				DSC2(cont,site);
				add_edge(site -1, cont+s-1, 1);
			}

			REP(i,s){
				add_edge(source, i, c);
			}
			REP(i,p){
				add_edge(s+i, sink, 1);	
			}
			// printf("calc flow\n");
			int ans = max_flow();
			printf("%d\n", ans);
		}
	return 0; 
}
