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
 //   freopen("input.txt","r",stdin);
 //   freopen("output.txt","w",stdout);


int mat[100][100];
int tst;
scanf("%d",&tst);

for(int ts=0; ts<tst; ts++)
{
	if(ts>0)
		printf("\n");

 int V,exit,tim,M;
 scanf("%d\n%d\n%d",&V, &exit, &tim);

	 for(int i=0;i<V;i++)
		 for (int k = 0; k < V; k++)
		 {
			mat[i][k]=999999;

			if(i==k)
				mat[i][k]=0;
		 }

	 scanf("%d",&M);
     int a,b,t;
	 for(int k=0;k<M;k++)
	 {
		 scanf("%d %d %d\n",&a,&b,&t);
		 if(mat[a-1][b-1]>t)
			 mat[a-1][b-1]=t;
	 }


		for (int k = 0; k < V; k++)
			for (int i = 0; i < V; i++)
				for (int j = 0; j < V; j++)
					mat[i][j] = min(mat[i][j], mat[i][k] + mat[k][j]);

int num=0;
for(int i=0; i<V;i++)
{
 if(mat[i][exit-1] <= tim)
	 num++;
}

printf("%d\n",num);
}

return 0;
}
