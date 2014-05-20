#include <iostream>
#include <string>
#include<algorithm>
#include<cstdio>
using namespace std;

void shortest(int**AdjMat,int V)
{for (int k = 0; k < V; k++)
	for (int i = 0; i < V; i++)
		for (int j = 0; j < V; j++)
			AdjMat[i][j] = min(AdjMat[i][j], AdjMat[i][k] + AdjMat[k][j]);


}



int main ()
{
	//freopen("input.txt","r",stdin);
  //freopen("output.txt","w",stdout);
int n,n2;
int x,y,a,b,c,d,source,dest;
cin>>n;
for(int i=0;i<n;i++)
{
	cin>>x>>y;
int **T=new int*[x];
int **D=new int*[x];
for(int j=0;j<x;j++)
	{
		T[j]=new int[x];
		D[j]=new int[x];
	}
for(int j=0;j<x;j++)
	for(int k=0;k<x;k++)
	{
		if(j==k)
	     {
		   T[j][k]=0;
	       D[j][k]=0;
         }
		else
     	{
		 T[j][k]=999999;
	     D[j][k]=999999;
        }
	}

	// fill in time and lenght
for(int j=0;j<y;j++)
	{
		cin>>a>>b>>c>>d;
		if(T[a-1][b-1] > c)
		{
		  T[b-1][a-1]=c;
		  T[a-1][b-1]=c;
		}

		if(D[a-1][b-1] > d)
		{
			D[a-1][b-1]=d;
			D[b-1][a-1]=d;
		}
	}


for (int k = 0; k < x; k++)
	for (int w = 0; w < x; w++)
		for (int j = 0; j < x; j++)

			{
				if(T[w][j]>T[w][k] + T[k][j])
					D[w][j]=D[w][k] + D[k][j];
				else if(T[w][j]==T[w][k] + T[k][j])
					D[w][j] = min(D[w][j], D[w][k] + D[k][j]);

				T[w][j] = min(T[w][j], T[w][k] + T[k][j]);
			}

cin>>n2;

for(int j=0;j<n2;j++)
	{
		cin>>source>>dest;
       if(T[source-1][dest-1]==999999)
	   cout<<"No Path.\n";
      else cout<<"Distance and time to reach destination is "<<D[source-1][dest-1]<<" & "<<T[source-1][dest-1]<<".\n";
    }

   if(i!=n-1)
   cout<<endl;
}
return 0;
}