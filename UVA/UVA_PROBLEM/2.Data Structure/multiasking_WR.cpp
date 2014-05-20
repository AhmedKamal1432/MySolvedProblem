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
   // freopen("input.txt","r",stdin);
   // freopen("output.txt","w",stdout);
 bitset<(int)10E6> arr;
 int n,m;
 while(cin>>n>>m && !(n==0 && m==0))
 {
	 bool conf = false;
	 arr.reset();
	 int st,end;
	 for (int i = 0; i < n; ++i) {
		cin>>st>>end;
		for (int k = st; k < end+1; ++k) {
			if(arr[k]==true)
			{
				conf=true;
				break;
			}
			if(k!=st && k!=end)
			arr[k]=true;
		}
		if(conf)
			break;
	}
	 int interval;
    for (int k = 0; k < m; ++k) {
		cin>>st>>end>>interval;
		int def=end-st;
		for (int i = st; i < 10E9; i+=interval) {
			int mx=i+def+1;
			for (int mn = i; mn < mx; ++mn) {
				if(arr[mn]==true)
				{
					conf=true;
					break;
				}
				if(mn!=i && mn!=i+def)
				arr[mn]=true;
			}
			if(conf)
				break;
		}
		if(conf)
		   break;
	}

  if(conf)
	  printf("CONFLICT\n");
  else
	  printf("NO CONFLICT\n");
 }

return 0;
}

