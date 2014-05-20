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
 //    freopen("input.txt","r",stdin);
 //   freopen("output.txt"s,"w",stdout);
	int n,t;
	sc(n);sc(t);
	vi arr;
	arr.assign(n,0);
	LOOP(i,n)
	  sc(arr[i]);

	//calc max1;
	LL max=0;
	int count=0;
	LOOP(i,n){
		count++;
	 max+=arr[i];
	 if(max > t){
			count--;
		 max-=arr[i];
		 break;
	 }
	}
int maxcount=count;
	LL temp=max;
 for(int i=1;i<n;i++)
 {
   temp-=arr[i-1];
   int n_count=count-1;
   if(n_count<0)
	   n_count=0;

   if(temp<0)
	   temp=0;

   while(temp<=t && i+n_count <= n)
   {
	   n_count++;
	   temp+=arr[i+n_count-1];
   }
   n_count--;
   temp-=arr[i+n_count];
   if(n_count>maxcount)
	   maxcount=n_count;
   count=n_count;
 }

 printf("%d\n",maxcount);
return 0;
}

