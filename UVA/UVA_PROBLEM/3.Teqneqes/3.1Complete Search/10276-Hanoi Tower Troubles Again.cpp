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
	freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
#endif
        int t;sc(t);
        while(t--){
            int n;sc(n);
            vector<vi> arr(n,vi());
            int ans =1;
            bool g=true;
            while(g){
                g=false;
                REP(i,n){
                    if(SZ(arr[i]) == 0){
                        arr[i].PB(ans++);
                        g=true;
                        break;
                    }
                   int x= arr[i][SZ(arr[i])-1] + ans;
                   if(sqrt((float)x) - (int)sqrt((float)x) < EPS){
                       arr[i].PB(ans++);
                       g=true;
                       break;
                   }
                }
            }
            printf("%d\n",ans-1);
        }

return 0; 
}
