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


class MiniatureDachshund
{
public :
	int maxMikan(vi arr, int weight)
  {
	  int len =arr.size();
	  sort(arr.begin(),arr.end());
	  int n=0;
	  for (int i = 0; i < len; i++)
	  {
		  if(weight+arr[i] <= 5000)
		  {
		   n++;
		   weight +=arr[i];
		  }
		  else
			  break;
	  }
	  return n;
   }
};

int main()
{
 //   freopen("input.txt","r",stdin);
 //   freopen("output.txt","w",stdout);


return 0; 
}
