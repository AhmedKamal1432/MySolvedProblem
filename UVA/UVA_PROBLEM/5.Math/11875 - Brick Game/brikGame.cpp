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

 int tst;
 scanf("%d",&tst);
for(int ca=0;ca<tst;ca++)
{
 int N;
 scanf("%d",&N);
 vector<int> arr;
 arr.assign(N,0);
 for(int i=0;i<N;i++)
   scanf("%d",&arr[i]);
   
  int temp= N/2;
  printf("Case %d: %d\n",ca+1,arr[temp]);
 
 }

return 0; 
}
