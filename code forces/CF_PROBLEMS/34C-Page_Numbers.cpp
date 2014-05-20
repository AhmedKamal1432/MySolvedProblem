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
 int hash[1005];

int main()
{
  //  freopen("input.txt","r",stdin);
 //   freopen("output.txt","w",stdout);
string s;cin>>s;
string temp;

int i=0,num;
stringstream ss;
while(i<SZ(s))
{
 	if(s[i]==','){
 		ss<<temp;
 		ss>>num; ss.clear();
 		hash[num]++;
 		temp.clear();
 	}

 	else
 		temp.push_back(s[i]);
 	i++;
}
ss<<temp;
ss>>num; ss.clear();
hash[num]++;
int beg =true;
int count=0,st;
LOOP(i,1002){
  if(hash[i] >0){
	count ++;
	st=i;
  }
  else if(count > 0)
  {
	  if(!beg)
		  printf(",");
    if(count==1)
       printf("%d",st);
   // else if(count ==2)
    //	printf("%d,%d",st-1,st);

    else
    	 printf("%d-%d",st-count+1,st);

     beg=false;
	  count=0;
  }
}

return 0;
}

