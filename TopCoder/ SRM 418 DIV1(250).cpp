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

int common (int a,int b){
	int ans =0;
	LOOP(i,9)
	  if((a & (1<<i)) && (b & (1<<i)))
			ans++;
	return ans;
}

class TwoLotteryGames {
public:
	int pt[10][10];
	void create_pas(){
		LOOP(i,10)
			pt[i][0]=pt[i][i]=1;
		for (int i = 2; i < 10; ++i)
			for (int j = 1; j < i; ++j)
				pt[i][j]=pt[i-1][j]+pt[i-1][j-1];
	}

	double getHigherChanceGame(int n, int m, int k) {
		int com = (1<<n);
		vi arr;
		LOOP(i,com){
			int num = count_bits1(i);
			if(num == m)
				arr.push_back(i);
		}
		int all = SZ(arr);
		int co=0;
		LOOP(i,all)
			LOOP(j,all){
				if(common(arr[i],arr[j]) >= k)
					co++;
			}
		create_pas();
		double ans = double(co)/(double)pow((double)all,2.0) ;
		return ans;
	}
};
		
