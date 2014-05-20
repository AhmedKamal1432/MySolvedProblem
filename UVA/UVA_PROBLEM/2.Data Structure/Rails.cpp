#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<iostream>
#include<sstream>
#include<cstring>
#include<vector>
#include<list>
#include<stack>
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
  //  freopen("input.txt","r",stdin);
 //   freopen("output.txt","w",stdout);

int N;
scanf("%d",&N);
while(N != 0)
{
    stack<int> A_st,station;
	vector<int> arr;
	arr.assign(N,0);
	while(1)
	{
	scanf("%d",&arr[0]);
	if(arr[0]==0){		
		scanf("%d",&N);
		printf("\n");
		break;
	}
	 
	for(int i=1;i<N;i++)
	  scanf("%d",&arr[i]);

	for (int i = N; i > 0; i--)
		A_st.push(i);

	bool good=true;
	for (int i = 0; i < N; i++)
	{
		if(station.size()==0 || arr[i] != station.top() )
		{
			if(A_st.size() ==0)
			{good =false; break;}
			while(A_st.size() > 0)
			{
				station.push(A_st.top());
				A_st.pop();
				if(arr[i] == station.top()){
					station.pop();
					break;
				}
				if(A_st.size()==0){
					good=false;
					break;
				}
			}
		}
		else
			station.pop();
	}

	if(!good)
		printf("No\n");
	else
		printf("Yes\n");

	}
}


return 0; 
}
