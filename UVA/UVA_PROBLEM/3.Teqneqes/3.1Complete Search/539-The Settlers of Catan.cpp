/*
*
* solved by Ahmed Kamal
*/
#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<iostream>
#include<sstream>
#include<cstring>
#include<vector>
#include<list>
#include<map>
#include<set>
#include<bitset>
#include<queue>
#include<utility>
#include<algorithm>
#include<functional>

using namespace std;

typedef long long int LL ;
#define vi vector<int>
#define ii pair<int,int>
#define vii vector< pair<int,int> >
#define sc(x) scanf("%d",&x)
double const EPS = 2.22045e-016;
#define INF (1<<29)

#define ALL(v)				((v).begin()), ((v).end())
#define SZ(v)				((int)((v).size()))
#define CLR(v, d)			memset(v, d, sizeof(v))
#define REP(i, n)		for(int i=0;i<(int)(n);++i)
#define LOOP(i,b, n)		for(int i=(b);i<(int)(n);++i)

#define PB	push_back
typedef vector<double>    VD;
typedef vector<string>    VS;
int gcd(int a, int b) { return (b == 0 ? a : gcd(b, a % b)); }
int n,m;
vector <vi> edList;
map<ii,bool> visited;
int back(int node){
int visit =0;
	REP(i,SZ(edList[node])){
		if(! visited[make_pair(node,edList[node][i])]){
			visited[make_pair(node,edList[node][i])] =true;
                        visited[make_pair(edList[node][i],node)] =true;

			visit = max(visit,back(edList[node][i])+1);
			visited[make_pair(node,edList[node][i])] =false;
			visited[make_pair(edList[node][i],node)] =false;
		}
	}
  return visit;
}

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
#endif

while(cin>>n>>m && !(n== 0 && m == 0) ){
	edList.assign(n,vi());
	int s,d;
	REP(i,m){
		sc(s);sc(d);
		visited[make_pair(s,d)]=false;
		visited[make_pair(d,s)]=false;
		edList[s].push_back(d);
		edList[d].push_back(s);
	}
   int ans =0;
   REP(i,n){
	   ans = max(ans,back(i));
   }
printf("%d\n",ans);
}
return 0;
}
