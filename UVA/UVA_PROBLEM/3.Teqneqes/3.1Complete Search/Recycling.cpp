#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<iostream>
#include<sstream>
#include<string>
#include<vector>
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

bool func (ii p1, ii p2)
{
 if(p1.first < p2.first)
	 return true;

 return false;

}

int main()
{
  //  freopen("input.txt","r",stdin);
 //   freopen("output.txt","w",stdout);

string s;
while(cin>>s && s!="#")
{
	vector<string> arr;
	vector<pair<int,int> > impact; // for all cities pair<num of impact,city num>
	vector<map<char,char> > map_arr;
	while(s[0]!='e')
	{		//
		//cout<<s;
		map<char,char>mc;
		mc[s[0] ]=s[2];
		mc[s[4] ]=s[6];
		mc[s[8] ]=s[10];
		mc[s[12] ]=s[14];
		mc[s[16] ]=s[18];
		map_arr.push_back(mc);
		s.clear();
		cin>>s;
	}
	int len = map_arr.size();
	for(int i=0; i<len; i++)
	{
		int deff=0;
		for(int k=0; k<len; k++)
		{
			//cout<<arr[i]<<"	"<<arr[k];
			if(map_arr[i]['r'] != map_arr[k]['r'])
				deff++;
			if(map_arr[i]['o'] != map_arr[k]['o'])
						deff++;
			if(map_arr[i]['y'] != map_arr[k]['y'])
						deff++;
			if(map_arr[i]['g'] != map_arr[k]['g'])
						deff++;
			if(map_arr[i]['b'] != map_arr[k]['b'])
						deff++;
		}
		impact.push_back(pair<int,int>(deff,i+1) );
	}

	sort(impact.begin(),impact.end(),func);

	printf("%d\n",impact[0].second);
}


return 0;
}
