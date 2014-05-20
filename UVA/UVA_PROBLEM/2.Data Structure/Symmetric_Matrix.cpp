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


int main()
{
 // 	 freopen("input.txt","r",stdin);
 //   freopen("output.txt","w",stdout);

	int tst;
	sc(tst);
	int n;
	LL arr[101][101];
for (int ts = 0; ts < tst; ++ts) {
	scanf("\nN = %d",&n);
	for (int i = 0; i < n; ++i) {
		for (int k = 0; k < n; ++k) {
			scanf("%lld",&arr[i][k]);
		}
	}

	bool good = true;
	for (int i = 0; i < n; ++i) {
		for (int k = 0; k < n; ++k) {
		 if(arr[i][k] != arr[ abs(n-i-1) ][ abs(n-k-1) ] || arr[i][k] <0){
			 good =false;
			 break;
		 }
		}
	}

	if(good)
		printf("Test #%d: Symmetric.\n",ts+1);
	else
		printf("Test #%d: Non-symmetric.\n",ts+1);
}

	return 0;
}

