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

class SequenceOfCommands {
public:
	string whatHappens(vector <string> arr) {
		int n=SZ(arr);
		int i=0,j=0,d=0;
        LOOP(t,4)
        	LOOP(k,n)
        		LOOP(m,SZ(arr[k])){
    			if(arr[k][m]=='L')
    				d=(d-1+4)%4;
    			else if(arr[k][m]=='R')
    				d=(d+1)%4;
    			else{
                 switch(d){
                 case 0: i--;
                	       break;
                 case 1: j++;
                           	 break;
                 case 2: i++;
                           	 break;
                 case 3: j--;
                           	 break;
                 }
    			}

           }
        string ans;
        if( i==0 && j ==0 && d ==0)
           ans ="bounded";
        else
        	ans="unbounded";
        return ans;
	}
};

