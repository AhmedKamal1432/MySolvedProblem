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

#define DFS_WHITE -1 // normal DFS, do not change this with other values (other than 0), because we usually use memset with conjunction with DFS_WHITE
#define DFS_BLACK 1

vector<vii> AdjList;
VS grid;
vector<vi> visited;

int R,C;
int dr[] = {1,0,-1, 0};
int dc[]= {0,1, 0,-1}; // trick to explore an implicit 2D grid graph
int floodfill(int r, int c, char c1, char c2) {
	// printf("in: %d %d\n",r,c );
	if (r < 0 || r >= R || c < 0 || c >= C) return 1;
	if(visited[r][c])
		return 0;
	if (grid[r][c] != c1) return 1;
	int ans = 0;
	visited[r][c] = 1;
	for (int d = 0; d < 4; d++) // recurse to neighbors, see how neat the code is
			ans += floodfill(r + dr[d], c + dc[d], c1, c2); // with help of dr[] + dc[]
	// printf("out: %d %d: %d\n",r,c,ans );
	return ans;
}
int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		//freopen("output.txt", "w", stdout);
	#endif
	DSC(n); 
	C = R = n;
	grid.assign(R,"");
	REP(i,n){
		cin>> grid[i];
	}
	visited.assign(n,vi(n,0));
	cout<< ( floodfill(0,0,'.','k') - 4 + floodfill(R-1,C-1,'.','k')) * 9 <<endl;
	return 0; 
}
