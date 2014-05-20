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

int main()
{
  // freopen("input.txt","r",stdin);
 //   freopen("output.txt","w",stdout);
int ts;sc(ts);
int n,k;
string s,test;
LOOP(t,ts){
	sc(n);sc(k);
    cin>>s;
    //test.clear();
    int sum=0;
    bool good =false;
   LOOP(i,n)
    {
	   good=false;
	   int in =1;
	   while(in<=k && i-in>=0){
		   if(s[i-in] ==s[i])
			   good = true;
		   in++;
	   }
	   if(good ){
		   sum++;
	  //  test.push_back(s[i]);
	   }
    }
   printf("Case %d: %d\n",t+1,sum);
}

return 0;
}

