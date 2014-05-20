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

	int n,x;
	sc(n);sc(x);
	string s;
	cin>>s;
	for (int k = 0; k < x; k++)	
	 for (int i = 0; i < n-1; i++)
	 {
		if(s[i]=='B' && s[i+1]=='G')
		{
			swap(s[i],s[i+1]);
			i++;
		}
	 }

	printf("%s\n",s.c_str());
return 0; 
}
