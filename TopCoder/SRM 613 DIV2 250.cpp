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

class TaroString {
public:
	string getAnswer(string s) {
       int n = SZ(s);
       int i = 0;

       for(;i<n;i++){
    	   if(s[i] == 'C')
    		   break;
       }
       if(i<n)
       for(;i<n;i++){
           	   if(s[i] == 'A')
           		   break;
              }
       else
    	   return "Impossible";

       if(i<n)
		  for(;i<n;i++){
				   if(s[i] == 'T')
					   break;
				 }
		  else
		   return "Impossible";
       if(i == n)
    	   return "Impossible";

       int c1=0,c2=0,c3=0;
       LOOP(i,n){
    	   switch (s[i]) {
			case 'C':c1++;
				break;
			case 'A':c2++;
				break;
			case 'T':c3++;
				break;

			default:
				break;
		}
       }

       if(c1 == 1 && c2 ==1 && c3 == 1)
    	   return "Possible";
       else
    	   return "Impossible";

	}
};

