/*
 * by Ahmd Kamal
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


class MiddleCode
{
public:
	string encode(string s)
	{
		string t;
		while(s.size()>0)
		{
			int len= s.size();
			if(len%2 ==1)
			{
				t.push_back(s[len/2]);
				s.erase(s.begin()+len/2);
			}
			else
			{
				int c1,c2;
				c1=s[len/2-1];
				c2=s[len/2];
				if(c1<c2)
				{
					t.push_back(s[len/2-1]);
				  s.erase(s.begin()+len/2-1);
				}
				else
				{
					t.push_back(s[len/2]);
					s.erase(s.begin()+len/2);
				}

			}

		}
		return t;
	}
};


int main()
{
 //   freopen("input.txt","r",stdin);
 //   freopen("output.txt","w",stdout);

	MiddleCode c;
	string s="word";
	c.encode(s);
return 0;
}

