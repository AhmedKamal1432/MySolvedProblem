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

class SpamChecker {
public:
	string spamCheck(string s, int good, int bad) {
       int ans =0;
       bool g=true;
       LOOP(i,SZ(s)){
    	   if(s[i]=='o')
    		   ans+=good;
    	   else
    		   ans-=bad;
    	   if(ans < 0){
    		   g=false;
    		   break;
    	   }
       }
       if(!g)
    	   return "SPAM";
       return "NOT SPAM";

	}
};

