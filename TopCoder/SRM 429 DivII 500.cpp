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

class SubrectanglesOfTable {
public:
	vector <long long> getQuantity(vector <string> arr) {
     int h = SZ(arr),w=SZ(arr[0]);
     vector <long long> ans(26,0);
     LOOP(i,h)
       arr[i]+=arr[i];
     LOOP(i,h)
      arr.push_back(arr[i]);

     LOOP(i,2*h)
      LOOP(j,2*w)
       ans[arr[i][j]-'A'] += (i + 1)*(2*h - i)*(j + 1)*(2*w - j);

	return ans;
	}
};

