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
#define sc(x) scanf("%d",&x)

int main()
{
  //  freopen("input.txt","r",stdin);
 //   freopen("output.txt","w",stdout);

string s;
int n;
sc(n);
stringstream ss;
int  temp =n+1;
int arr[10];

while(true)
{
	bool good=true;
    memset(arr,0,sizeof(arr));
	s.clear();  ss.clear();
	ss<<temp;
	ss>>s;
  for(int i=0; i<s.size(); i++)
     arr[s[i]-'0']++;

  for (int k = 0; k < 10; ++k) {
	if(arr[k]>1 )
		good =false;
   }

  if(good)
  {
	  printf("%d",temp);
    break;
  }
temp++;
}

return 0;
}

