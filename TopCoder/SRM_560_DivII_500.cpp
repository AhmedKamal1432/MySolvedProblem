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

class TomekPhone
{
public :
	 int minKeystrokes(vector <int> freq, vector <int> ks)
	{
		int n= freq.size();
		LL sum=0;
		int f=0,l=1;
		sort(ALL(freq)); sort (ALL(ks));
		reverse(ALL(freq)); reverse (ALL(ks));


		while(true)
		{
			LOOP(k,SZ(ks) ){
				sum+=l*freq[f++];
                if(f== n)
                	break;
                ks[k]--;
			}

			sort(ALL(ks));
			reverse(ALL(ks));
			while(ks.size()>0 && ks[ks.size()-1] ==0)ks.pop_back();
			if(f==n)
				break;
			if(ks.size()==0)
				return -1;
			l++;
		}
      return sum;
	}
};
int main()
{
 //   freopen("input.txt","r",stdin);
 //   freopen("output.txt","w",stdout);
	TomekPhone c;
	int r[]={13,7,4,20};
	int f[]={2,1};
	c.minKeystrokes(vi(r,r+4),vi(f,f+2));

return 0;
}

