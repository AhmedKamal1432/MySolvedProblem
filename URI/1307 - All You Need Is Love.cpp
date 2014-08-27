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

        int t;sc(t);
        LOOP(tt,t){
            string s1,s2;
            cin>>s1>>s2;
            int n=0,m=0;
            reverse(ALL(s1));reverse(ALL(s2));
            LOOP(i,SZ(s1)){
                n |=(s1[i]-'0' <<i);
            }
            LOOP(i,SZ(s2)){
                m |=(s2[i]-'0' <<i);
            }
            int g = gcd(n,m);
            printf("Pair #%d: ",tt+1);
            if(g == 1)
                printf("Love is not all you need!\n");
            else
                printf("All you need is love!\n");

        }
return 0; 
}
