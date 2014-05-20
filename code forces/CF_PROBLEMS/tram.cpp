/*
 * tram.cpp
 *
 *  Created on: Nov 19, 2013
 *      Author: root
 */




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
 //   freopen("input.txt","r",stdin);
 //   freopen("output.txt","w",stdout);

int n;
scanf("%d",&n);
int crnt=0;
int max=0;

int in,out;
while(n--)
{
	scanf("%d %d",&out,&in);
 	 crnt = crnt+in-out;
 	 if(crnt>max)
 		 max=crnt;
}

printf("%d\n",max);
return 0;
}
