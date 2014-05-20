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
  // freopen("input.txt","r",stdin);
 //   freopen("output.txt","w",stdout);
string s;cin>>s;
int n = SZ(s);
int max = 0;
LOOP(i,n){
	int c = 0,b=i;
 for(int k = i+1;k<n;k++){

	if(s[i] == s[k] &&  (abs(k-b)-1)%2 == 0 ){
		c++;
		b=k;
	}
   }
 if(c> max){
	 //printf(" k= %d\n",i);
	  max =c;
 }
}
printf("%d\n",max+1);
return 0;
}

