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

class SpiralRoute {
	vi make(int a,int b)
	{
		int arr[2];
		arr[0]=a;arr[1]=b;
		return vi(arr,arr+2);
	}
public:
	vector <int> thronePosition(int w, int l) {
		if(l==2) return make(0,1);
		if(l==1) return make(w-1,0);
		if(w==2) return make(0,1);
		if(w==1) return make(0,l-1);

		vi arr=thronePosition( w-2,l-2);
		arr[0]++;arr[1]++;
		return arr;
	}
};

