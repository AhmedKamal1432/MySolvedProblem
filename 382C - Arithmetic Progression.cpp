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


int main()
{
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
#endif
  DSC(n);
  vi arr(n,0);
  REP(i,n)
    sc(arr[i]);
  sort(ALL(arr));
  if(n == 1)
    printf("-1\n");
  else if(n == 2){
    int d = arr[1] - arr[0];
    if(d == 0)
      printf("1\n%d\n",arr[0]);
    else if(d%2 == 0){
      printf("3\n%d %d %d\n",arr[0] - d,arr[0] + d/2,arr[1]+d );
    }
    else
      printf("2\n%d %d\n",arr[0]-d,arr[1]+d);
  }
  else if(n == 3){
    int d1 = arr[1]- arr[0], d2 = arr[2]-arr[1];
    if(d1 == d2){
      if(d1 == 0)
        printf("1\n%d\n",arr[0]);
      else
        printf("2\n%d %d\n",arr[0]-d1 , arr[2]+d1);
    }
    else{
      if(d1 == 2*d2)
        printf("1\n%d\n",arr[0]+d2);
      else if(2*d1 == d2)
        printf("1\n%d\n",arr[1]+d1);
      else
        printf("0\n");
    }
  }
  else{
    int a=arr[1]-arr[0],b=arr[2]-arr[1] ,c=arr[3]-arr[2];
    bool take = false;
    int d = 0;
    int p = -1;
    if(a == b){
      d = a;
      if(b != c){
        take = true;
        p = 2;
      }
    }
    else if(a==c){
      d = a;
      take = true;
      p = 1;
    }
    else if(b == c){
      d = b;
      take = true;
      p = 0;
    }
    else{
      printf("0\n");
      return 0;
    }
    LOOP(i,3,n-1){
      if(arr[i+1] - arr[i] != d){
        if(take){
          printf("0\n");
          return 0;
        }
        take = true;
        p = i;
      }
    }
    if(!take){
      if(d == 0)
        printf("1\n%d\n",arr[0]);
      else
      printf("2\n%d %d\n",arr[0]-d,arr[n-1]+d );
    }
    else{
      if((arr[p+1]-arr[p]) == 2*d)
        printf("1\n%d\n",arr[p]+d);
      else
        printf("0\n");
    }
  }
return 0; 
}
