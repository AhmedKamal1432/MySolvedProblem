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

int main()
{
 	    freopen("input.txt","r",stdin);
	 //   freopen("output.txt","w",stdout);

	 string s_num,temp;
     int sum;
	 long long int num;
	 stringstream ss; 
	 while(scanf("%lld",&num)!=EOF && num!=0)
	{
	  ss<<num;
	  ss>>s_num; ss.clear();
       int len=s_num.size();
	   while(len>1)
	   {
	    sum=0;
	    for(int i=0;i<len;i++)
		{
		 sum+=s_num[i]-'0';
		}
	     ss<<sum;
		 ss>>s_num;  ss.clear();
		 len=s_num.size();
	   }
	   cout<<s_num<<endl;

	} 

 return 0;
}