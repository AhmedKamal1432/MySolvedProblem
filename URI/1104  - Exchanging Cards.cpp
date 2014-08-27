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
#define LOOP(i, n)		for(int i=0;i<(int)(n);++i)
#define LOOPP(i,b, n)		for(int i=(b);i<(int)(n);++i)

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
        int a,b;
        while(cin>>a>>b && !(a==0,b==0)){
            int ha[100005];
            int hb[100005];
            CLR(ha,0);CLR(hb,0);
            vi ara(a,0),arb(b,0);
            LOOP(i,a){
                sc(ara[i]);
                ha[ara[i]]++;
            }
            LOOP(i,b){
                sc(arb[i]);
                hb[arb[i]]++;
            }
            
            int ma=0,mb=0;
            LOOP(i,a){
                if(i == 0){
                if(hb[ara[i]] == 0)
                    ma++;
                }
                else{
                if(hb[ara[i]] == 0 && ara[i] != ara[i-1])
                    ma++;
                }
            }
            LOOP(i,b){
                if(i!= 0){
                if(ha[arb[i]] == 0 && arb[i] != arb[i-1] )
                    mb++;
                }
                else{
                if(ha[arb[i]] == 0 )
                    mb++;
                }
                
            }
            int ans = min(ma,mb);
            printf("%d\n",ans);
        }        

return 0; 
}
