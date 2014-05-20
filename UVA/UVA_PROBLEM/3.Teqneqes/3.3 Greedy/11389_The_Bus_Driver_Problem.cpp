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

int main()
{
  //  freopen("input.txt","r",stdin);
 //   freopen("output.txt","w",stdout);

	int n,d,r;
	while(cin>>n>>d>>r && !(n==0 && r==0 && d==0))
	{
		vi mon,evn;
		mon.assign(n,0);
		evn.assign(n,0);
		for (int i = 0; i < n; ++i)
			sc(mon[i]);
		for (int i = 0; i < n; ++i)
				sc(evn[i]);

		sort(evn.begin(),evn.end());
		sort(mon.begin(),mon.end());
		int sum=0;
		for (int i = 0; i < n; ++i) {
			int def=mon[i]+evn[n-i-1] - d;
			if(def>0)
				sum+=def;
		}
		int tot=sum*r;
		printf("%d\n",tot);

	}

return 0;
}

