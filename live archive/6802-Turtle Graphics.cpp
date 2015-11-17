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

int visited[100][100];
ii forword(int d, ii loc){
	if(d == 0)
		loc.second++;
	else if(d == 1)
		loc.first++;
	else if(d == 2)
		loc.second--;
	else
		loc.first--;
	visited[loc.first][loc.second]++;
	return loc;
}

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		//freopen("output.txt", "w", stdout);
	#endif
		int T;
		sc(T);
		REP(t,T){
			CLR(visited, 0);
			DSC2(x,y);
			visited[x][y]++;
			ii loc(x,y);
			int d = 0;
			string s;
			cin>>s;
			REP(i ,SZ(s)){
				if(s[i] == 'F'){
					loc = forword(d,loc);
				}
				else if(s[i] == 'R'){
					d = (d+1)%4;
				}
				else{
					d = (d-1+4)%4;
				}
				// printf("%d %d %d\n", loc.first, loc.second, d);
			}
			int ans = 0;
			REP(i,100)
				REP(j,100)
					if(visited[i][j] > 1)
						ans++;
			printf("Case #%d: %d %d %d\n",t+1, loc.first, loc.second, ans );
		}
	return 0; 
}
