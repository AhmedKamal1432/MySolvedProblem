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

 int arr[4];
for(int i=0 ; i<4;i++)
{
sc(arr[i]);
}

int num =0;
for(int i=1;i<4;i++)
{
	int temp =arr[i];
	arr[i]=-1;
 if(find(arr,arr+4,temp)!= arr+4)
   num++;
}

printf("%d",num);
return 0;
}

