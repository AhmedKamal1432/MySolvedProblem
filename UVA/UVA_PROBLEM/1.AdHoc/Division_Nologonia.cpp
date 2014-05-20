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

int qrs;
while(scanf("%d",&qrs) !=EOF && qrs!=0)
{
 int x0,y0;
 int x,y;
 scanf("%d %d",&x0,&y0);
 for (int q = 0; q < qrs; q++)
 {
	 scanf("%d %d",&x,&y);
	 if(x==x0 || y==y0)
	 {
		 printf("divisa\n");
	 }
	 else
	 {
		 if(y > y0)
		   printf("N");
		 else
			 printf("S");

		 if(x > x0)
			 printf("E\n");
		 else
			 printf("O\n");
	 }

 }

}


return 0; 
}
