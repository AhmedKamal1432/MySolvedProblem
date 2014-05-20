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
class PilingRectsDiv2
{
public:
	int getmax(vi x_arr,vi y_arr,int lim)
	{
	 int len = x_arr.size();
	 int max_r = 0;
	 for (int i = 0; i < len; i++)
	 {
		 int s_x = x_arr[i];  int s_y=y_arr[i];
		 if(s_x * s_y <lim)
			 continue;
		 int R =0;
		 for (int k = 0; k < len; k++)
		 {
			 int x, y;
			 
			 if(s_x > s_y)
			 {
				 x=max(x_arr[k],y_arr[k]);
				 y=min(x_arr[k],y_arr[k]);
			 }
			 else
			 {
				 y=max(x_arr[k],y_arr[k]);
				 x=min(x_arr[k],y_arr[k]);
			 }

			 if(min(s_x,x) * min(y,s_y) >= lim)
			 {
			  s_x=min(s_x,x);
			  s_y=min(y,s_y);
			  R++;
			 }			 
		 }
		 
			 if(max_r < R)
				 max_r =R;
	 }

	 if(max_r == 0)
		 return -1;
	 return max_r;
	}

};


int main()
{
 //   freopen("input.txt","r",stdin);
 //   freopen("output.txt","w",stdout);
	int x[]={4,7};
	int y[]={7,7};
	PilingRectsDiv2 c;
	c.getmax(vi(x,x+2),vi(y,y+2),25);

return 0; 
}
