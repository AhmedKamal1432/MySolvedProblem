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
string s;
cin>>s;
bool good=true;
int len= s.size();
for(int i=1;i<len;i++)
{
 if(s[i] > 'Z')
 good=false;
}

if(good)
{
int ratio='a'-'A';
 for(int i=0;i<len;i++ )
 {
  if(s[i]<'a')
  s[i]+=ratio;
  else
  s[i]-=ratio;
 }
}
cout<<s<<endl;

return 0;
}
