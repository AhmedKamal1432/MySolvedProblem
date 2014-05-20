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
  //  freopen("output.txt","w",stdout);

int ts;
sc(ts);
int num;
	while(ts--)
	{
		int n; int index;
		sc(n); sc(index);
		queue<int> qu;
		vector<int> arr ;
		int pv;
		for (int i = 0; i < n; ++i) {
			sc(num);
			qu.push(num);
			arr.push_back(num);
			if(i==index)
				pv=num;
		}

		int time=1;
		int mx=9;
		while(true)
		{
			mx = * max_element(arr.begin(),arr.end());
			if(mx > pv){
				if(qu.front() == mx){
					qu.pop();
					time++;
					index--;
					arr.erase(max_element(arr.begin(),arr.end()) );
				}
				else{
					num = qu.front();
					qu.pop(); qu.push(num);
					if(index == 0)
						index =qu.size()-1;
					else
						index--;
				}
			}
			else{
				if(index == 0)
				   break;
				else if(qu.front()== mx ){
					qu.pop();
				   time++;
				   index--;
				   arr.erase(find(arr.begin(),arr.end(),mx));
				}
				else{
					num = qu.front();
					qu.pop(); qu.push(num);
					index--;
				}
			}
		}
		printf("%d\n",time);
	}

	return 0;
}

