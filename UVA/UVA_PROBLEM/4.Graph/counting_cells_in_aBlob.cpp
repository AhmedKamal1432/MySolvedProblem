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

int grid[25][25];
int Raw,Col;

int dr[] = {1,1,0,-1,-1,-1, 0, 1}; // S,SE,E,NE,N,NW,W,SW neighbors
int dc[] = {0,1,1, 1, 0,-1,-1,-1}; // trick to explore an implicit 2D grid graph

int floodfill(int r, int c, char c1, char c2)
{ // returns the size of CC
if (r < 0 || r >= Raw || c < 0 || c >= Col) return 0;// outside the grid, prune

if (grid[r][c] != c1-'0') return 0; // this vertex does not have color c1, prune

int ans = 1; // add 1 to ans because vertex (r, c) has c1 as its color

grid[r][c] = c2; // now recolor vertex (r, c) to c2 to avoid cycling!

for (int d = 0; d < 8; d++) // recurse to neighbors, see how neat the code is
ans += floodfill(r + dr[d], c + dc[d], c1, c2); // with help of dr[] + dc[]
return ans;
}


int main()
{
  //  freopen("input.txt","r",stdin);
 //   freopen("output.txt","w",stdout);

  int tst;
  scanf("%d\n\n",&tst);
  for(int T=0;T<tst;T++)
  {
	  if(T>0)
		  printf("\n");

	  scanf("\n\n\n");
	  int i=0,k=0;
	  char c;
	  scanf("%c",&c);
	  while(c!='\n')
	  {
		  k=0;
		  while(c!='\n')
		  {
			  grid[i][k]=c-'0';
		    scanf("%c",&c);
		   k++;
		  }
		  scanf("%c",&c);
		  i++;
	  }

	   Raw=i;
	   Col=k;
	   vector <int>ans;
	  for(i=0;i<Raw;i++)
		  for(k=0;k<Col;k++)
		  {
			  ans.push_back(floodfill(i,k,'1','0'));
		  }

	 int max= *(max_element(ans.begin(),ans.end()));
	 printf("%d\n",max);
  }


return 0;
}
