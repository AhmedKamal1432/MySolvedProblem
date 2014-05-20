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

class ORSolitaire
{
public:
  int getMinimum(vi numbers, int goal)
  {
    int arr[31];
	memset(arr,0,sizeof(arr));




	int gran[31];
	memset(gran,0,sizeof(gran));

	for (int i = 0; i < 31; i++)
      {if(goal &  1<<i)
	  gran[i]++;}

	for (int i = 0; i < numbers.size(); i++)
	{
		for (int k = 0; k < 31; k++)
		{
			if(numbers[i] & 1<<k)
			{
			  if (gran[k] ==0){
				  numbers.erase(numbers.begin()+i);
				  i--;
				  break;}
			}
		}
	}

	
	int len = numbers.size();	
	for (int i = 0; i < len; i++)
	{
		for (int k = 0; k < 31; k++)
		{
			if(numbers[i] & 1<<k)
				arr[k]++;
		}
	}
	vi go;
	for (int i = 0; i < 31; i++)
	{
		if(goal & 1<<i)
			go.push_back(i);
	}

	vi ham;
	for (int i = 0; i < go.size(); i++)
	{
		ham.push_back(arr[go[i]]);
	}

	int ans = *(min_element(ham.begin(),ham.end()));
	return ans;
  }

};

int main()
{
 //   freopen("input.txt","r",stdin);
 //   freopen("output.txt","w",stdout);

	int a[] ={503, 505, 152, 435, 491, 512, 1023, 355, 510, 500, 502, 255, 63, 508, 509, 511, 60, 250, 254, 346} ;
	ORSolitaire s;
	vi arr(a,a+20);
	cout<<s.getMinimum(arr,510);
return 0; 
}
