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

int main()
{
   // freopen("input.txt","r",stdin);
 //   freopen("output.txt","w",stdout);

float AdjMat[200][200];

int tst=1;
int V;
	while(scanf("%d",&V) != EOF && V!=0)
	{
	
		for (int i = 0; i < V; i++)
			for (int k = 0; k < V; k++)
			{
				AdjMat[i][k]=999999;
					
				if(i=k)
				{
					AdjMat[i][k]=0;
				}
			}
	

			vii points;
		int x,y;
		float wght;
		for (int i = 0; i < V; i++)
		{
			scanf("%d %d",&x,&y);
			points.push_back(ii(x,y));

			 for (int k = 0; k < i; k++)
		   {
			   wght=sqrt( abs(points[k].first - x) * abs(points[k].first - x) + abs(points[k].second - y)* abs(points[k].second - y)  );
			  AdjMat[i][k]=wght;
			  AdjMat[k][i]=wght;
		   }
		

		}


		
      for (int k = 0; k < V; k++) // common error: remember that loop order is k->i->j
		  for (int i = 0; i < V; i++)
			for (int j = 0; j < V; j++)
			{
				if(AdjMat[i][k] < AdjMat[i][j] && AdjMat[k][j] < AdjMat[i][j])
				{
				 AdjMat[i][j]=max(AdjMat[i][k],AdjMat[k][j]);
				}
			
			}
  
     			
			
			    printf("Scenario #%d\n",tst);
				printf("Frog Distance = %.3f\n\n",AdjMat[0][1]);

		tst++;
	}
return 0; 
}
