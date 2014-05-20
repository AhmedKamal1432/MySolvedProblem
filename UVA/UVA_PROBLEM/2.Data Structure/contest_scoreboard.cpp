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

struct Team
{
	int number;
	int solved[10];
	int nonaccepted[10];

	Team(int n)
	{
		number=n;
		memset(solved,0,sizeof(solved));
		memset(nonaccepted,0,sizeof(nonaccepted));
	}
};

bool comp (pair<int,ii> p1,pair<int,ii> p2)
{
 if(p1.first != p2.first)
	 return p1.first >p2.first;

 if(p1.second.first != p2.second.first)
	 return p1.second.first < p2.second.first;

 return p1.second.second < p2.second.second;
}
int main()
{
  //  freopen("input.txt","r",stdin);
   // freopen("output.txt","w",stdout);
int tst;
scanf("%d\n",&tst);
for (int ts = 0; ts < tst; ++ts)
{
	if(ts>0)
		printf("\n");
	map<int,Team> tm_mp;
	vector<int>nums_arr;
  string line ;
  scanf("\n\n\n\n");
  getline(cin,line);
 while(line.size() != 0)
 {
	 int num,prb,tme;
	 char l;
	 sscanf(line.c_str(),"%d %d %d %c",&num,&prb,&tme,&l);
	 if(tm_mp.find(num) == tm_mp.end()  )
	 {
		 Team* t1 =new Team(num);
		 if(l=='C')
			 t1->solved[prb]=tme;
		 else if( l== 'I')
			 t1->nonaccepted[prb]++;
		 nums_arr.push_back(num);
		 tm_mp.insert(make_pair(num,*t1));
	 }
	 else
	 {
		 if( l== 'I')
	 	  {
			 if(tm_mp.find(num)->second.solved[prb] == 0)
			 tm_mp.find(num)->second.nonaccepted[prb]++;
	 	  }
		 else if(l=='C')
		  {
			 if(tm_mp.find(num)->second.solved[prb]==0)
			 tm_mp.find(num)->second.solved[prb] = tme;
		  }

	 }
	 scanf("\n");
	 getline(cin,line);
 }

 int len=nums_arr.size();
	vector<pair<int,ii> > wlsort;
	wlsort.assign(len,make_pair(0,make_pair(0,0)));
 for (int i = 0; i <len ; ++i)
   {
		int solved=0,penalty=0;
	  for (int k = 0; k < 10; ++k)
		 if(tm_mp.find(nums_arr[i])->second.solved[k] !=0 )
		 {
			 solved++;
			 penalty+=tm_mp.find(nums_arr[i])->second.solved[k] + 20* (tm_mp.find(nums_arr[i])->second.nonaccepted[k]);
		 }
	wlsort[i]=make_pair(solved,make_pair(penalty,nums_arr[i]));

	}

 sort(wlsort.begin(),wlsort.end(),comp);
 for (int i = 0; i < len; ++i)
 {
   printf("%d %d %d\n",wlsort[i].second.second,wlsort[i].first,wlsort[i].second.first);
 }

}

return 0;
}



