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

class SRMCards
{
public:
	int maxTurns(vector <int> cards)
	{
		int len = cards.size();
		sort(ALL(cards));
		int past= cards[0];
		int sum = 1;
		for (int i = 1; i < len; ++i) {
           if(cards[i]-past  != 1)
           {
        	   sum++;
        	   past=cards[i];
           }
		}
		return sum;

	}

};


int main()
{
 //   freopen("input.txt","r",stdin);
 //   freopen("output.txt","w",stdout);


return 0;
}

