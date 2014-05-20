//#include<cstdio>
//#include<cstdlib>
//#include<cmath>
//#include<iostream>
//#include<sstream>
//#include<string>
//#include<vector>
//#include<map>
//#include<set>
//#include<bitset>
//#include<queue>
//#include<utility>
//#include<algorithm>
//#include<functional>
//
//using namespace std;
//
//#define vi vector<int>
//#define ii pair<int,int>
//#define vii vector< pair<int,int> >
//
//char grid[25][25];
//int Raw,Col;
//
//int dr[] = {1,-1,0, 0}; // S,E,N,W neighbors
//int dc[] = {0, 0,1,-1}; // trick to explore an implicit 2D grid graph
//
//
//int floodfill(int r, int c, char c1, char c2)
//{ // returns the size of CC
//if (r < 0 || r >= Raw || c < 0 || c >= Col) return 0;// outside the grid, prune
//
//if (grid[r][c] != c1 && grid[r][c] != '@') return 0; // this vertex does not have color c1, prune
//
//int ans = 1; // add 1 to ans because vertex (r, c) has c1 as its color
//
//grid[r][c] = c2; // now recolor vertex (r, c) to c2 to avoid cycling!
//
//for (int d = 0; d < 4; d++) // recurse to neighbors, see how neat the code is
//ans += floodfill(r + dr[d], c + dc[d], c1, c2); // with help of dr[] + dc[]
//
//return ans;
//}
//
//
//int main()
//{
//  // freopen("input.txt","r",stdin);
// //   freopen("output.txt","w",stdout);
//
//  int tst;
//  char c;
//  scanf("%d\n\n",&tst);
//  for(int T=0;T<tst;T++)
//  {
//	 scanf("%d",&Raw);
//	 Col=Raw;
//	 for(int i=0;i<Raw; i++)
//	 {
//		 scanf("\n\n");
//		 for(int k=0; k<Col; k++)
//		 {
//			 scanf("%c",&c);
//			 grid[i][k]=c;
//		 }
//	 }
//
//	int total=0;
//
//	 for(int i=0;i<Raw; i++)
//		 for(int k=0; k<Col; k++)
//		 {
//			 if(grid[i][k] == 'x')
//			 {
//			  floodfill(i,k,'x','.');
//			  			  total++;
//			 }
//		 }
//
//	 printf("Case %d: %d\n",T+1,total);
//  }
//
//return 0;
//}
