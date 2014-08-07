#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<cstdlib>
#include<algorithm>
using namespace std;
#define REP(i,n) for(int i =0;i< n;i++)
#define sc(x) scanf("%d",&x);
#define SZ(s) s.size()
int main(){
  freopen("khaled.in","r",stdin);
	int t;sc(t);
	REP(ts,t){
       char s[] ="ACM-ACPC-2013";
       int mod = 13;
       int n,x,y;sc(x);sc(y);
       n = x+y;
       int p =n%mod;
		printf("Case %d: %c\n",ts+1,s[p]);
		 }

	}


