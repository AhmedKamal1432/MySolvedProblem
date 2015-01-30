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

#define ALL(v)        ((v).begin()), ((v).end())
#define SZ(v)       ((int)((v).size()))
#define CLR(v, d)     memset(v, d, sizeof(v))
#define REP(i, n)   for(int i=0;i<(int)(n);++i)
#define LOOP(i,b, n)    for(int i=(b);i<(int)(n);++i)

#define PB  push_back
typedef vector<double>    VD;
typedef vector<string>    VS;

int size(LL n)
{
    stringstream ss;
    string s;
    ss<<n;
    ss>>s;
    return (int)s.size();
}
LL power(int p){
  LL ans  = 1;
  while(p--)
    ans*=10;
  return ans;
}
int main()
{
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
#endif

    LL W,M,K,ans=0;
    cin>>W>>M>>K;
    
    //frist
    LL ned = power(size(M)) - M;
    LL can = W/ ( (LL) size(M) * K);
    if(ned>can)
    {
     cout<<can<<endl;
     return 0;
    }
    ans += ned;
      W -= ned*size(M)*K;
    for (int i = size(M)+1; i < 200; i++)
    {
     ned = 1*(power(i)+0.01) - 1*(power(i-1)+0.01);
     can = W / (i*K);
     
    if(ned>can)
    {
      ans+=can;
      break;
    }
    ans += ned;
    W -= ned*i*K;
    } 

    cout<<ans<<endl;
return 0; 
}