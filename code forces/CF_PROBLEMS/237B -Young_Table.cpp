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

int n,m,r,c;
vi rows;

void get_ind(int n)
{
 r=0;c=0;
 while(n>=rows[r]){
  n-=rows[r];
  r++;
 }
 c=n;
}

int main()
{
 //   freopen("input.txt","r",stdin);
 //   freopen("output.txt","w",stdout);

	sc(n);
	rows.assign(n,0);
	int len = 0;
	LOOP(i,n){
	  sc(rows[i]);
	  len+=rows[i];
	}

	vi asly(len),srt(len);
	LOOP(i,len){
		sc(asly[i]);
		srt[i]=asly[i];
	}
	sort(ALL(srt));

	vector<vi> ans;
	int sum=0;
	vi arr(4);
	vi::iterator it;
	LOOP(i,len){
		it=find(ALL(asly),srt[i]);
	   int x=it-asly.begin();
	   if(x!=i)
	   {
		   sum++;
		   get_ind(i);
		  // printf("%d %d",r+1,c+1);
		   arr[0]=r+1;arr[1]=c+1;
		   get_ind(x);
		   //printf(" %d %d\n",r+1,c+1);
		   arr[2]=r+1;arr[3]=c+1;
		   ans.push_back(arr);
		   swap(asly[i],asly[x]);
	   }
	}

	printf("%d\n",sum);
	LOOP(i,sum)
	  printf("%d %d %d %d\n",ans[i][0],ans[i][1],ans[i][2],ans[i][3]);

return 0;
}

