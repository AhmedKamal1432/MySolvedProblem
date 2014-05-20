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
int n,t;sc(n);sc(t);
vector<ii> arr[6];
int ty,p,q;
LOOP(i,n){
	scanf("%d %d %d",&ty,&p,&q);
	arr[ty-1].push_back(make_pair(q,p));
}
LOOP(i,6)
  sort(ALL(arr[i]),greater<ii>());

int ans =0;
for(int k = t;k>0;k--){ //assume quality is i
	vector<ii> temp[6];
	LOOP(i,6)
		LOOP(j,SZ(arr[i])){
		   	if(arr[i][j].first >= k )
		   		temp[i].push_back(arr[i][j]);
		   	else
		   		break;
		}
	vi tayeb;
	vi sums;
  LOOP(i,6){
	  int m =1<<28;
	  int qq;
    LOOP(j,SZ(temp[i])){
    	if(temp[i][j].second < m){
    		m=temp[i][j].second;
    		qq =temp[i][j].first;
    	}
    }
     if(m != (1<<28)){
    	 tayeb .push_back(qq);
       sums.push_back(m);
     }
  }
int sum =0;
LOOP(i,SZ(sums))
  sum+=sums[i];

if(SZ(tayeb) == 6 && sum <= t){
	ans = *min_element(ALL(tayeb));
   break;
   }
}
printf("%d\n",ans);
return 0;
}

