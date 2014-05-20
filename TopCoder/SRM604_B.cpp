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

std::string to_base(unsigned int n, unsigned int base)
{
    static const char alphabet[] = "0123456789ABCDEFGHI";
    std::string result;
    while(n) { result += alphabet[n % base]; n /= base; }
    reverse(result.begin(),result.end());
    return result ;
}

class PowerOfThreeEasy
{
public:
	string ableToGet(int x, int y)
	{
		string n1,n2;
		n1=to_base(x,3);
		n2=to_base(y,3);
		int mn=min(n1.size(),n2.size());
        int def = abs((int)n1.size() -(int) n2.size());
        if(n1.size() < n2.size())
        {
        	for (int i = 0; i < def; ++i) {
				n1.insert(n1.begin(),'0');
			}
        }
        else
        {
        	for (int i = 0; i < def; ++i) {
				n2.insert(n2.begin(),'0');
			}
        }


		for (int i = 0; i < (int)n1.size(); ++i)
			if(n1[i] == '2')
				return "Impossible";
		for (int i = 0; i < (int)n2.size(); ++i)
					if(n2[i] == '2')
						return "Impossible";

          for (int i = 0; i < n1.size(); ++i) {
			if(n1[i]==n2[i])
				return "Impossible";
		}

          return "Possible";
	}

};

int main()
{
 //   freopen("input.txt","r",stdin);
 //   freopen("output.txt","w",stdout);

	PowerOfThreeEasy c;
	int n= pow(3.0,19);
	c.ableToGet(1,n);

return 0;
}

