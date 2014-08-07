#include<iostream>
#include<cstdio>
#include<string>
#include<cmath>
#include<cstdlib>
#include<algorithm>
#include<map>
#include<vector>
using namespace std;
#define REP(i,n) for(int i =0;i< n;i++)
#define sc(x) scanf("%d",&x);
#define SZ(s) s.size()
#define CLR(x,i) memset(x,i,sizeof(x));
typedef long long int  LL;
int n;
vector<vector<int> > arr;
int dp[(1<<15)+2][102][16];
vector<int> ned;
int main(){
  freopen("dalia.in","r",stdin);
	int t;sc(t);
	REP(ts,t){
			int l,r;sc(r);sc(l);
			float s= 2.0*(22.0/7.0)*r;

		 	printf("Case %d: %d\n",ts+1,int(l/s));
	}
}


