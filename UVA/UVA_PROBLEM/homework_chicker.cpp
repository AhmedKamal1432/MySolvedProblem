
#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<iostream>
#include<sstream>
#include<string>
#include<vector>
#include<map>
#include<bitset>
#include<queue>
#include<utility>
#include<algorithm>
#include<functional>

using namespace std;

#define vi vector<int>
#define ii pair<int,int>
#define vii vector< pair<int,int> >

bool is_number(const std::string& s)
{
    std::string::const_iterator it = s.begin();
    while (it != s.end() && std::isdigit(*it)) ++it;
    return !s.empty() && it == s.end();
}

int main()
{
//   freopen("input.txt","r",stdin);
//   freopen("output.txt","w",stdout);

int n1,n2,deg=0,ex_result,w_reslt;
char op;
stringstream ss;

while(scanf("%d%c%d=",&n1,&op,&n2) != EOF)
{
	string s;
	cin>>s;
	if(! is_number(s))
		continue;

	ss<<s;
	ss>>w_reslt;  ss.clear();

	if(op == '+')
	ex_result=n1+n2;
	else
	ex_result=n1-n2;

	if(ex_result == w_reslt)
	deg++;
}

	printf("%d\n",deg);

return 0;
}


