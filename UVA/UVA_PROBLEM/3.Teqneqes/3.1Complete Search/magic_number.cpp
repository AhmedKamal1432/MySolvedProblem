/*
 * magic_number.cpp
 *
 *  Created on: Nov 3, 2013
 *      Author: root
 */
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

bool is_valed(string s)
{
	int arr[10];
	for (int i = 0; i < 10; i++)
	{
	 arr[i]=0;
	}
  int len=s.size();
  for (int var = 0; var < len; var++)
  {
	arr[s[var]-'0']++;
	if(arr[s[var]-'0']>1)
		return false;
  }
  return true;
}

int main()
{
  //  freopen("input.txt","r",stdin);
 //   freopen("output.txt","w",stdout);

	int tst;
	scanf("%d\n",&tst);
	for(int ts=0;ts<tst;ts++)
	{
		if(ts>0)
			printf("\n");

		long long int N;
		scanf("%lld",&N);
		string s,s2;
		stringstream ss;
		vector<pair<long long int,int> > arr;
		ss<<N;
		ss>>s; ss.clear();
		int i=1;
		long long int s1;
		while(s.size()<11)
		{
			s1= N*i;
			ss<<s1;
			ss>>s;  ss.clear();
			ss<<i;
			ss>>s2; ss.clear();
			if(is_valed(s) && is_valed(s2))
			{
				arr.push_back(pair<long long int,int>(s1,i));
			}
		  i++;
		}

		int len=arr.size();
//		if(len == 0)
//			printf("00000\n");
//
//		else
//		{
			for (int i = 0; i < len; i++)
			  printf("%lld / %d = %lld\n",arr[i].first,arr[i].second,N);
//		}

	}

return 0;
}



