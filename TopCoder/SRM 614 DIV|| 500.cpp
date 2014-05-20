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

class MinimumSquareEasy {
public:
	long long minArea(vector <int> x, vector <int> y) {
		int  n = SZ(x);
		LL mx,my,tx,ty,dd;
		long long int area = LL(1LL<<62) ;
		vi vx(x),vy(y);
		for(int i=0;i<n;i++){
			for (int j = i+1; j < n; ++j) {
				vx =x; vy =y;
				vx.erase(vx.begin() +i);
				vx.erase(vx.begin() +j-1);
				vy.erase(vy.begin() +i);
				vy.erase(vy.begin() +j-1);
				mx = *min_element(ALL(vx));
				my = *min_element(ALL(vy));
				tx = *max_element(ALL(vx));
				ty = *max_element(ALL(vy));
                dd =max((tx -mx),(ty-my))+2;
				area = min(area, LL(dd*dd));
			}
		}
		return area;
	}
};

