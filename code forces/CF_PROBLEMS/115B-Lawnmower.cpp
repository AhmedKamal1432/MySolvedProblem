/*
*
* solved by Ahmed Kamal
*/
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

typedef long long int LL ;
#define vi vector<int>
#define ii pair<int,int>
#define vii vector< pair<int,int> >
#define sc(x) scanf("%d",&x)
double const Epsilon = 2.22045e-016;

#define ALL(v)				((v).begin()), ((v).end())
#define SZ(v)				((int)((v).size()))
#define CLR(v, d)			memset(v, d, sizeof(v))
#define LOOP(i, n)		for(int i=0;i<(int)(n);++i)

#define PB	push_back
typedef vector<double>    VD;
typedef vector<string>    VS;

int main()
{
  //  freopen("input.txt","r",stdin);
 //   freopen("output.txt","w",stdout);
int n,m;sc(n);sc(m);
vector<string> arr(n);
LOOP(i,n)
 cin>>arr[i];
bool hash[200];
CLR(hash,false);
LOOP(i,n){
	if(find(ALL(arr[i]),'W')!= arr[i].end())
		memset(hash,true,i+1*sizeof(bool));
}
int count =0;
int ind=0,temp;
LOOP(i,n){
	if(hash[i] && (i%2) == 0){
		temp=-1;
		for (int k = m-1; k >= 0; --k)
			if(arr[i][k]=='W'){
			 temp=k;
				break;
			}
		if(temp !=-1){
		count += abs(temp -ind);//row steps
		ind =temp;
		}
		temp=ind;
		if(i<n-1){
			for (int k = m-1; k > ind; --k)
				if(arr[i+1][k]=='W'){
					temp=k;
					break;
				}
			count += abs(temp -ind); //next row preparing
			ind =temp;
			count++; //down step
		}

	}
	else if(hash[i] && (i%2) == 1){
		temp=-1;
		for (int k = 0; k <m; ++k)
			if(arr[i][k]=='W'){
			 temp=k;
				break;
			}
		if(temp !=-1){
		count += abs(temp -ind);//row steps
		ind =temp;
		}
		temp=ind;
		if(i<n-1){
			for (int k = 0; k <ind; ++k)
				if(arr[i+1][k]=='W'){
					temp=k;
					break;
				}
			count += abs(temp -ind); //next row preparing
			ind =temp;
			count++; //down step
		}

	}
	else{
		count--;
		break;
	}
}
count = max(0,count);
printf("%d\n",count);
return 0;
}

