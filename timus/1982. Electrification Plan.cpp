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

int gr[200][200];

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
	DSC2(n,k);
	int x;
	vi po(n,0);
	REP(i,k){
		sc(x);
		po[x-1] = 1;
	}

	std::vector<pair<int, ii > > EdgeList;
	REP(i,n)
		REP(j,n){
			sc(gr[i][j]);
			if(i != j ){
				if(po[i] && po[j])
					EdgeList.push_back(MP(0, ii(i,j)) );
				else
					EdgeList.push_back(MP(gr[i][j], ii(i,j)) );
			}
		}

	  // for (int k = 0; k < n; k++) // common error: remember that loop order is k->i->j
	  //   for (int i = 0; i < n; i++)
	  //     for (int j = 0; j < n; j++)
	  //       gr[i][j] = min(gr[i][j], gr[i][k] + gr[k][j]);
	  sort(EdgeList.begin(), EdgeList.end()); // sort by edge weight O(E log E)

	  int mst_cost = 0;
	  initSet(n);                     // all V are disjoint sets initially
	  for (int i = 0; i < EdgeList.size(); i++) {                      // for each edge, O(E)
	    pair<int, ii> front = EdgeList[i];
	    if (!isSameSet(front.second.first, front.second.second)) {  // check
	      // printf("%d %d weight %d\n" ,front.second.first, front.second.second, front.first);
	      mst_cost += front.first;                // add the weight of e to MST
	      unionSet(front.second.first, front.second.second);    // link them
	  } }                       // note: the runtime cost of UFDS is very light

	x = 0;
	int ans =0;
	// REP(i,n){
	// 	REP(j,n)
	// 		printf("%d ",gr[i][j] );
	// 	printf("\n");
	// }
	// REP(i,n){
	// 	x = 0;
	// 	REP(j,n){
	// 		if(!po[i]){
	// 			x = INF;
	// 			REP(t,n){
	// 				if(t == i)
	// 					continue;
	// 				if(po[t])
	// 					x = min(x,gr[i][t]);
	// 				// printf("at i = %d j = %d x = %d\n",i,t,x );
	// 			}
	// 		}
	// 	}
	// 	ans+= x;
	// }
	printf("%d\n",mst_cost );
	return 0; 
}
