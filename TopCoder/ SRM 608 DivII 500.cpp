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

class MysticAndCandiesEasy {
public:
	int minBoxes(int bc, int x, vector <int> high) {
		int n = high.size();
		vi arr;
		arr.assign(n,0);
		int c= bc;
		int i=0;
		while(c){
			if(arr[i]<high[i]){
				c--;
				arr[i]++;
			}
           i=(i+1)%n;
		}
		sort(ALL(arr));
//		reverse(ALL(arr));
		vi b(high);
		sort(ALL(b));
		int bmax = ceil(float(bc)/(float)n);
		int sum=0;
	    int ans=0;
int t;

		LOOP(i,n){
		    if(b[i]<bc)
		    	 t=b[i];
		    else
		    	t=bmax;
			sum+=t;
			ans++;
			if(bc - sum < x){
			ans--;
				break;
			}
			//sum-=abs(b[i]-bmax);
		}
		return n-ans;



	}
};


