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
#define LOOPP(i,b,n)		for(int i=(b);i<(int)(n);++i)

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
string s;cin>>s;
int n =SZ(s);
int m =-1;
LOOPP(i,1,n-1){
	LOOPP(k,1,n-1){
       int t = n-(i+k);
       if(t<1)
    	   continue;
       string a,b,c;
       a=s.substr(0,i); if(a[0]=='0' && SZ(a)>1) continue;
       b=s.substr(i,k); if(b[0]=='0' && SZ(b)>1) continue;
       c= s.substr(k+i);  if(c[0]=='0' && SZ(c)>1) continue;

       if(SZ(a)>7 || SZ(b)>7 ||SZ(c)>7)
    	   continue;

       int ans=0,temp;
       stringstream ss;
       ss<<a; ss>>temp; if(temp > 1000000) continue; ans+=temp;ss.clear();
       ss<<b; ss>>temp; if(temp > 1000000) continue;ans+=temp;ss.clear();
       ss<<c; ss>>temp; if(temp > 1000000) continue; ans+=temp;ss.clear();

       m = max(m,ans);
	}
}
printf("%d\n",m);
return 0;
}

