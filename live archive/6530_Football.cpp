/*
 *      Author: Ahmed Kamal
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
  //  freopen("input.txt","r",stdin);
 //   freopen("output.txt","w",stdout);
int n,g;
while(scanf("%d %d",&n,&g)!= EOF)
{
 int points=0;
 vi def;
 for (int i = 0; i < n; ++i) {
	int me,ag;sc(me);sc(ag);
	if(me > ag)
		points+=3;
	else if(me < ag)
		def.push_back(ag-me);
	else
	{
		if(g>0){
			g--;
			points+=3;
		}
		else
			points+=1;
	}
}

 sort(ALL(def));
 int len = def.size();
 LOOP(i,len){
  if(g>=def[i]){
   g -= def[i];
   points+=1;
   if(g>0){
	   g--;
	   points+=2;
   }
  }
   else
	   break;
  }
 printf("%d\n",points);
}

return 0;
}

