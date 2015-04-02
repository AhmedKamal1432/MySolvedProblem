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
int n;sc(n);
vi count(10,0);
string s;cin>>s;
REP(i,n){
  int p = s[i]-'0';
  if(p == 2 || p == 3 || p == 5 || p == 7)
    count[p]++;
  if(p == 4){
    count[2]+=2;
    count[3]++;
  }
  if(p == 6){
    count[5]++;
    count[3]++;
  }
  if(p == 8){
    count[7]++;
    count[2]+=3;
  }
  if(p == 9){
    count[7]++;
    count[3]+=2;
    count[2]++;
  }
}

// //4
// count[2]+=count[4]*2;   
// count[4] = 0;
// //6
// count[3]+=count[6];     count[2]+=count[6];
// count[6]=0;
// //8
// count[2]+=3*count[8]; count[8] = 0;   
// count[8] = 0;
// //9
// count[3]+=2*count[9];
// count[9]=0;

for (int i = 7; i >=2; --i)
{
  REP(k,count[i])
    printf("%d",i);
}
printf("\n");
return 0; 
}
