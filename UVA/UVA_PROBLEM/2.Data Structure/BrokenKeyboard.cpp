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

#define vi vector<int>
#define ii pair<int,int>
#define vii vector< pair<int,int> >

int main()
{
  //  freopen("input.txt","r",stdin);
  //  freopen("output.txt","w",stdout);

	string line;
	scanf("\n\n\n");
	while(getline(cin,line))
	{
		int len = line.size();
		if(len== 0)
			continue;

		list<char> lst;
		list<char>::iterator it=lst.begin();

		int pos=0;
		for (int i = 0; i < len; ++i) {

			if(line[i]=='[')
			{
			it=lst.begin();
 			continue;
			}
			else if(line[i]==']')
			{
				it= lst.end();
             	continue;
			}

			lst.insert(it,line[i]);


		}

		for (list<char>::iterator it2 = lst.begin(); it2 != lst.end() ; it2++)
			printf("%c",*it2);
		printf("\n");
	}



return 0;
}
