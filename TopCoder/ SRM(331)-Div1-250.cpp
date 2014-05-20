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

class CarolsSinging {
public:
	int count_bits1(int n) {	// O(bits Length)
		int count = 0;	//1101001 -> 110100 -> 11010 -> 1101 -> 110 -> 11 -> 1 -> 0
		while (n) {
			if(n&1)
			  count++;
			n >>= 1;
		}
		return count;
	}

	VS arr;
	bool hash[32];
	bool ch(int n){
		CLR(hash,false);
		int  m=arr[0].size();
		LOOP(i,m) //loop for all songs
		 	if(n & 1<<i){  ///song in subset
		 	  LOOP(j,SZ(arr))   //loop for all person
		 		 if(arr[j][i]=='Y')
		 			 hash[j]=true;
		 	}
		LOOP(i,SZ(arr))
		   if(hash[i]==false)
			   return false;
		return true;
	}

	int choose(vector <string> ar) {
     arr=ar;
     int  m= (1<<arr[0].size())-1;
     int min = arr[0].size();
     for (int i = 1; i <= m; ++i) {
		if(ch(i)){
			int t =count_bits1(i);
			if(t<min)
				min = t;
		}
	}
     return min;
	}
};

