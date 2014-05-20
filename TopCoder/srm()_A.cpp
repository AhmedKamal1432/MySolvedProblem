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
class InsertZ
{
public:
	string canTransform(string init, string goal)
	{
		int len1=init.size();
		int len2=goal.size();
		int good=true;
		int k=0;
		for (int i = 0; i < len1; ++i) {
			while(k < len2)
			{
				if(init[i]==goal[k]){
					k++;
					break;
				}

				if(goal[k]!='z'){
					good=false;
					k++;
					break;
				}
				k++;
			}
			if(!good)
				break;
			if(k==len2 && (i<len1-1 || init[len1-1] != goal[len2-1]) ){
				good=false;
				break;
			}
		}
		while(k<len2){
			if(goal[k]!='z'){
				good=false;
				k++;
				break;
			}
			k++;
		}


		string s;
	 if(good)
		 s= "Yes";
	 else
		s= "No";
	 return s;
	}
};

int main()
{
 //   freopen("input.txt","r",stdin);
 //   freopen("output.txt","w",stdout);

	InsertZ ob;
	ob.canTransform("g", "zzzzzz");

return 0;
}

