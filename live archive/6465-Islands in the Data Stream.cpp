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

int main()
{
   // freopen("input.txt","r",stdin);
 //   freopen("output.txt","w",stdout);
int ts,num;sc(ts);
int hamada;
vi arr(15);
LOOP(t,ts){
 sc(num);
 LL sum=0;
 LOOP(i,15)
     sc(arr[i]);
 for (int k = 1; k < 14; k++) {
	for (int i = 1; i+k<15; ++i) {
		bool good =true;
		LOOP(bb,k){
		 if( arr[i+bb]<= arr[i-1] || arr[i+bb] <= arr[i+k] ){
			good =false;
			break;
		  }
	    }
		if(good)
			sum++;
   }
 }
 printf("%d %lld\n",t+1,sum);
}

return 0;
}

