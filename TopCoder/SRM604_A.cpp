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
class FoxAndWord
{
public:
	int howManyPairs(vector <string> arr)
	{
		int count=0;
		int len =arr.size();
		for (int i = 0; i < len; ++i) {
			for (int j = i+1; j < len; ++j) {
				int len1 =arr[i].size();
				int len2 =arr[j].size();
				if(len1!= len2 || len1 ==0)
					continue;
				int a1=0;
				int a2=1;
					while(a2<len2)
					{
						if(arr[i][0]==arr[j][a2])
						{
							int off =len2-a2;
							if(arr[j].substr(a2,off) == arr[i].substr(0,off) && arr[j].substr(0,a2) == arr[i].substr(off,a2))
						       {
								count++;
								break;
						       }
						}
						a2++;
					}

			}
		}
  return count;
	}
};

int main()
{
 //   freopen("input.txt","r",stdin);
 //   freopen("output.txt","w",stdout);

	int arr[]={};
	int arr2[]={};
	FoxAndWord c;
	vector<string> v1,v2;
	v1.push_back("kyoto");
	v1.push_back("tokyo");
	c.howManyPairs(v1);

return 0;
}

