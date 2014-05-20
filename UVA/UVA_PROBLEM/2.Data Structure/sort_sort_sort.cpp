/*
 * sort_sort_sort.cpp
 *
 *  Created on: Dec 25, 2013
 *      Author: root
 */
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
  //  freopen("output.txt","w",stdout);
vi out[20000];
int odd[20000];
int n,m;
while(sc(n) != EOF && sc(m) != EOF && !(m== 0 && n==0))
{
	printf("%d %d\n",n,m);
 for (int i = -m+10000; i < m+10000; ++i)
	 out[i].clear();

	memset(odd,0,sizeof odd);
  int num;
  for (int i = 0; i < n; ++i){
	sc(num);
	if(num%2==0){ //is even
	 out[(num%m)+10000].push_back(num);
	}
   else{   //is odd
    out[(num%m)+10000].insert(out[(num%m)+10000].begin(),num);
    odd[(num%m)+10000]++;
   }
  }

  for (int i = -m+10000; i < m+10000; ++i) {
	sort(out[i].begin(),out[i].begin()+odd[i]);
	reverse(out[i].begin(),out[i].begin()+odd[i]);
	sort(out[i].begin()+odd[i],out[i].end());
}

  for (int i = -m+10000; i < m+10000; ++i) {
	  int len = out[i].size();
	for (int k = 0; k < len; ++k) {
		printf("%d\n",out[i][k]);
	}
  }

}
printf("0 0\n");
return 0;
}





