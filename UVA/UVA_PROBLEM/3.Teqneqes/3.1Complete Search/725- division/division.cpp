#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
#include<string>
#include<map>
#include<sstream>
#include<cmath>
using namespace std;



bool isdiff(int st,int nd)
{
	int arr[20];

	for (int i = 0; i < 20; i++)
	 arr[i]=0;
	
	stringstream ss1,ss2;
 
	string s1,s2;
 
	ss1<<st;
 
	ss1>>s1;

 ss2<<nd;
 ss2>>s2;

 int len1 = s1.size();
 int len2 = s2.size();
 
 if(len1 == 4)
	 arr['0'-'0']++;
 
 if(len2 == 4)
 {
   arr['0'-'0']++;

   if(arr['0'-'0'] >1)
	   return false;
 }

 for (int i = 0; i < len1; i++)
 {
  arr[s1[i]-'0']++;

   if(arr[s1[i]-'0'] >1)
	   return false;
  
 }

 for (int i = 0; i < len2 ;i++)
 {
	  arr[s2[i]-'0']++;

   if(arr[s2[i]-'0'] >1)
	   return false;
 
 }

 return true;
}

int main()
{
//	freopen("input.txt","r",stdin);
//	freopen("output.txt","w",stdout);

	int tim;
	int n;
	int test;
	vector <int> nomr;
	int demn;

	int cas=1;
	while (scanf("%d",&n)!=EOF && n!=0)
	{
		if(cas>1)
		printf("\n");
	
		nomr.clear();
		int upper = ceil(98765.0/(float) n);

		for (int i = 1234; i < upper; i++)
		{
	       if ( isdiff(i,i*n) )
			   nomr.push_back(i*n);
		}

		if(nomr.size() == 0)
			printf("There are no solutions for %d.\n",n);
		else
		{
			for (int i = 0; i < nomr.size(); i++)
			{
				if ( (nomr[i]/10000) > 0)
					printf("%d /",nomr[i]);
				else
					printf("0%d /",nomr[i]);

				demn=nomr[i]/n;

				if ( (demn/10000) > 0)
					printf(" %d",demn);
				else
					printf(" 0%d",demn);

				printf(" = %d\n",n);
			}
		}
	cas++;
	}

				

	return 0;
}