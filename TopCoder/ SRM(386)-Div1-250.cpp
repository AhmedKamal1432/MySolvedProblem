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

class CandidateKeys {
public:
	bool ident(VS arr){
		int n = arr.size();
		LOOP(i,n)
		 for(int j=i+1 ; j<n;j++)
			  if(arr[i]==arr[j])
				  return false;

		return true;

	}
	VS make(int n,VS arr){
		int len =arr.size();
		VS ans(len);
		LOOP(i,len){
			string s;
			LOOP(j,11){
				if(n& (1<<j))
					s.push_back(arr[i][j]);
			}
			ans[i]=s;
		}
		return ans;
	}
	int count_bits1(int n) {	// O(bits Length)
		int count = 0;	//1101001 -> 110100 -> 11010 -> 1101 -> 110 -> 11 -> 1 -> 0
		while (n) {
			if(n&1)
			  count++;
			n >>= 1;
		}
		return count;
	}

	vector <int> getKeys(vector <string> arr) {
		int n=(1<<arr[0].size())-1;
		vi suky;
		for(int i=n;i>0;i--){
			VS t=make(i,arr);
			if(ident(t))
				suky.push_back(i);
		}
		int su = suky.size();

		vi ans;
		LOOP(i,su){
			bool good = true;
			for(int j = i+1; j<su ;j++)
			   if(!(suky[j] & (~suky[i])) ){
				   good = false;
				   break;
		        }
			if(good)
				ans.push_back(suky[i]);
		}
		 vi re(2,0);
		su =ans.size();
		vi fl(su,0);
		LOOP(i,su)
		   fl[i]=count_bits1(ans[i]);

		sort(ALL(fl));

		if(su == 0)
			return vi();
		if(su == 1){
			int b =fl[0];
			re[0]=b;re[1]=b;
			 return re;
		}
       re[0]=fl[0];
       re[1]=fl[fl.size()-1];
       return re;

	}
};

