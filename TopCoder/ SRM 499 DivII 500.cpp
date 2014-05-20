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

class ColorfulRabbits {
public:
	int getMinimum(vector <int> arr) {
    sort(ALL(arr));

    int sum =arr[0]+1;
    int cur = arr[0];
    for(int i =1;i<SZ(arr);i++){
     if(arr[i] == arr[i-1]){
      if(cur == 0){
    	  sum +=arr[i]+1;
         cur=arr[i];
      }
      else
    	  cur--;
     }
    else{
    	sum +=arr[i]+1;
    cur=arr[i];
    }
    }
    return sum;
	}
};

