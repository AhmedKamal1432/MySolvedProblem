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

string s,t;
while(cin>>s>>t)
{
	llint len1=s.size();
	llint len2=t.size();
	
	llint i=0,j=0;
	while(i<len1 && j<len2)
	{
		for ( j; j < len2; j++)
		{
			if(s[i]==t[j])
		      break;
		}
		i++;  j++;
	}

	if(i==len1 && j != len2+1)
		printf("Yes\n");
	else
		printf("No\n");
}
return 0; 
}
