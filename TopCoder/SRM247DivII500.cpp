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

int get_gcd( int x, int y)
{
     int r;
	while(y!=0)
	{
	  r=x%y;
	  x=y;
	  y=r;
	}
	return x;


}


class FracCount {
public:
	int position(int n, int d) {
        int count =0;
		for (int i = 1; i < d; ++i) {
			for (int k = 1 ; k < i; ++k) {
				if(get_gcd(i,k) == 1)
					 count++;
			}
		}

		for (int i = 1; i < n; ++i) {
			if(get_gcd(i,d) == 1)
				count++;
		}

		return count+1;
	}
};

