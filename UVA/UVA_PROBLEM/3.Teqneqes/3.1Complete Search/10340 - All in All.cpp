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
int n;
string s,b,temp;

bool back (int c){

	if(c == n && temp == s)
		return true;
	if(c == n && temp != s)
		return false;
	if(SZ(temp) >= SZ(s) && temp != s)
		return false;

	 bool g;
	if(b[c] == s[SZ(temp)]){
	 temp.push_back(b[c]);
	  g= back(c+1);
	  temp.resize(SZ(temp)-1);
	 }
	else
	 g= back(c+1);
	  return g;
}
int main()
{
 //   freopen("input.txt","r",stdin);
 //   freopen("output.txt","w",stdout);

while(cin>>s>>b){
	temp="";
	n= b.size();
	if(back(0))
		printf("Yes\n");
	else
		printf("No\n");

}
return 0;
}

