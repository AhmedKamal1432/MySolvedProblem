/*
 * the_wedding.cpp
 *
 *  Created on: Nov 4, 2013
 *      Author: Ahmed Kamal
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

bool func(pair<ii,ii> p1,pair<ii,ii> p2)
{
  if(p1.first.first < p2.first.first)
	  return true;

  return false;

}

int main()
{
  //  freopen("input.txt","r",stdin);
  //  freopen("output.txt","w",stdout);

	int t,r,h;
	while(scanf("%d %d %d",&t,&r,&h) != EOF)
	{
		vector<vector<int> > Trv,Res,Htl;
		int num;
		for (int i = 0; i < t; i++)
		{
			scanf("%d",&num);
			vi temp;
			temp.push_back(num);
		 Trv.push_back(temp);
		 for (int k = 0; k < r; k++)
		 {
			scanf("%d",&num);
			if(num==0)
				Trv[i].push_back(k);
		 }

		}
		for (int i = 0; i < r; i++)
		 {
			scanf("%d",&num);
			vi temp;
			temp.push_back(num);
		 Res.push_back(temp);
		 for (int k = 0; k < h; k++)
		 {
			scanf("%d",&num);
			if(num==0)
				Res[i].push_back(k);
		  }
		}

		for (int i = 0; i < h; i++)
		 {
			scanf("%d",&num);
			vi temp;
			temp.push_back(num);
		 Htl.push_back(temp);
		 for (int k = 0; k < t; k++)
		 {
			scanf("%d",&num);
			if(num==0)
				Htl[i].push_back(k);
		  }
		}

		vector< pair<ii,ii> >arr;

		for(int T=0;T<t;T++)
		{
			int len_r =Trv[T].size()-1;
		  for(int R=0;R<len_r;R++)
		  {
			 int c_r=Trv[T][R+1];
			 int len_h =Res[c_r].size()-1;

			 for(int H=0;H<len_h;H++)
			 {
			   int c_h=Res[c_r][H+1];

//
//			   for (int var = 0; var < Htl[c_h].size(); ++var)
//			   {
//				cout<<Htl[c_h][var]<<" ";
//			    }
//			   printf("\n");
//			   //

			   if(binary_search(Htl[c_h].begin()+1,Htl[c_h].end(),T) )
			   {
				   int price =Trv[T][0]+Res[c_r][0]+Htl[c_h][0];
				   arr.push_back(pair<ii,ii >(ii(price,T),ii(c_r,c_h)));
			   }
			 }

			 }
		  }
		 if(arr.size()== 0)
			 printf("Don't get married!\n");

		 else{
		 pair<ii,ii> pp= *(min_element(arr.begin(),arr.end(),func));
		 printf("%d %d %d:%d\n",pp.first.second,pp.second.first,pp.second.second,pp.first.first);

		 }

	}



return 0;
}


