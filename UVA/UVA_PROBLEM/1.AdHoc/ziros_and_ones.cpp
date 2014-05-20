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

typedef long long int llint ;
#define vi vector<int>
#define ii pair<int,int>
#define vii vector< pair<int,int> >
#define sc(x) scanf("%d",&x)


int main()
{
  //  freopen("input.txt","r",stdin);
 //   freopen("output.txt","w",stdout);

	string s;
	int cas =1;
	while(cin>>s)
	{
		printf("Case %d:\n",cas);
		int n;
		sc(n);
		for (int var = 0; var < n; ++var) {
			int i,j;
			sc(i);sc(j);
			int mn =min(i,j);
			int mx =max(i,j);
			char chick =s[mx];
			bool g= true;
			for (int k = mn; k < mx; ++k) {
				if(s[k] != chick){
					g=false;
					break;
				}
			}
			if(g)
				printf("Yes\n");
			else
				printf("No\n");
		}
		cas++;
	}
}

