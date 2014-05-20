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
  //  freopen("input.txt","r",stdin);
 //   freopen("output.txt","w",stdout);
string s;cin>>s;
int len = s.size();
int sum=0,last=0,d1,d2;
LOOP(i,len-3){
	if(s.substr(i,4) == "bear"){
		d1=i-last+1;
		d2=len-(i+4)+1;
		sum+=(d1*d2);
		last=i+1;
	}
}
printf("%d\n",sum);
return 0;
}
