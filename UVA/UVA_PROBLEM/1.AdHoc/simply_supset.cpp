/*
 * simply_supset.cpp
 *
 *  Created on: Oct 14, 2013
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
//	    freopen("input.txt","r",stdin);
	 //   freopen("output.txt","w",stdout);
	string s_num,temp;
	char c;
	stringstream ss;
	vi set1,set2;
	int num;
	bool equal;
	bool AsubB,BsubA,disjoint,confiosed;
	int len1,len2;
	int stil=1;
	vi::iterator st_it,end_it;
	vi* small_set;

	while(stil != -1 && scanf("%c",&c) !=EOF)
	{
    	AsubB=BsubA=disjoint=confiosed=equal=true;
		s_num.clear();
		temp.clear();
		set1.clear();
		set2.clear();

		 if(c>='0'&& c<='9')
		   s_num.push_back(c);

	do
       {
		while(scanf("%c",&c) != EOF && c!=' '  && c!='\n')
    	{
    		s_num.push_back(c);
    	}
    
    	ss<<s_num;
    	ss>>num;  ss.clear();
    	set1.push_back(num);
    	s_num.clear();
       }while(c != '\n');


       do
    	{

        while((stil=scanf("%c",&c)) == 1 && c!=' ' && c != '\n')
       	{
       		s_num.push_back(c);
       	}
       	
       	ss<<s_num;
       	ss>>num;  ss.clear();
       	set2.push_back(num);
       	s_num.clear();

    	} while(c != '\n' && stil !=-1);

       len1=set1.size();
       len2=set2.size();

	   sort(set1.begin(),set1.end());
	   sort(set2.begin(),set2.end());



       int min;
       if(len1 < len2)
	   {
		   small_set=&set1;
		   min=len1;
		   st_it=set2.begin();
		   end_it=set2.end();
	   }
       else
	   {
		   small_set=&set2;
    	   min=len2;
		   st_it=set1.begin();
		   end_it=set1.end();
	   }

       for(int i=0 ;i<min;i++)
       {
		   if( !binary_search( st_it, end_it, (*small_set)[i] ) )
    	    {
    	    	equal=false;
    	    	AsubB=false;
    	    	BsubA=false;
    	    }
    	    else
    	    	disjoint=false;

       }

       if(equal)
       {
    	   if(len1==len2)
    		   printf("A equals B\n");
    	   else if(len1 < len2)
    		   printf("A is a proper subset of B\n");
    	   else
    		   printf("B is a proper subset of A\n");

       }

	   else if(disjoint)
    	   printf("A and B are disjoint\n");
            
	   else
    	   printf("I'm confused!\n");

     }

return 0;

}





