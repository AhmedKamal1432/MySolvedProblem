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
#include <limits.h>

using namespace std;

typedef long long int LL ;
#define vi vector<int> 
#define ii pair<int,int> 
#define iii pair<LL, ii> 
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
#define INF (1LL<<60)

#define x second.first
#define y second.second
#define weight first

void print_v(vi arr){
int n = SZ(arr);
  REP(i,n)
    if(i == n-1)
       cout<<arr[i] <<endl;
     else
      cout<<arr[i]<<" ";
}

int gcd(int a, int b) { return (b == 0 ? a : gcd(b, a % b)); }

char grid[1010][1010];
bool visited[1010][1010];
int alpha[30], dx[] = {1,-1,0,0}, dy[]={0,0,1,-1};
LL sol[1010][1010];

int main()
{
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
  #endif
    int T, k, h, w, value; 
    int sx, sy;
    priority_queue< iii, vector<iii>, greater<iii> > Q;
    sc(T);
    while(T-- > 0) {
    	memset(alpha, 0, sizeof alpha);
    	memset(visited, 0, sizeof visited);
    	memset(sol , 0, sizeof sol);
    	sc(k); sc(w); sc(h);
    	LOOP(i,0,k) {
    		char c;
    		cin >> c;
    		sc(value);
    		alpha[ c-'A' ] = value;
    	}
    	LOOP(i,0,h){
    		LOOP(j,0,w){
    			cin >> grid[i][j];
	    		if(grid[i][j] == 'E') {
	    			sx = i;
	    			sy = j;
	    		}
    		}
    	}
    	Q.push(iii( 0, ii(sx, sy) ));
    	while( !Q.empty() ) {
    		iii front = Q.top();
    		int _x = front.x, _y = front.y, _weight = front.weight;
    		Q.pop();

    		if(_x < 0 || _y < 0 || _x >= h || _y >= w || visited[ _x ][ _y ]  ) continue;

    		visited[ _x ][ _y ] = 1;
    		sol[ _x ][ _y ] = _weight;

    		LOOP(i,0,4) {
    			int c = grid[_x+dx[i]][_y + dy[i]] - 'A';
    			Q.push( iii( _weight + alpha[ c ] ,
    			ii( _x + dx[i], _y + dy[i] ) ) );
    		}
    	}
    	while(!Q.empty()) {
    		Q.pop();
    	}
    	LL ans = INF;
    	LOOP(i,0,h) {
    		ans = min( ans, sol[ i ][ 0 ] );
    		ans = min( ans, sol[ i ][ w-1 ] );
    	}
    	LOOP(i,0,w) {
    		ans = min( ans, sol[ 0 ][ i ] );
    		ans = min( ans, sol[ h-1 ][ i ] );
    	}
    	printf("%lld\n", ans);
    }
 	return 0; 
}
