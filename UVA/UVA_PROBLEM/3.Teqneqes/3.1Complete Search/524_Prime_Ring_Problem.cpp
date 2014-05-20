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

bool arkam[20];
int n;

int count1;
int arr[20];
bool isprime(int p)
{
 int prm =true;
 for (int i = 3	; i < p; i+=2)
	 if(p%i == 0){
		 prm=false;
		 break;
	 }
 return prm;
}

void fardi (int od);

void zawgi (int ev)
{
 	if(count1 < n)
 	{
 		for (int i = 3; i <= n; i+=2)
 			if( arkam[i]==false && isprime(i+ev)  )
 			{
 				arr[count1]=i;
 				count1++;
 				arkam[i]=true;
 				fardi(i);
 				arkam[i]=false;
 			}
 	}
 	if(count1==n && isprime(1+arr[n-1]))
 	{
 		for (int i = 0; i < n; ++i) {
			if(i==0)
			   printf("%d",arr[i]);
			else
				printf(" %d",arr[i]);
		}
 		printf("\n");
 	}
count1--;
}
void fardi (int od)
{
 	if(count1 < n)
 	{
 		for (int i = 2; i <= n; i+=2)
 			if( arkam[i]==false && isprime(i+od)  )
 			{
 				arr[count1]=i;
 				count1++;
 				arkam[i]=true;
 				zawgi(i);
 				arkam[i]=false;
 			}
 	}
 	if(count1==n && isprime(1+arr[n-1]))
 	{
 		for (int i = 0; i < n; ++i) {
			if(i==0)
			   printf("%d",arr[i]);
			else
				printf(" %d",arr[i]);
		}
 		printf("\n");
 	}
 	count1--;
}


int main()
{
   //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
  int cas=1;
  while(cin>>n)
  {
	  if(cas>1)
		  printf("\n");

	 printf("Case %d:\n",cas++);
   memset (arkam,false,sizeof(arkam));
   arkam[1]=true;
  // zawgi(3);
   arr[0]=1;
   count1++;
   fardi(1);
  }
return 0;
}

