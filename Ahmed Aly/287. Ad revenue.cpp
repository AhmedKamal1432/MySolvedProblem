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


vector<vector<int> > SCCs /* The components itself*/;
#define comps SCCs

vector<int> compIndex /* for each node, what is the index of the
component this node inside*/
,ind, lowLink;
stack<int> st;
vector<bool> inst;
vector<vector<int> > adj /*The intial graph*/;
int idx = 0; //must be intialized by zero;


void tarjanSCC(int i) {
	lowLink[i] = ind[i] = idx++;
	st.push(i);
	inst[i] = true;
	for (int j = 0; j < adj[i].size(); j++) {
		int k = adj[i][j];
		if (ind[k] == -1) {
		tarjanSCC(k);
		lowLink[i] = min(lowLink[i], lowLink[k]);
		} else if (inst[k]) {
		lowLink[i] = min(lowLink[i], lowLink[k]);
		}
	}
	if (lowLink[i] == ind[i]) {
		vector<int> comp;
		int n = -1;
		while (n != i) {
			n = st.top();
			st.pop();
			comp.push_back(n);
			inst[n] = 0;
			compIndex[n] = comps.size();
		}
		comps.push_back(comp);
	}
}

void SCC() {
	comps.clear();
	compIndex.resize(adj.size());
	ind.clear();
	ind.resize(adj.size(), -1);
	lowLink.resize(adj.size());
	inst.resize(adj.size());
	idx = 0; //must be intialized by zero;
	for (int i = 0; i < adj.size(); i++)
		if (ind[i] == -1)
		tarjanSCC(i);
}

int cntSrc /*the number of source components*/,
cntSnk /*the number of sink copmonents*/;
vector<vector<int> > cmpAdj /*The new graph between components*/;
vector<int> inDeg, outDeg /*the in degree and out degree for each
component*/;
vi rv_com;

void computeNewGraph() {
	outDeg.clear();
	outDeg.resize(comps.size());
	inDeg.clear();
	inDeg.resize(comps.size());
	cntSrc = cntSnk = comps.size();
	cmpAdj.clear();
	cmpAdj.resize(comps.size());
	for (int i = 0; i < adj.size(); i++) {
		for (int j = 0; j < adj[i].size(); j++) {
			int k = adj[i][j];
			if (compIndex[k] != compIndex[i]) {
				cmpAdj[compIndex[i]].push_back(compIndex[k]);
				if (!(inDeg[compIndex[k]]++))
					cntSrc--;
				if (!(outDeg[compIndex[i]]++))
					cntSnk--;
				}
			}
	}
}

LL dp[100005];
LL back(int ind){
	if(dp[ind] != -1)
		return dp[ind];
	LL ans = rv_com[ind];
	LL next = 0;
	REP(i, SZ(cmpAdj[ind])){
		next = max(next, back(cmpAdj[ind][i]));
	}
	ans += next;
	return dp[ind] = ans;
}

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		//freopen("output.txt", "w", stdout);
	#endif
		DSC(T);
		REP(t,T){
			DSC(V);
			adj.assign(V, vi());
			vi rv(V,0);
			REP(i,V){
				sc(rv[i]);
				DSC(m);
				REP(k,m){
					DSC(x);
					adj[i].push_back(x);
				}
			}
			SCC();
			// REP(i,SZ(SCCs))
			// 	print_v(SCCs[i]);
			rv_com.assign(SZ(SCCs) , 0);
			REP(i,SZ(SCCs)){
				int sum = 0;
				REP(k, SZ(SCCs[i]))
					sum+=rv[ SCCs[i][k] ];
				rv_com[i] = sum;
			}

			computeNewGraph();
			// REP(i,SZ(SCCs)){
			// 	printf("scc %d:\n", i);
			// 	print_v(cmpAdj[i]);
			// }
			LL ans  = 0;
			CLR(dp,-1);
			REP(i,SZ(SCCs)){
				// visited_dp.assign(SZ(SCCs), 0);
				ans = max(ans, back(i));
			}
			// REP(i,V)
			// 	printf("%lld ",dp[i] );
			printf("Case %d: %lld\n",t+1,ans);
		}
	return 0; 
}
