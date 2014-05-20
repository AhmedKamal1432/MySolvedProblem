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

#define vi vector<int>
#define ii pair<int,int>
#define vii vector< pair<int,int> >

int main()
{
 //   freopen("input.txt","r",stdin);
 //   freopen("output.txt","w",stdout);
string s1,s2;
cin>>s1>>s2;

for (int i = 0; i < s1.size(); ++i)
	s1[i]=toupper(s1[i]);

for (int i = 0; i < s2.size(); ++i)
	s2[i]=toupper(s2[i]);
if(s1<s2)
	printf("-1\n");
else if(s1>s2)
	printf("1\n");
else
	printf("0\n");


return 0;
}
