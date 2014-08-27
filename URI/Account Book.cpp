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
double const EPS = 2.22045e-016;
#define INF (1<<29)

#define ALL(v)				((v).begin()), ((v).end())
#define SZ(v)				((int)((v).size()))
#define CLR(v, d)			memset(v, d, sizeof(v))
#define LOOP(i, n)		for(int i=0;i<(int)(n);++i)
#define LOOPP(i,b, n)		for(int i=(b);i<(int)(n);++i)

#define PB	push_back
typedef vector<double>    VD;
typedef vector<string>    VS;
int gcd(int a, int b) { return (b == 0 ? a : gcd(b, a % b)); }

int n,f;
short int dp[100000][42];
bool trans_in[50];
bool trans_out[50];
bool all;
int arr[50];

const int shift = 50000;
bool back(int sum,int i){
    if(i == n && sum ==f){
               all =true;
        return true;
    }
    else if(i == n && sum !=f)
        return false;
    if(dp[sum + shift][i] != -1)
        return dp[sum + shift][i];
    bool b1,b2;
    
    b2 = back(sum - arr[i],i+1);
    b1 = back(sum + arr[i],i+1);
    if(b1)
        trans_in[i]=true;
    if(b2)
        trans_out[i]=true;
    int rt =0;
    if(b1 ||b2)
        rt =1;
    dp[sum + shift ][i] =rt;
    return b1||b2;
}
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
#endif

    while(cin>>n>>f && !(n==0 && f==0)){
        CLR(dp,-1);
        CLR(trans_in,false);
        CLR(trans_out,false);
         all =false;
         LOOP(i,n)
            sc(arr[i]);
         back(0,0);
         if(all){
             LOOP(i,n){
                 if(trans_in[i] && trans_out[i])
                     printf("?");
                 else if(trans_out[i])
                     printf("-");
                 else
                     printf("+");
             }
         }
         else
             printf("*");         
         printf("\n");
        }
return 0; 
}
