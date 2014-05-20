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

class TheBrickTowerMediumDivTwo {
public:
	vector <int> find(vector <int> high) {
		int ans =INF;
		int n = SZ(high);
		vi arr(n);
		LOOP(i,n)
		  arr[i]=i;
		vi ret = arr;
		int temp;
		do {
          temp =0;
          LOOP(i,n-1)
            temp+=max(high[arr[i]],high[arr[i+1]]);
          if(temp < ans){
        	  ret = arr;
        	  ans = temp;
          }
		} while (next_permutation(ALL(arr)) );
      return ret;
	}
};

