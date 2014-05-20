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
#define vi vector<int	>
#define ii pair<int,int>
#define vii vector< pair<int,int> >
#define sc(x) scanf("%d",&x)
double const Epsilon = 2.22045e-016;

class BlackBoxDiv2
{
public:
	int count(string s1,string s2);
};
int BlackBoxDiv2::count(string s1,string s2)
{
	LL com=1,temp;
	if(( find(s1.begin(),s1.end(),'B') == s1.end() && find(s1.begin(),s1.end(),'B') != s1.end() ) || (find(s2.begin(),s2.end(),'B') == s2.end() && find(s2.begin(),s2.end(),'B') != s2.end()))
	{
		cout<<0<<endl;
	  return 0;
	}
	for (int i = 0; i < s1.size(); ++i) {
		if(s1[i]=='B'){
			int num=0;
			for (int k = 0; k < s2.size(); ++k) {
				 if(s2[k]=='B')
					 num++;
			}
			 temp = (int)pow(2,(double)num);
			temp--;
			com*=temp;
			com = com % 1000000007;
		}
	}

	for (int i = 0; i < s2.size(); ++i) {
		if(s2[i]=='B')
			com--;
	}
	int ans=max(1,(int)com);
	cout<<ans<<endl;
  return ans;
}

int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
	string s1,s2;
	BlackBoxDiv2 obj ;
	 while(cin>>s1>>s2)
	 {
	 obj.count(s1,s2);
	 }
return 0;
}

