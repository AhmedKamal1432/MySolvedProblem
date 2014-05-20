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

int ans=0,v;
int arr[4];
int op[3];
vector<string> s_arr;
bool calc (){
	string s="",tmp;;
	stringstream ss;
	ss<<arr[0];
	ss>>tmp;ss.clear();
	s+=tmp;
 int sum ;
 switch(op[0]){
 case 0 :sum=arr[0] + arr[1]; s.push_back('+');
	 break;
 case 1 :sum=arr[0] - arr[1];s.push_back('-');
	 break;
 case 2 :sum=arr[0] * arr[1];s.push_back('*');
	 break;
 }

    ss<<arr[1];
	ss>>tmp;ss.clear();
	s+=tmp;

 for(int i=1; i<3;i++){
	 switch(op[i]){
	 case 0 :sum+= arr[i+1]; s.push_back('+');
		 break;
	 case 1 :sum -= arr[i+1]; s.push_back('-');
		 break;
	 case 2 :sum *= arr[i+1]; s.push_back('*');
		 break;
	 }
	    ss<<arr[i+1];
		ss>>tmp;ss.clear();
		s+=tmp;
 }
 if(sum == v){
	 ans++;
	 s_arr.push_back(s);
  return true;
 }
 return false;
}
void back(int c){
if(c == 3){
	calc();
	return;
}

LOOP(i,3){
	op[c]=i;
	back(c+1);
}
}

class CountExpressions {
public:
	int calcExpressions(int x, int y, int val) {
		s_arr.clear();
      arr[0]=x;arr[1]=x;arr[2]=y;arr[3]=y;
      v= val;
      sort(arr,arr+4);
      do {
       back(0);
	} while (next_permutation(arr,arr+4));
      sort(ALL(s_arr));
  	s_arr.resize(unique( ALL(s_arr) ) - s_arr.begin());
  	LOOP(i,SZ(s_arr))
  	  cout<<s_arr[i].c_str();
      return SZ(s_arr);
	}
};

