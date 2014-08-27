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

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
#endif
        int n;
        while(sc(n)!= EOF && n !=0){
            int b =n/7;
            float m=b,ch=b,g=0;
            switch(n%7){
                case 1:m+=0.5;
                    break;
                case 2: m+=0.5; g=1.0;
                    break;
                case 3: ch+=0.5; g=0.5;
                    break;
                case 4: ch+=0.5; m+=0.5; g=0.5;
                    break;
                case 5:ch+=0.5; m+=1; g=0.5;
                    break;
                case 6:ch+=1; m+=0.5;
                    break;
            }
            printf("%.1f %.1f %.1f %.1f\n",g,m,m,ch);
        }

return 0; 
}
