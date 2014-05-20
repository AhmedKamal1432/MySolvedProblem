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

	int n,m;sc(n);sc(m);
   vector<string> arr;
	string s;
	//s.assign(m,'.');
   LOOP(i,n){
     cin>>s;
     arr.push_back(s);
   }

   int count=0;
   LOOP(i,n){
	   LOOP(j,m){
		   if(arr[i][j]=='W'){
		    int test=0;
		   //chick for nighbour;
		   if(i>0 && arr[i-1][j]=='P')
			   test++;
		   if(i<n-1 &&arr[i+1][j] =='P')
			   test++;
		   if(j>0 && arr[i][j-1]=='P')
			   test++;
		   if(j<m-1 &&arr[i][j+1] =='P')
			   test++;

		   if(test > 0)
			   count++;

	      }
         }
     }

 printf("%d\n",count);

return 0;
}

