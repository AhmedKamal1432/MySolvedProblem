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
  //  freopen("input.txt","r",stdin);
 //   freopen("output.txt","w",stdout);
int n,k,w;sc(n);sc(k);sc(w);
string s;cin>>s;
vi arr(n+2,0);
for(int i = n-1 ; i> n-k;i--)
	if(s[i]== '0')
		 arr[i]=1;


for(int i = n-k ; i>=0;i--){
//	if(s[i]== '0')
//		arr[i]++;

	arr[i]+=arr[i+k];
		if(s[i+k-1]== '0')
			arr[i]++;


	for(int j = i ; j < i+k-1 ; j++)
		if(s[j]=='1')
			arr[i]++;

}
int l,r;
LOOP(i,w){
	sc(l);sc(r);
	 int ans;
	if(r == n)
		ans =arr[l-1];
	else
      ans = arr[l-1]-arr[r];
 printf("%d\n",ans);
}

return 0;
}

