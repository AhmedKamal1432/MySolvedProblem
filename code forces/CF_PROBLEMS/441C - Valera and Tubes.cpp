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

#define SC(x) scanf("%d",&x)
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
DSC2(n,m);DSC(k);
int i=1,j=1;
int t = k;
bool d = true;
while(t>1){
  printf("%d ", 2);
  printf("%d %d ",i,j );
  if(d)
    j++;
  else
    j--;
  if(j == m+1){
    j=m;
    i++;
    d= !d;
  }
  if( j == 0){
    j=1;
    i++;
    d= !d;    
  }
  printf("%d %d\n",i,j );

  if(d)
    j++;
  else
    j--;

  if(j == m+1){
    j=m;
    i++;
    d= !d;
  }
  if( j == 0){
    j=1;
    i++;
    d= !d;    
  }
  t--;
}

printf("%d", n*m - 2*(k-1));
while(i <= n){
  printf(" %d %d",i,j );

  if(d)
    j++;
  else
    j--;

  if(j == m+1){
    j=m;
    i++;
    d= !d;
    // printf("25er i = %d\n",i );
  }
  else if( j == 0){
    j=1;
    i++;
    d= !d;    
    // printf("2wel i = %d\n",i );

  }
    // printf(" i = %d  n = %d\n",i , n  );

}
printf("\n");
return 0; 
}
