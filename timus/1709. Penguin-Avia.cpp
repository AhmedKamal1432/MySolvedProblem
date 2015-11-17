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
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		//freopen("output.txt", "w", stdout);
	#endif
		DSC(n);
		LL b,a;
		cin>>b>>a;
		char ans[102][102];
		VS src(n,"");
		vector<pair<int, ii > > edges;
		REP(i,n)
			cin>>src[i];
		REP(i,n)
			REP(j,n){
				ans[i][j] = '0';
				int x = src[i][j] - '0';
				if(i == j)
					continue;
				if(x == 0)
					edges.push_back( MP(a, ii(i,j) ) );
				else
					edges.push_back(MP(-b, ii(i,j) ) );
				// printf("at %d %d x is %d\n", i,j,x);
			}

		  sort(edges.begin(), edges.end()); // sort by edge weight O(E log E)
		                      // note: pair object has built-in comparison function
		  // REP(i,n)
		  // 	printf("%d %d %d\n", edges[i].first, edges[i].second.first, edges[i].second.second); 
		LL mst_cost = 0;
		initSet(n);                     // all V are disjoint sets initially
		for (int i = 0; i < SZ(edges); i++) {                      // for each edge, O(E)
		  pair<int, ii> front = edges[i];
		  if (!isSameSet(front.second.first, front.second.second)) {  // check
		    // printf("%d %d += %d\n", front.second.first, front.second.second, front.first);
		    mst_cost += max(0,front.first);                // add the weight of e to MST
		    unionSet(front.second.first, front.second.second);    // link them
		    if(front.first == a){
		    	ans[front.second.first][front.second.second] = 'a';
		    	ans[front.second.second][front.second.first] = 'a';
		    }
		    else{
		    	ans[front.second.first][front.second.second] = '1';
		    	ans[front.second.second][front.second.first] = '1';
		    }
		  }
		}                       // note: the runtime cost of UFDS is very light

		REP(i,n)
			REP(j,i)
		   		if(src[i][j] == '1' ){
		   			if( ans[i][j] == '1'){
			   			ans[i][j] = '0';
			   			ans[j][i] = '0';
		   			}
			   		else {
			   			// printf("%d %d \n", i,j);
			   			ans[i][j] = 'd';
			   			mst_cost+= b;
			   			ans[j][i] = 'd';
			   		}
			   	}
	   	REP(i,n){
	   		ans[i][n]=0;
	   	}
	   	printf("%lld\n",mst_cost);
		REP(i,n)
			printf("%s\n",ans[i] );

	return 0; 
}
