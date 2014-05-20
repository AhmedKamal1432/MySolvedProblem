#include <cstdio>
#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include<algorithm>
using namespace std;

int main ()
{
	int hash[101];	

	
	//freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
	
	vector<int>roads;
	int r1,r2,r3;
	int sum,poss;
	float avr;
	int cas=1;
	int arr[100][100];
	while(scanf("%d %d",&r1,&r2) != EOF && r1!=0 )
	{
		for (int i = 0; i < 101; i++)
			hash[i]=0;
		
		roads.clear();

		hash[r1]=1;
		roads.push_back(r1);
        hash[r2]=1;
		roads.push_back(r2);
		sum=0;
		poss=0;

		while (scanf("%d %d",&r1,&r2) != EOF && r1!=0)
		 {
			 hash[r1]=1;
			 hash[r2]=1;
		  roads.push_back(r1);
          roads.push_back(r2);
		 }

		int t=roads.size();
		int numNodes=0;
		for (int i = 0; i < 101; i++)
		{
			if(hash[i]==1)
			numNodes++;
		}
		
		int nodes=numNodes;
		int pvt;
		for (int i = 1; i <101; i++)
		{
			if (hash[i]==0&& numNodes>0)
			{
				for (int m = i; m < 101; m++)
					if (hash[m]==1)
					{
						pvt=m;
					    break;
					}	

				for (int k = 0; k < t; k++)
				{
					if(roads[k]==pvt)
						roads[k]=i;
				}
				hash[i]=1;
				hash[pvt]=0;
				
			}
			else if (hash[i]==1)
				numNodes--;
			{

			}
		}
		

		
		for (int i = 0; i < nodes; i++)
			for (int k = 0; k < nodes; k++)
			   arr[i][k]=99999;

		for (int i = 0; i < nodes; i++)
			arr[i][i]=0;

		for (int i = 0; i < t-1; i+=2)
			arr[roads[i]-1][roads[i+1]-1]=1;

		for (int k = 0; k < nodes; k++)
			for (int i = 0; i < nodes; i++)
				for (int j = 0; j < nodes; j++)
					arr[i][j] = min(arr[i][j], arr[i][k] + arr[k][j]);

		for (int i = 0; i < nodes; i++)
			for (int k = 0; k < nodes; k++)
			  sum+=arr[i][k];

        poss=nodes*(nodes-1);
       avr=(float)sum/(float)poss;
	   printf("Case %d: average length between pages = %.3f clicks\n",cas,avr);
	cas++;
	
	

	}

return 0;
}