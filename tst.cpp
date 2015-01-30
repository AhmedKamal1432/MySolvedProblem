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
void print_v(vi arr){
int n = SZ(arr);
  REP(i,n)
    if(i == n-1)
       printf("%d\n",arr[i] );
     else
      printf("%d ", arr[i]);
}

int gcd(int a, int b) { return (b == 0 ? a : gcd(b, a % b)); }


int main()
{
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
#endif
string s; cin>>s;
int n = SZ(s);
int m_even = INF,m_index;
REP(i,n){
  if((s[i] -'0')% 2 == 0){
      m_even =  s[i] - '0';
      m_index = i;
    if( m_even < s[n-1]-'0'){
         // printf("%d\n",m_even );
        break;
    }
  }
}
if(m_even == INF){
  printf("-1\n");
  return 0;
}

if(m_even < s[n-1]-'0'){
  REP(i,n){
    if((s[i] - '0')   == m_even ){
      swap(s[i] , s[n-1]);
      cout<<s<<endl;
      return 0;
    }
  }
}
else{
  for(int i = n-1 ; i>= 0 ;i-- ){
     // printf("in  %d\n",m_even );
    if((s[i] - '0')  %2 == 0){
      swap(s[i] , s[n-1]);
      cout<<s<<endl;
      return 0;
    }    
  }
}

return 0; 
}
