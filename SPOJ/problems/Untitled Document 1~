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

bool com (ii p1 , ii p2){
	return (p1.first < p2.first);
}

int r[1000005],l[1000005];
ii pr[1000005],pl[1000005];

int main()
{
  //  freopen("input.txt","r",stdin);
 //   freopen("output.txt","w",stdout);
int n;
cin>>n;

int arr[102];
LOOP(i,n)
 sc(arr[i]);

int kr=0;
LOOP(a,n)
  LOOP(b,n)
    LOOP(c,n)
      r[kr++] = LL(LL(arr[a] * arr[b]) + arr[c]);
int kl =0;
LOOP(d,n)
  LOOP(e,n)
    LOOP(f,n)
     if(arr[d] != 0)
    	 l[kl++] = LL(LL(arr[e]+arr[f]) * arr[d]);

sort(r,r+kr);
sort(l,l+kl);


int x=0;
pr[0].first =r[0]; pr[0].second = 1;
for(int i = 1; i< kr; i++){
	if(r[i] != pr[x].first){
		pr[++x].first =r[i];
		pr[x].second = 1;
	}
	else
		pr[x].second++;
}


int y=0;
pl[0].first =l[0]; pl[0].second = 1;
for(int i = 1; i< kl; i++){
	if(l[i] != pl[y].first){
		pl[++y].first =l[i];
		pl[y].second = 1;
	}
	else
		pl[y].second++;
}

LL ans =0;
ii* it;
LOOP(i,x+1){
	if(binary_search(pl,pl+y+1,pr[i],com)){
		it = lower_bound(pl,pl+y+1,pr[i],com);
		ans+= (LL)pr[i].second * (*it).second;
	}
}

printf("%lld\n",ans);
return 0;
}

