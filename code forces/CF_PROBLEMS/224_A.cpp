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

int main()
{
 //  freopen("input.txt","r",stdin);
 //   freopen("output.txt","w",stdout);

	string s; cin>>s;
	string pl; cin>>pl;

	 int len =s.size();
	int l=0,r=0;
	for (int i = 0; i < len; ++i) {
		if(s[i]=='|')
			break;
		l++;
	}
	for (int i = l+1; i < len; ++i) {
		r++;
	}

	int len2 = pl.size();
	int def = abs(l-r);

	if(def > len2 ||  (len2- def) %2 ==1)
	{
		printf("Impossible\n");
		return 0;
	}

	int ind= 0;
	if(r>l)
	{
		LOOP(i,def)
				s.insert(s.begin(),pl[ind++]);
	}
	else
	{
		LOOP(i,def)
				s.PB(pl[ind++]);
	}

	for (int i = ind; i < len2; i+=2) {

		s.insert(s.begin(),pl[ind++]);
		s.PB(pl[ind++]);

	}
	cout<<s<<endl;
return 0;
}

