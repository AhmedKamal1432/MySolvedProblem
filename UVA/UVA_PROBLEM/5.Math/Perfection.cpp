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

typedef long long int llint ;
#define vi vector<int> 
#define ii pair<int,int> 
#define vii vector< pair<int,int> > 
#define sc(x) scanf("%d",&x)

int main()
{
  //  freopen("input.txt","r",stdin);
 //   freopen("output.txt","w",stdout);

 int N;
 printf("PERFECTION OUTPUT\n");
 while(sc(N)!= EOF && N!=0)
 {
	 vi arr;
	 for (int i = 1; i < N; i++)
	 {
		 if(N % i ==0)
			 arr.push_back(i);
	 }
	 int sum=0;
	 for (int i = 0; i < arr.size(); i++)
		 sum+=arr[i];
	 
	 stringstream ss;
	 string s;
	 ss<<N;
	 ss>>s;

	 if(sum == N)
	 {
		 for (int i = 0; i < 5-s.size(); i++)
			 printf(" ");
		 printf("%d  PERFECT\n",N);
	 }
	 else if(sum < N)
	 {
	  	 for (int i = 0; i < 5-s.size(); i++)
			 printf(" ");
		 printf("%d  DEFICIENT\n",N);
	 
	 }
	 else
	 {
	 	 for (int i = 0; i < 5-s.size(); i++)
			 printf(" ");
		 printf("%d  ABUNDANT\n",N);
	
	 }

 }
 printf("END OF OUTPUT\n");
return 0; 
}
