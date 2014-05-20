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

int hash[3];
int main()
{
   // freopen("input.txt","r",stdin);
 //   freopen("output.txt","w",stdout);
int n; sc(n);
VS arr(n);
LOOP(i,n)
 cin>>arr[i];


LOOP(i,n){
	int sum=0;
	LOOP(k,SZ(arr[i]))
	  sum+= arr[i][k]-'0';
	sum%=3;
	hash[sum]++;
}

int count = 0;
count += (hash[0]/2) + min(hash[1],hash[2]);

printf("%d\n",count);
return 0;
}

