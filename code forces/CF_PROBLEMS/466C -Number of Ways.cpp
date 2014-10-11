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
#define ii pair<int,int0> 
#define vii vector< pair<int,int> > 
#define sc(x) scanf("%d",&x)
double const EPS = 2.22045e-016;
#define INF (1<<29)

#define ALL(v)				((v).begin()), ((v).end())
#define SZ(v)				((int)((v).size()))
#define CLR(v, d)			memset(v, d, sizeof(v))
#define REP(i, n)		for(int i=0;i<(int)(n);++i)
#define LOOP(i,b, n)		for(int i=(b);i<(int)(n);++i)

#define PB	push_back
typedef vector<double>    VD;
typedef vector<string>    VS;
int gcd(int a, int b) { return (b == 0 ? a : gcd(b, a % b)); }


int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
#endif
	int n; sc(n);
  vector<LL> arr(n,0),suf(n,0), acc(n,0);
  LL s=0;
  REP(i,n){
   cin>>arr[i];
   s+=arr[i];
  }
  
if(s%3 !=  0){
	printf("0\n");
	return 0;
}
s/=3;
  acc[0]=arr[0];
  LOOP(i,1,n)
    acc[i] = acc[i-1]+arr[i];
  
  LL ss = arr[n-1];
  for (int i = n-2; i >=0; --i)
  {
  	//printf("i %d, ss=%d\n",i,ss);
  	if(ss == s)
  		suf[i]=1;
  	ss+=arr[i];
  }
  for (int i = n-2; i >=0; --i)
    suf[i] += suf[i+1];
 LL ans =0;
  REP(i,n-2){
  // printf("i= %d , acc = %d , suf =%d\n",i,acc[i],suf[i+1]);
   if(acc[i] == s)
     ans+=suf[i+1];
  }
 cout<<ans<<endl;
return 0; 
}


