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
 //   freopen("input.txt","r",stdin);
 //   freopen("output.txt","w",stdout);

	int N;
	sc(N);
	vi fact;
	for (int i = 4; i <= N; i++)
	{
		if(N%i==0)
			fact.push_back(i);
	}

	bool is_lucky =false;
	for (int i = 0; i < fact.size(); i++)
	{
		stringstream ss;
		ss<<fact[i];
		string s;
		ss>>s;
		bool good=true;
		for (int k = 0; k < s.size(); k++)
		{
			if (!(s[k]=='7' || s[k]=='4'))
			{
				good=false;
				break;
			}
		}
		if(good)
			is_lucky=true;
	}

	if(is_lucky)
		printf("YES\n");
	else
		printf("NO\n");
return 0; 
}
