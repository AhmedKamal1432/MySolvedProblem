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
  //  freopen("input.txt","r",stdin);
 //   freopen("output.txt","w",stdout);
int tst;
	scanf("%d",&tst);
for (int ca = 0; ca < tst; ca++)
{
	int arr[10];
	int N;
	scanf("%d",&N);

	stringstream ss;
	string s;
	memset(arr,0,sizeof(arr));
	for (int i = 1; i <= N; i++)
	{
		ss<<i;
		ss>>s;
		for (int k = 0; k < s.size(); k++)
		  arr[s[k]-'0']++;

		ss.clear();
	}

	for (int i = 0; i < 10; i++)
	{
		if(i==9)
			printf("%d\n",arr[9]);
		else
		printf("%d ",arr[i]);
	}

}

return 0; 
}
