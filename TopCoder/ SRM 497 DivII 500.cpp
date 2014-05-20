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

class PermutationSignature {
public:
	vector <int> reconstruct(string s) {
		int n = SZ(s);
		if(n == 0) //base case
			return vi(1,1);

		vi next,res(n+1);
		next = reconstruct(s.substr(1));
		res[0]= (s[0] == 'D')?next[0]+1 :1;
		for(int i=1; i<=n;i++){
			res[i]=(next[i-1] >= res[0])?next[i-1]+1 : next[i-1];
		}
		return res;
	}
};

