/*
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
#define DD pair<double, double>
#define ID pair<int, double>
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
void print_v(VD arr){
int n = SZ(arr);
  REP(i,n)
    if(i == n-1)
       cout<<arr[i] <<endl;
     else
      cout<<arr[i]<<" ";
}

int gcd(int a, int b) { return (b == 0 ? a : gcd(b, a % b)); }

vector<DD > stations;
double dist(DD i, DD j){
	return sqrt( (i.first - j.first) * (i.first - j.first) + (i.second - j.second) * (i.second - j.second) );
}

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
//		freopen("output.txt", "w", stdout);
	#endif
		double foot,train;
		int n;
		cin>>foot>>train>>n;
//		printf("%f %f %d\n",foot,train,n);
		stations.assign(n,pair<double,double>(0.0,0.0));
		REP(i,n){
			cin>>stations[i].first>>stations[i].second;
		}
		vector<VD>AdjMat(n,VD(n,0));
		vector<vector< pair<int ,double> > >AdjList(n,vector<pair<int, double> >());
//		printf("graph start\n");

		int x,y;
		while(cin>>x>>y && !(x == 0 && y == 0)){
			x--;y--;
			AdjMat[x][y] = AdjMat[y][x] = dist(stations[x],stations[y]) / train;
		}

		DD src,distination;
		cin>>src.first>>src.second;
		cin>>distination.first>>distination.second;
		int V = n+2;

		AdjList.push_back(vector<ID>());
		AdjList.push_back(vector<ID>());

		REP(i,n){
			AdjList[i].push_back(ID(n, dist(src, stations[i])/ foot));
			AdjList[n].push_back(ID(i, dist(src, stations[i])/ foot));
			AdjList[i].push_back(ID(n+1, dist(distination, stations[i])/ foot));
			AdjList[n+1].push_back(ID(i, dist(distination, stations[i])/ foot));
		}
		AdjList[n].push_back(ID(n+1, dist(distination, src)/ foot));
		AdjList[n+1].push_back(ID(n, dist(distination, src)/ foot));

		REP(i,n)
			REP(j,n){
				if(i != j){
					if(AdjMat[i][j]){
						AdjList[i].push_back(MP(j, dist(stations[i],stations[j]) / train ) );
						AdjList[j].push_back(MP(i, dist(stations[j],stations[i]) / train ));
					}
					else{
						AdjList[i].push_back(MP(j, dist(stations[i],stations[j]) / foot ) );
						AdjList[j].push_back(MP(i, dist(stations[j],stations[i]) / foot ));
					}
				}
		}

//		printf("graph created\n");

		//		  printf("flyed end\n");
		  vi parent(V,-1);

			  int s = n;
			  // Dijkstra routine
			  VD distance(V, INF); distance[s] = 0;                    // INF = 1B to avoid overflow
			  priority_queue< pair<double, int>, vector<pair<double, int> >, greater< pair<double,int> > > pq; pq.push(MP(0, s));
										 // ^to sort the pairs by increasing distance from s
			  while (!pq.empty()) {                                    // main loop
				pair<double, int> front = pq.top(); pq.pop();     // greedy: pick shortest unvisited vertex
				double d = front.first;
				int u = front.second;
				if (d > distance[u]) continue;   // this check is important, see the explanation
				for (int j = 0; j < (int)AdjList[u].size(); j++) {
				  pair<int, double> v = AdjList[u][j];                       // all outgoing edges from u
				  if (distance[u] + v.second < distance[v.first]) {
					distance[v.first] = distance[u] + v.second;                 // relax operation
					pq.push(pair<double, int>(distance[v.first], v.first));
					parent[v.first] = u;
			  } } }  // note: this variant can cause duplicate items in the priority queue
//		  print_v(parent);
//		  print_v(distance);
			  printf("%f\n",distance[n+1]);

			  vi path;
			  int k = n+1;
			  while(parent[k] != -1 && parent[k] != n){
//				  printf("at k = %d parent = %d\n", k, parent[k]);
				  path.push_back(parent[k]);
				  k = parent[k];
			  }
//			  printf("from = %d , to = %d\n",n, n+1 );
//			  printf("src = %f %f \n",src.first, src.second);
//			  printf("dist = %f %f \n",distination.first, distination.second);
//			  printf("distance = %f \n",dist(src, distination));

			  printf("%d ",SZ(path));
			  REP(i,SZ(path))
				  path[i]++;
			  reverse(ALL(path));
			  print_v(path);

	return 0;
}
