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
typedef vector<LL>    VLL;
typedef vector<string>    VS;

int gcd(int a, int b) { return (b == 0 ? a : gcd(b, a % b)); }


void print_v(VLL arr){
int n = SZ(arr);
  REP(i,n)
    if(i == n-1)
      cout<<arr[i] <<endl;
     else
      cout<<arr[i]<<" ";
}

vector<LL> calc(int a, int b){
  vector<LL> arr(10,0);
  LOOP(i,a,b+1){
    stringstream ss; string s; 
    ss<<i; ss>>s;
    REP(k , SZ(s)){
      arr[s[k]-'0']++;
    }
  }
  return arr;
}
  
  vector<LL> base(10,0);
  
vector<LL> kammla(int a){
  // printf("kammola %d\n",a );
  int kima = 100000;
vector<LL> a_arr(10,0);
    int i;
    for( i =1;  a > i+kima; i+=kima){
    	// printf("at a = %d in with i = %d\n",a,i );
      stringstream ss; string s; 
      ss<<i; ss>>s;
      REP(k , SZ(s)-4){
      	// printf("%c\n",s[k] );
        a_arr[s[k]-'0']+=kima;
      }
      REP(i,10){
        // printf("add base\n");
        a_arr[i] += base[i];
      }
      if(i != 1)
      	a_arr[0]+=1110;
    }
    // printf("clc %d %d\n",i, a);
    vector<LL>tt = calc(i, a);
    // printf("clc tt = \n");
    // print_v(tt);
    REP(i,10){
      a_arr[i] +=tt[i];
    }
    // printf("clc a_arr = \n");
    // print_v(a_arr);
    
  return a_arr;  
}

int main()
{
  // #ifndef ONLINE_JUDGE
  //   freopen("input.txt", "r", stdin);
  //   //freopen("output.txt", "w", stdout);
  // #endif
  
  int a,b;
 while( cin>>a>>b && !(a == 0 || b ==0)){
	  base[0] = 2890;
	  LOOP(i,1,10){
	    base[i] = 4000;
	  }
	  // print_v(base);
	  // printf("kmmola\n");
	  vector<LL> a_arr(10,0);
	  if(a != 1)
	    a_arr = kammla(a-1);
	vector<LL>b_arr = kammla(b);
	  vector<LL> arr(10,0);
	  REP(i,10){
	    arr[i] = b_arr[i] - a_arr[i];
	  }
	  // print_v(a_arr);
	  // print_v(b_arr);
	  print_v(arr);
}
  return 0; 
}
