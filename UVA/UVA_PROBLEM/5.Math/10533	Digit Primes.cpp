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

#define ALL(v)        ((v).begin()), ((v).end())
#define SZ(v)       ((int)((v).size()))
#define CLR(v, d)     memset(v, d, sizeof(v))

#define REP(i, n)   for(int i=0;i<(int)(n);++i)
#define LOOP(i,b,n)   for(int i=(b);i<(int)(n);++i)

#define PB  push_back
typedef vector<double>    VD;
typedef vector<string>    VS;
int gcd(int a, int b) { return (b == 0 ? a : gcd(b, a % b)); }

int main()
{
  #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin);
      //freopen("output.txt", "w", stdout);
  #endif
  int t;sc(t); scanf("\n");
  REP(ts,t){
    string s;
    getline(cin,s);
    // printf("%s\n",s.c_str() );
    vi arr;
    string sn ="";
    REP(i,SZ(s)){
      sn ="";
      while( i < SZ(s) && s[i] != ' '&& s[i] != '\n')
        sn.push_back(s[i++]);
      if(SZ(sn) > 0){
        stringstream ss; ss<<sn; 
        int temp; ss>>temp;
        arr.push_back(temp);
      }
    }
    int n = SZ(arr);
    int ans = 0;
    // printf("%d\n",n );
    REP(i,n){
      LOOP(k ,i+1,n){
        // printf("arr[i] = %d , arr[k] =%d\n",arr[i],arr[k]);
       ans = max(ans, gcd(arr[i],arr[k]));
      }
    }
    printf("%d\n",ans ); 
  }

return 0; 
}
