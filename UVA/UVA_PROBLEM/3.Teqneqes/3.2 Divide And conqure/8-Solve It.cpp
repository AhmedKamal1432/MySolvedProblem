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
double const EPS = 2.22045e-012;
#define INF (1<<29)

#define ALL(v)              ((v).begin()), ((v).end())
#define SZ(v)               ((int)((v).size()))
#define CLR(v, d)           memset(v, d, sizeof(v))
#define REP(i, n)       for(int i=0;i<(int)(n);++i)
#define LOOP(i,b, n)        for(int i=(b);i<(int)(n);++i)

#define PB  push_back
typedef vector<double>    VD;
typedef vector<string>    VS;
int gcd(int a, int b) { return (b == 0 ? a : gcd(b, a % b)); }

float p, q, r, s, t,u;
double calc(double x){
    double ans = p*exp(-x) + q*sin(x) + r*cos(x) + s*tan(x) + t*x*x + u;
    return ans;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
#endif

        while(cin>>p>>q>>r>>s>>t>>u){
            double s = 0;
            double size = 0.5;
            double c;
            REP(i,100){
                 c =calc(s+size)*calc(s); 
                if(c > 0)
                    s+=size;
                size/=2;
            }
    
            if( calc(0) * calc(1) <= 0)
                printf("%.4f\n",s);
            else
                printf("No solution\n");
        }
return 0; 
}

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
double const EPS = 2.22045e-012;
#define INF (1<<29)

#define ALL(v)              ((v).begin()), ((v).end())
#define SZ(v)               ((int)((v).size()))
#define CLR(v, d)           memset(v, d, sizeof(v))
#define REP(i, n)       for(int i=0;i<(int)(n);++i)
#define LOOP(i,b, n)        for(int i=(b);i<(int)(n);++i)

#define PB  push_back
typedef vector<double>    VD;
typedef vector<string>    VS;
int gcd(int a, int b) { return (b == 0 ? a : gcd(b, a % b)); }

float p, q, r, s, t,u;
double calc(double x){
    double ans = p*exp(-x) + q*sin(x) + r*cos(x) + s*tan(x) + t*x*x + u;
    return ans;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
#endif

        while(cin>>p>>q>>r>>s>>t>>u){
            double s = 0;
            double size = 0.5;
            double c;
            REP(i,100){
                 c =calc(s+size)*calc(s); 
                if(c > 0)
                    s+=size;
                size/=2;
            }
    
            if( calc(0) * calc(1) <= 0)
                printf("%.4f\n",s);
            else
                printf("No solution\n");
        }
return 0; 
}

