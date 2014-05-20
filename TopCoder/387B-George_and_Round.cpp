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
  //  freopen("input.txt","r",stdin);
 //   freopen("output.txt","w",stdout);
int n,m;sc(n);sc(m);
vi nrr(n),mrr(m);
LOOP(i,n)
  sc(nrr[i]);
LOOP(i,m)
  sc(mrr[i]);

sort(ALL(nrr)); sort(ALL(mrr));
reverse(ALL(nrr)); reverse(ALL(mrr));

int i=0;
int k=0;
int count = 0;
for (i = 0; i < m; ++i) {
 while(k<n && mrr[i]<nrr[k++]){
    count++;
 }

 if(k==n)
 break;
}

count += n-k;
printf("%d",count);
return 0;
}

