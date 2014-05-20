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
int gcd(int a, int b) { return (b == 0 ? a : gcd(b, a % b)); }
int count_dig(int n){
	int count =0;
	while(n){
		n= n>>1;
		count++;
	}
	return count;
}

int main()
{
 //   freopen("input.txt","r",stdin);
 //   freopen("output.txt","w",stdout);
string s; cin>>s;
int n=s.size();
bitset<11> bs((1<<n)-1);
//bs.set();
string ans = "";
int g=bs.to_ulong();
for(;g >0; g-- )
{
 string t;
 for(int i=0; i<n;i++){
	 if(g & (1<<i))
		 t.push_back(s[i]);
 }
 string rev =t;
reverse(ALL(rev));
 if(t==rev){
  if(( SZ(t) > SZ(ans) && (ans==t.substr(0,SZ(ans)))  )|| ans < t )
	  ans=t;

 }

}

cout<<ans;
return 0;
}

