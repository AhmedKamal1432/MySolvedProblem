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
#define ii pair<int,int>
#define vii vector< pair<int,int> >
#define sc(x) scanf("%d",&x)
double const Epsilon = 2.22045e-016;

#define ALL(v)				((v).begin()), ((v).end())
#define SZ(v)				((int)((v).size()))
#define CLR(v, d)			memset(v, d, sizeof(v))
#define LOOP(i, n)		for(int i=0;i<(int)(n);++i)

#define PB	push_back
typedef vector<double>    VD;
typedef vector<string>    VS;

int main()
{
   // freopen("input.txt","r",stdin);
 //   freopen("output.txt","w",stdout);
string s,ans;
cin>>s;
int n=s.size();
int dp=-1;
LOOP(i,n)
  if(s[i]=='.'){
	  dp=i;
	  ans.append(".00");
	  if(i<n-1)
		  ans[1]=s[i+1];
	  if(i<n-2)
	  	  ans[2]=s[i+2];
  }
if(dp==-1){
	ans.append(".00");
dp=n;
}
int th=0;
for (int i = dp-1; i > 0; --i) {
	if(th==3){
		th=0;
		ans.insert(ans.begin(),',');
	}
	ans.insert(ans.begin(),s[i]);
	th++;
}

ans.insert(ans.begin(),'$');
if(s[0]=='-'){
	ans.insert(ans.begin(),'(');
	ans.push_back(')');
}
else{
	if(th==3)
		ans.insert(ans.begin()+1,',');
	ans.insert(ans.begin()+1,s[0]);
}

cout<<ans<<endl;

return 0;
}

