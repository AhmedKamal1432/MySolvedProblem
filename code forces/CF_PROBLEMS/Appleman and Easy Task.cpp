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
#define ii pair<int,int0> 
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

int main()
{
#ifndef ONLINE_JUDGE
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
#endif
        int n;sc(n);
        VS arr(n,"");
        REP(i,n)
           cin>>arr[i];
        bool g =true;
        int di[]={1,0,-1, 0};
        int dj[]={0,1, 0,-1}; 
        REP(i,n){
            REP(j,n){
                   int o=0;
                   REP(k,4){
                       if(i+di[k] >= n || i+di[k] < 0 || j+dj[k] >= n || j+dj[k] < 0)
                           continue;
                       if(arr[i+di[k]] [j+dj[k]] == 'o' )
                           o++;
                   }
                   
                   if(o&1)
                       g=false;
                
                
            
            }
        }
        if(g)
            printf("YES\n");
        else
            printf("NO\n");
        

return 0; 
}
