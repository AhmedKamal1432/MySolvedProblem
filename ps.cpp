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

#define ALL(v)        ((v).begin()), ((v).end())
#define SZ(v)       ((int)((v).size()))
#define CLR(v, d)     memset(v, d, sizeof(v))
#define REP(i, n)   for(int i=0;i<(int)(n);++i)
#define LOOP(i,b, n)    for(int i=(b);i<(int)(n);++i)

#define sc(x) scanf("%d",&x)
#define DSC(x) int x; scanf("%d",&x)
#define DSC2(x,y) int x,y; scanf("%d %d",&x,&y)

#define PB  push_back
#define MP  make_pair
double const EPS = 2.22045e-016;
#define INF (1<<29)


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

void create(){
}
int main()
{
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
#endif
DSC(n);
string s;
cin>>s;
vi ans(10,0);
REP(i,n){
  if(s[i] == '2'){
    ans[2]++;
  }
  if(s[i] == '3'){
    ans[3]++;
  }
  if(s[i] == '4'){
    ans[2]+=2;
    ans[3]++;
  }
  if(s[i] == '5'){
    ans[5]++;
  }
  if(s[i] == '6'){
    ans[5]++;
    ans[3]++;
  }
  if(s[i] == '7'){
    ans[7]++;
  }
  if(s[i] == '8'){
    ans[7]++;
    ans[2]+=3;
  }
  if(s[i] == '9'){
    ans[7]++;
    ans[3]+=2;
    ans[2]++;
  }

}
string b;
REP(i,10){
  REP(k,ans[i])
    b.PB(i+'0');
}
sort(ALL(b));
reverse(ALL(b));
cout<<b<<endl;

return 0; 
}
