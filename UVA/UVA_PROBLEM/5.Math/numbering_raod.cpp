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

 int roads,nums;
 int i=1;
 while(scanf("%d %d",&roads,&nums) != EOF && !(roads == 0 && nums==0) )
 {
  int ch;
  ch=ceil((float)roads/(float)nums);
  if(ch<28)
   printf("Case %d: %d\n",i,ch-1);
  else
   printf("Case %d: impossible\n",i);
 i++;
 }

return 0; 
}
