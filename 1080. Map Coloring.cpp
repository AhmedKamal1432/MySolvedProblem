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

typedef long long int LL;
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

typedef vector<double> VD;
typedef vector<string> VS;
void print_v(vi arr) {
	int n = SZ(arr);
	REP(i,n)
	if(i == n-1)
	cout<<arr[i] <<endl;
	else
	cout<<arr[i]<<" ";
}

int gcd(int a, int b) {
	return (b == 0 ? a : gcd(b, a % b));
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
#endif
	DSC(n);
	vector<vi> AdjList(n,vi());
	REP(i,n){
		int x;
		while(cin>>x && x != 0){
			AdjList[i].push_back(x-1);
			AdjList[x-1].push_back(i);
		}
	}
	int s = 0;
	// inside int main()
	queue<int> q;
	q.push(s);
	map<int, int> dist;
	dist[s] = 0;
	bool isBipartite = true;
	// addition of one boolean flag, initially true
	while (!q.empty()) {
		// similar to the original BFS routine
		int u = q.front();
		q.pop();
		for (int j = 0; j < (int) AdjList[u].size(); j++) {
			int v = AdjList[u][j];
			if (!dist.count(v)) {
				dist[v] = 1 - dist[u];
				// but now, instead of recording distance
				q.push(v);}
			// we just record two colors {0, 1}
			else if (dist[v] == dist[u])
			// if u-v is neighbor and both have
			isBipartite = false;
			// the same color, we have coloring conflict
		}}
	if(isBipartite){
		REP(i,n){
			printf("%d",dist[i]);
		}
		printf("\n");
	}
	else{
		printf("-1\n");
	}
	return 0;
}
