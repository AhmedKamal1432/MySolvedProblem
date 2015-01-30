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
int hpy ,atky , defy , hpm , atkm , defm , h , a , d;
cin>> hpy>>atky>>defy>>hpm>>atkm>>defm>>h>>a>>d;
LL ans = (1LL<<61);
REP(i,250)
  REP(k,250){
      LL na = atky + i; 
      LL nd = defy + k;
      LL my_attack = max(0LL,na - defm);
      LL opp_attack = max(0LL,atkm - nd);
      if(my_attack > 0){
        int turns = (hpm + my_attack-1) / my_attack;
        int need = max(0LL,(turns*opp_attack) -hpy +1); 
          LL cost  = (LL)need*h + (LL)i * a + (LL)k*d;
          // if(i >= 99 && k  < 5  && m < 5)
          // printf("h+ = %d nh %d na %d nd %d cost %d\n",i ,(int)nh , (int)na , (int)nd,(int)cost );
          if(cost < ans){
            // printf("h = %d  a = %d d = %d\n",i,k,m );
            ans = cost;
        }
        // if(i == 100)
        //   return 0;
      }
    }
cout<< ans<<endl; 
return 0; 
}
