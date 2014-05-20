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

class PrintScheduler {
public:
	string getOutput(vector <string> thrd, vector <string> slc) {
     int n = thrd.size();
     string ans;
     stringstream ss;

     vi hash;
     hash.assign(n,0);
     int len =slc.size();
     int sp=0;
     LOOP(i,len){
    	 int th,time;
    	 LOOP(k,SZ(slc[i])){
				if(slc[i][k]==' ')
					sp=k;
			}
    	 string s=slc[i].substr(0,sp);
    	 ss<<s; ss>>th;ss.clear();
    	  s=slc[i].substr(sp+1,slc[i].size()-sp-1);
    	 ss<<s; ss>>time;ss.clear();
    	 LOOP(k,time){
    		 ans+=thrd[th][hash[th]];
    		 hash[th] = (hash[th]+1)%thrd[th].size();
    	 }
     }
   return ans;
	}
};

