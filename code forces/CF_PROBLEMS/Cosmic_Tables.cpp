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

int row[1005],col[1005];
int main()
{
  //  freopen("input.txt","r",stdin);
 //   freopen("output.txt","w",stdout);
int n,m,k;sc(n);sc(m);sc(k);
vector<vi> arr;
arr.assign(n,vi(m));
LOOP(i,n)
 LOOP(j,m)
  sc(arr[i][j]);
LOOP(i,n)
 row[i]=i;
LOOP(i,m)
 col[i]=i;
char c;
int x,y;
LOOP(q,k)
{
  	scanf("\n\n\n");
  	scanf("%c %d %d\n",&c,&x,&y);
  	switch (c) {
		case 'g':
			cout<<arr[row[x-1]][col[y-1]]<<endl;
			break;
		case 'r': swap(row[x-1],row[y-1]);
		  break;
		case 'c': swap(col[x-1],col[y-1]);
		   break;
		default:
			break;
	}

}

return 0;
}

