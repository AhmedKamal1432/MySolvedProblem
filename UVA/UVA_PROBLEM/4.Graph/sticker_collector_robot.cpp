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

	char graph[100][100];
	int N,M,S;
	char c;
	while(scanf("%d %d %d",&N,&M,&S) != EOF && N != 0 && M!=0 && S!=0)
	{
		int cur_row,cur_col;
		int nex_row,nex_col;
		int stic=0;
		char cur_ornt;
		for (int i = 0; i < N; i++)
		{
			for(int k=0;k<M;k++)
			{
				scanf("\n");
			  	scanf("%c \n",&c);
			  	if(c=='N' || c=='S' || c=='L' || c=='O')
			  	{
			  		cur_row=i;
			  		cur_col=k;
			  		cur_ornt=c;
			  	}
			  	graph[i][k]=c;
			}
			scanf("\n");
		}
		scanf("\n");
		for(int q=0;q<S;q++)
		{
			scanf("%c",&c);
	  switch (c)
		{
				case 'F':
				{
					switch(cur_ornt)
					{
					case 'N':{
						nex_row = cur_row-1;
					    nex_col= cur_col;
					}
					break;
					case 'S':
					{
						nex_row = cur_row+1;
					    nex_col= cur_col;
					}
					break;
					case 'L': //East
					{
						nex_row = cur_row;
		                nex_col= cur_col+1;
					}
					break;
					case 'O': //West
					{
						nex_row = cur_row;
		                nex_col= cur_col-1;
					}
					break;
					}
				}
					break;

				case 'D':
				{
					switch (cur_ornt)
					{
						case 'N':{
							cur_ornt='L';
						}
							break;

						case 'S':{
							 cur_ornt='O';
								}
								break;

						case 'L':{
							cur_ornt='S';
								}
							break;

						case 'O':{
							cur_ornt='N';
								}
						break;
					  }
                   break;
				}

					case 'E':
					{
						switch (cur_ornt)
						{
							case 'N':{
								cur_ornt='O';
							}
								break;

							case 'S':{
								 cur_ornt='L';
									}
									break;

							case 'L':{
								cur_ornt='N';
									}
								break;

							case 'O':{
								cur_ornt='S';
									}
							break;
						}
					break;
				  }
				break;
			}//end of out switch
		if(c=='F')
		{
		 if(nex_row<0 || nex_row > N-1 || nex_col < 0 || nex_col > M-1)
			 continue;
		 if(graph[nex_row][nex_col] == '#')
			continue;
		 if(graph[nex_row][nex_col] == '*')
		 {
			 stic++;
			 graph[nex_row][nex_col] = '.';
		 }

		 cur_row =nex_row;
		 cur_col =nex_col;
		}

	 }

		printf("%d\n",stic);
	}


return 0; 
}
