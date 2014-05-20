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

int main()
{
 //   freopen("input.txt","r",stdin);
 //   freopen("output.txt","w",stdout);
int t;sc(t);
stringstream ass,bss;
string as,bs;
int a,b;
LOOP(ts,t){
	ass.clear();bss.clear();
sc(a);sc(b);
 ass<<a; bss<<b;
 ass>>as; bss>>bs;
 reverse(ALL(as));reverse(ALL(bs));
 ass.clear();bss.clear();
 ass<<as; bss<<bs;
 ass>>a; bss>>b;
 a=a+b;
 ass.clear();
 //cout<<"a= "<<a<<endl;
 ass<<a;
 ass>>as; 
 reverse(ALL(as));
 //cout<<"s= "<<as<<endl;
 ass.clear();
 ass<<as;
 ass>>a; 
 cout<<a<<endl;
}
return 0; 
}
