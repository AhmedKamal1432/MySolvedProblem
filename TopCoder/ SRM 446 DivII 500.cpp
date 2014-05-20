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
#define GR 0
#define BL 1
#define RD 2

class CubeWalking {
	int arr[3][3];
 void create(){
	 arr[1][1]=GR;
	 arr[0][0]=RD;arr[0][2]=RD;arr[2][0]=RD;arr[2][2]=RD;
	 arr[2][1]=BL;arr[1][2]=BL;arr[0][1]=BL;arr[1][0]=BL;
 }
public:
	string finalPosition(string s) {
		create();
		int n=SZ(s);
		int i=1,j=1,d=0;

		LOOP(k,n){
			if(s[k]=='L')
				d=(d-1+4)%4;
			else if(s[k]=='R')
				d=(d+1)%4;
			else{
             switch(d){
             case 0: i= (i-1+3)%3;
            	       break;
             case 1: j = (j+1)%3;
                       	 break;
             case 2: i = (i+1)%3;
                       	 break;
             case 3: j= (j-1+3)%3;
                       	 break;
             }
			}
		}
		string ans;
		switch (arr[i][j]){
		case GR : ans = "GREEN";
			break;
		case BL : ans ="BLUE";
			break;
		case RD : ans ="RED";
			break;
		}
		return ans;
	}
};

