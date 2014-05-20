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

class MicroStrings {
public:
	string makeMicroString(int a, int d) {
       vi arr;
       arr.push_back(a);
       int n = a-d;
       int i =2;
       while(n >= 0){
    	   arr.push_back(n);
    	   n = a - i*d;
    	   i++;
       }
       stringstream ss;
       string s="",temp;
       LOOP(i,SZ(arr)){
    	   ss<<arr[i]; ss>>temp; ss.clear();
    	   s+=temp;
       }
       return s;
	}
};
