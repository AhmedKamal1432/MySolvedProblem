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

bool com1(ii p1,ii p2){
	if(p1.first == p2.first)
		return p1.second < p2.second;
	return p1.first < p2.first;
}
class CandidatesSelectionEasy {
public:
	vector <int> sort(vector <string> s, int x) {
		int n =SZ(s);
		vii arr;
		LOOP(i,n)
			arr.push_back(make_pair((int)s[i][x],i));
		std::sort(ALL(arr),com1);
		vi ans(n,0);
		LOOP(i,n)
		  ans[i]=arr[i].second;
		return ans;
	}
};

