#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<iostream>
#include<sstream>
#include<string>
#include<vector>
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
	int x;
	vector<int> arr;
	while(scanf("%d",&x) != EOF  )
	{
		arr.push_back(x);
		sort(arr.begin(),arr.end());
		int len=arr.size();
		if(len %2 == 1)
		{
		  printf("%d\n",arr[len/2]);
		}
		else
		{
		  int val= (arr[(len/2)-1] + arr[len/2]) / 2;
		  printf("%d\n",val);
		}
	
	}

return 0; 
}
