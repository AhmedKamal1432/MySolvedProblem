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

class TypoCoderDiv2
{

public:
int count(vector<int> arr)
{
	int len = arr.size();
	bool brawn =false ;
	int co =0;
	for (int i = 0; i < len; i++)
	{
		if((arr[i] >= 1200 && !brawn ) || (arr[i] < 1200 && brawn) )
		{
			co++;
			brawn = !brawn;
		}
	}
	return co;
}

};

int main()
{
 //   freopen("input.txt","r",stdin);
 //   freopen("output.txt","w",stdout);


return 0; 
}
