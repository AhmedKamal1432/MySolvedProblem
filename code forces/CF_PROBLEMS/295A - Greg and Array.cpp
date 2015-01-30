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
void print_v(vector<LL> arr){
int n = SZ(arr);
  REP(i,n)
    if(i == n-1)
       cout<<arr[i]<<endl;
     else
      cout<<arr[i]<<" ";
}

int gcd(int a, int b) { return (b == 0 ? a : gcd(b, a % b)); }


int main()
{
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
#endif
int n,m,k;
cin>>n>>m>>k;
vector<LL> arr(n,0);
vector<pair<ii,LL> > oper(m,make_pair(ii(0,0),0) );

REP(i,n)
  cin>>arr[i];
REP(i,m)
  cin>>oper[i].first.first>>oper[i].first.second>>oper[i].second;
vector<LL> opAcc(m+1,0);
int x,y;
REP(i,k){
  sc(x);sc(y);
  opAcc[x-1]++;
  opAcc[y]--;
}
LL acc = 0;

REP(i,m){
  acc+=opAcc[i];
  opAcc[i] = acc;
}

vector<LL> arAcc(n+1,0);
REP(i,m){
  LL v = opAcc[i]*oper[i].second;
  int l = oper[i].first.first;
  int r = oper[i].first.second;
  arAcc[l-1]+=v;
  arAcc[r] -=v;
} 

acc = 0;
REP(i,n){
  acc+=arAcc[i];
  arAcc[i] = acc;
}

REP(i,n){
arr[i]+=arAcc[i];
}
print_v(arr);
return 0; 
}
