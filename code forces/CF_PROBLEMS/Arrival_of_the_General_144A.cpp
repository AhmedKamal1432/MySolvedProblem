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

vi::iterator min_element1(vi &arr)
{
	int temp =99999999;
	 vi:: iterator min(&temp) ;

	for(vi::iterator it = arr.end()-1 ;it >=arr.begin() ; it--)
	{
		if(*it < *min)
		 min= it;
	}
	return min;
}

int main()
{
    freopen("input.txt","r",stdin);
 //   freopen("output.txt","w",stdout);

vi arr;
int N;
sc(N);
arr.assign(N,0);
for (int i = 0; i < N; ++i)
 {
  sc(arr[i]);
 }

vi::iterator mn_pos =  min_element1(arr)  ;

vi::iterator mx_pos=  max_element(arr.begin(),arr.end()) ;

int num;
int n1,n2;
if(mn_pos < mx_pos)
{
	n1 =arr.end()- mn_pos-1;
   n2 = mx_pos - arr.begin();
	num= n1+n2-1;
}
 else
 {
		n1 =arr.end()- mn_pos-1;
	   n2 = mx_pos - arr.begin();
		num= n1+n2;
 }

printf("%d",num);
return 0;
}

