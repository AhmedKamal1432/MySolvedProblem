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
int count0=0;
int count1=0;
char c;
bool dang=false;
 while(scanf("%c",&c) != EOF)
 {
  if(c=='1')
  {
  count0=0;
   count1++;
   if(count1>6)
    dang=true;
   }
   else
   {
   count1=0;
    count0++;
   if(count0 > 6)
     dang=true;   
    }   
 }

 if(dang)
   printf("YES\n");
 else
  printf("NO\n");
 
return 0; 
}
