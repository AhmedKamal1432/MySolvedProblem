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
#define sc(x) scanf("%d",&x)
double const EPS = 2.22045e-016;
#define INF (1<<29)

#define ALL(v)        ((v).begin()), ((v).end())
#define SZ(v)       ((int)((v).size()))
#define CLR(v, d)     memset(v, d, sizeof(v))
#define REP(i, n)   for(int i=0;i<(int)(n);++i)
#define LOOP(i,b, n)    for(int i=(b);i<(int)(n);++i)

#define PB  push_back
typedef vector<double>    VD;
typedef vector<string>    VS;
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

int V ,E; sc(V);sc(E);
vector< pair <int ,ii> > EdgeList;
REP(i,E){
  int x ,y , w; sc(x); sc(y); sc(w);
  EdgeList.push_back( pair<int ,ii>(w ,ii(x,y)) ) ;
}
vii ans;
sort(EdgeList.begin(), EdgeList.end()); // sort by edge weight in O(E log E)
  int mst_cost = 0;
  initSet(V+1); // all V are disjoint sets initially
  for (int i = 0; i < E; i++) { // for each edge, O(E)
    pair<int, ii> front = EdgeList[i];
    if (!isSameSet(front.second.first, front.second.second)){ // if no cycle
      mst_cost = max(mst_cost , front.first); // add the weight of e to MST
      unionSet(front.second.first, front.second.second); // link endpoints
      ans.push_back(ii(front.second.first, front.second.second));
    } 
  }
  printf("%d\n",mst_cost );
  printf("%d\n",SZ(ans) );
  REP(i,SZ(ans))
    printf("%d %d\n",ans[i].first , ans[i].second );

return 0; 
}
