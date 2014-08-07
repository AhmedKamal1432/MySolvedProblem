#include<iostream>
#include<cstdio>
#include<string>
#include<cmath>
#include<cstdlib>
#include<algorithm>
#include<map>
using namespace std;
#define REP(i,n) for(int i =0;i< n;i++)
#define sc(x) scanf("%d",&x);
#define SZ(s) s.size()
typedef long long int  LL;
int main(){
  freopen("loubna.in","r",stdin);
	int t;sc(t);
	map <char,int> mp;
	REP(i,7)
	  REP(j,5){
       mp[i*5+j+'A']=i+j+2;
	}
	REP(ts,t){

		string s;
		cin>>s;
        LL ans =0;
		for (int i = 0; i < s.size(); i++)
		{
		ans += mp[s[i]];
        }
		printf("Case %d: %lld\n",ts+1,ans);
		 }

	}


