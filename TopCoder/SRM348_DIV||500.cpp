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

class LostParentheses
{
public:
	int minResult(string e)
	{
		int sum=0,len =e.size();
		bool ap=false;
		string s="";
		stringstream ss;
		int n=0;
		LOOP(i,len){
			if(e[i]=='+'|| e[i]=='-' ){
				ss<<s;
				ss>>n; ss.clear();
				if(ap)
					sum-=n;
				else
					sum+=n;
				if(e[i]=='-')
					ap=true;
				s.clear();
			}
			else{
				s.push_back(e[i]);
			}
		}
		ss<<s;
		ss>>n; ss.clear();

		if(ap)
			sum-=n;
		else
			sum+=n;


		return sum;
	}

};

int main()
{
 //   freopen("input.txt","r",stdin);
 //   freopen("output.txt","w",stdout);
	LostParentheses c;
	string s="55-50+40";
	c.minResult(s);

return 0;
}

