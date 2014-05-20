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


class KnightTour {
public:
	int hash[5000];
	string checkTour(vector <string> arr) {
		CLR(hash,0);
		hash[7*(int)arr[0][0]+arr[0][1]]++;
		bool good =true;
		for(int i =1 ;i<36; i++){
			if(!abs(arr[i][0]-arr[i-1][0]) || abs(arr[i][0]-arr[i-1][0]) + abs(arr[i][1]-arr[i-1][1]) !=3 || !abs(arr[i][1]-arr[i-1][1])|| hash[7*(int)arr[i][0]+arr[i][1]] != 0)
				  good =false;
			hash[7*(int)arr[i][0]+arr[i][1]]++;
		}
		if( abs(arr[0][0]-arr[35][0]) + abs(arr[0][1]-arr[35][1]) !=3)
				good =false;
		if(good)
			return "Valid";
		return"Invalid";

	}
};

