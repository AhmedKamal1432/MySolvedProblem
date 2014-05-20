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
 //   freopen("input.txt","r",stdin);
 //   freopen("output.txt","w",stdout);
 int n;
 int cas =0;
while(sc(n) != EOF && n !=0 ){
    if(cas>0)
    	printf("\n");
	vi arr;
    arr.assign(n,0);
    for (int i = 0; i < n; ++i) {
		sc(arr[i]);
	}
    sort(arr.begin(),arr.end());

    for (int a = 0; a < n; ++a)
       for (int b = a+1; b < n; ++b)
    	  for (int c = b+1; c < n; ++c)
    		 for (int d = c+1; d < n; ++d)
    			 for (int e = d+1; e < n; ++e)
    				 for (int f = e+1; f < n; ++f)
    				 {
    					 printf("%d %d %d %d %d %d\n",arr[a],arr[b],arr[c],arr[d],arr[e],arr[f]);
    				 }
  cas++;
}

	return 0;
}

