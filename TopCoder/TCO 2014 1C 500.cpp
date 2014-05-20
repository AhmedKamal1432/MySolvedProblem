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

class FizzBuzzTurbo {
public:
	vector <long long> counts(long long A, long long B) {
       if(B < A )
    	   return vector<LL>(3,0);
       LL a1,a2,b1,b2,c1,c2;
       a1 = A/3;
       a2 = B/3;
       b1=  A/5;
       b2 = B/5;
       c1 = A/15;
       c2 = B/15;
       if(A%3 ==0)
    	   a2++;
       if(A%5 == 0)
    	   b2++;
       if(A%15==0)
    	   c2++;

       LL d= c2-c1;
        vector<LL> as(3,0) ;
        as[0]=a2-a1-d;
        		as[1]=b2-b1-d;
        		as[2]=d;

        		return as;

	}
};

