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
  //freopen("input.txt","r",stdin);
 //   freopen("output.txt","w",stdout);
int n,m;sc(n);
vi arr(n);
int hash [(int)100005];
CLR(hash,0);

LOOP(i,n)
  sc(arr[i]);
 sc(m);
vi key(m);
LOOP(i,m){
  sc(key[i]);
  hash[key[i]]++;
}
sort(ALL(key));

LL st=0,nd=0;
 LOOP(i,n){
 bool in= binary_search(ALL(key),arr[i]);
 if(in){
	st+=(hash[arr[i]]*(i+1));
	nd+=(hash[arr[i]]*(n-i));
  }
 }

 cout<<st<<" "<<nd<<'\n';
return 0;
}

