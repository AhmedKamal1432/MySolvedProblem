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

#define PB	push_back
typedef vector<double>    VD;
typedef vector<string>    VS;
int dp[60][60][2];
vi arr;
int n;
// 1 increase  , 0 decrease
int back(int l,int b,int d){
	if(b ==n-1){
		if((arr[l] < arr[b] && d == 1) ||( arr[l] > arr[b] && d == 0))
			return 1;
		return 0;
	}
	if(dp[l][b][d] !=-1)
		return dp[l][b][d];
	int mx=0;
	if((arr[l] < arr[b] && d == 1) ||( arr[l] > arr[b] && d == 0)){
		mx =1+back(b,b+1,!d);
	}
	mx = max(mx,back(l,b+1,d));
	return dp[l][b][d]=mx;
}

class ZigZag {
public:
	int longestZigZag(vector <int> sequence) {
    arr =sequence;
     n = SZ(arr);
     CLR(dp,-1);
     if(n== 1 )
    	 return n;
     int mx2=back(0,1,1),mx1 =back(0,1,0);
     return max(mx1,mx2)+1;
	}
};

