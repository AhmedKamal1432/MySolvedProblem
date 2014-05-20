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
int n,k;sc(n);sc(k);
vi arr(n),indx(n-k+1);
vector<LL> sums(n-k+1);
LOOP(i,n)
 sc(arr[i]);

LL sm=0;
 for (int i = n-1; i > n-k-1; --i) {
	  sm+=arr[i];
}
 sums[n-k]=sm;
 indx[n-k]=n-k;

 for (int i = n-k-1; i >=0 ; --i) {
	sm=sm+(LL)arr[i]-(LL)arr[i+k];
	if(sm >= sums[i+1]){sums[i]=sm;indx[i]=i;}
	else{sums[i]=sums[i+1];indx[i]=indx[i+1]; }
}

 int a=0,b=indx[k];
 sm=0;
 LOOP(i,k)
  sm+=arr[i];
LL mx= (LL)sm+sums[k];
for (int i = 1; i < n-2*k+1; ++i) {
	sm=sm - arr[i-1]+arr[i+k-1];
	if((LL)sm+sums[i+k]>mx){
		a=i;
		b=indx[i+k];
		mx=(LL)sm+sums[i+k];
	}
}
printf("%d %d\n",a+1,b+1);

return 0;
}

