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

vi arr,temp;
vector<vi> ans,rep;
void back(int n, int t)
{
	if(n>=SZ(arr))
		return;
	int sum =0;
	 LOOP(i,SZ(temp))
	   sum+=temp[i];

	 temp.push_back(arr[n]);
	 if(sum + arr[n] == t){
		 vi sor (temp);
		 sort(ALL(sor));
		 if (find(ALL(rep),sor) == rep.end()){
		        ans.push_back(temp);
		        rep.push_back(sor);
		 }
	 }
	 back(n+1,t);
	 temp.pop_back();
	 back(n+1,t);
return ;
}

int main()
{
   // freopen("input.txt","r",stdin);
 //   freopen("output.txt","w",stdout);
int t,n;
while(scanf("%d %d",&t,&n) != EOF && !(n==0 && t==0))
{
	ans.clear();
	arr.assign(n,0);
	 LOOP(i,n)
	   sc(arr[i]);
 back(0,t);
sort(ALL(ans));
reverse(ALL(ans));
 printf("Sums of %d:\n",t);
if(SZ(ans) != 0)
 LOOP(i,SZ(ans)){
	LOOP(j,SZ(ans[i])){
		printf("%d",ans[i][j]);
		if(j< SZ(ans[i]) - 1)
			printf("+");

	}
	printf("\n");
 }
else
	printf("NONE\n");

}

return 0;
}

