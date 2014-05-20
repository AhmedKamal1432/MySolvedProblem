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

typedef long long int LL ;
#define vi vector<int>
#define ii pair<int,int>
#define vii vector< pair<int,int> >
#define sc(x) scanf("%d",&x)
double const Epsilon = 2.22045e-016;
int const max_int = 999999999;
void print(int n)
{
	if(n<5){
		printf("O-|");
		for (int i = 0; i < n; ++i)
			printf("O");
		printf("-");
		for (int i = n; i < 4; ++i) {
			printf("O");
		}
		printf("\n");
	}
	else {
		printf("-O|");
		n-=5;
		for (int i = 0; i < n; ++i)
			printf("O");
		printf("-");
		for (int i = n; i < 4; ++i) {
			printf("O");
		}
		printf("\n");

	}
}
int main()
{
   //freopen("input.txt","r",stdin);
   // freopen("output.txt","w",stdout);
int n,k;
sc(n);sc(k);
vi arr;
arr.assign(n,0);
for (int i = 0; i < n; ++i) {
	sc(arr[i]);
}
int min = 0;
for (int j = 0; j < k; ++j)
  min += arr[j];
int sum;
int pivot=0;
int temp=min;
for (int i = 1; i < n-k+1; ++i) {
  sum=temp-arr[i-1]+arr[i+k-1];
  temp=sum;
  if(sum < min){
	  min=sum;
   pivot=i;
   }
}

printf("%d\n",pivot+1);
return 0;
}

