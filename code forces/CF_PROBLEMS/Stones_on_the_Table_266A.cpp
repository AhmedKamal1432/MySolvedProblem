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

	int N;
	sc(N);
 string s;
 cin>>s;
int num =0;
for(int i=1;i<s.size();i++)
{
	char temp =s[i];
	if( s[i-1]==s[i])
	{
		num++;
	}

}

printf("%d",num);
return 0;
}

