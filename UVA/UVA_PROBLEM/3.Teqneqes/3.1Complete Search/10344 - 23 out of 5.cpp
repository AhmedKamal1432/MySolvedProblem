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
int gcd(int a, int b) { return (b == 0 ? a : gcd(b, a % b)); }

int c;
int arr[5];
int op[4];
int calc ()
{
	int a1,a2,a3,a4;
switch(op[0]){
case 0:a1 = arr[0]*arr[1];
	break;
case 1:a1= arr[0]+arr[1];
   break;
case 2:a1 = arr[0]-arr[1];
	break;
}

switch(op[1]){
case 0:a2 = a1*arr[2];
	break;
case 1:a2= a1+arr[2];
   break;
case 2:a2 = a1-arr[2];
	break;
}

switch(op[2]){
case 0:a3 = a2*arr[3];
	break;
case 1:a3= a2+arr[3];
   break;
case 2:a3 = a2-arr[3];
	break;
}

switch(op[3]){
case 0:a4 = a3*arr[4];
	break;
case 1:a4= a3+arr[4];
   break;
case 2:a4 = a3-arr[4];
	break;
}

if(a4 ==23){
//	printf("arr is  %d %d %d %d %d   ",arr[0],arr[1],arr[2],arr[3],arr[4]);
//	printf(" op %d %d %d %d\n",op[0],op[1],op[2],op[3]);

	return true;
}
return false;
}

bool found;
void back(int on){
	if(found)
		return;
 LOOP(i,3){
	op[on-1]=i;
	if(on==4){
       if(calc())
          found =true;
	}
	else
		back(on+1);
	//op.push_back(i);
	if(found)
		return;
 }

}

int main()
{
  //  freopen("input.txt","r",stdin);
 //   freopen("output.txt","w",stdout);
while(1){
found = false;
	scanf("%d %d %d %d %d",&arr[0],&arr[1],&arr[2],&arr[3],&arr[4]);
 if(arr[0]==0 &&arr[1]==0 &&arr[2]==0 &&arr[3]==0 &&arr[4]==0 )
          return 0;
sort(arr,arr+5);
do{
	 back(1);
	 if(found)
		 break;
}while(next_permutation(arr,arr+5));

 if(found)
   printf("Possible\n");
  else
	 printf("Impossible\n");
}


return 0;
}

