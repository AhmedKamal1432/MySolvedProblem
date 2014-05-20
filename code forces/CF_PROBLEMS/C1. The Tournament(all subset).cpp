/*
*
* solved by Ahmed Kamal
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

typedef long long int LL ;
#define vi vector<int>
#define ii pair<int,int>
#define vii vector< pair<int,int> >
#define sc(x) scanf("%d",&x)
double const Epsilon = 2.22045e-016;

#define ALL(v)				((v).begin()), ((v).end())
#define SZ(v)				((int)((v).size()))
#define CLR(v, d)			memset(v, d, sizeof(v))
#define LOOP(i, n)		for(int i=0;i<(int)(n);++i)
#define INF (1<<29)
#define PB	push_back
typedef vector<double>    VD;
typedef vector<string>    VS;
int gcd(int a, int b) { return (b == 0 ? a : gcd(b, a % b)); }
vector<ii> arr;
int num;
// Let's count bits == 1
int count_bits1(int n) {	// O(bits Length)
	int count = 0;	//1101001 -> 110100 -> 11010 -> 1101 -> 110 -> 11 -> 1 -> 0
	while (n) {
		if(n&1)
		  count++;
		n >>= 1;
	}
	return count;
}

ii calc(int com)
{
	int p = count_bits1( com);
	int rate =num+1,e=0;

	LOOP(i,num){
		if(com & 1<<i){ //win
			if(p >= arr[i].first)
				rate--;
			e+=arr[i].second;
		}
		else{ //lose
			if(p > arr[i].first +1)
				rate--;
		}
	}
	return make_pair(rate,e);

}
int main()
{
 //  freopen("input.txt","r",stdin);
 //   freopen("output.txt","w",stdout);
int k;sc(num);sc(k);
arr.assign(num,ii(0,0));
LOOP(i,num){
	sc(arr[i].first);sc(arr[i].second);
}

int min =INF;
LOOP(i,(1<<num)){
	ii ans = calc(i);
	if(ans.first <= k && ans.second < min)
		min = ans.second;
}

if(min != INF  ){
	printf("%d\n",min);
}
else
	printf("-1\n");
return 0;
}

