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
 //   freopen("input.txt","r",stdin);
 //   freopen("output.txt","w",stdout);

unsigned int n,a,b;
while(sc(n)!=EOF && n!= 0)
{
 vi arr;
 for (int i = 0; i < 32; ++i) {
	if(n & 1<<i)
		arr.push_back(i);
}
 a=b=0;
 int len= arr.size();
 for (int i = 0; i < len; i+=2) {
	a|=(1<<arr[i]);
}

 for (int i = 1; i < len; i+=2) {
	b|=(1<<arr[i]);
}
cout<<a<<" "<<b<<endl;
}
return 0;
}

