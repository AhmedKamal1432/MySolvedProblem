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
#define ii pair<int,int0> 
#define vii vector< pair<int,int> > 
#define sc(x) scanf("%d",&x)
double const EPS = 2.22045e-016;
#define INF (1<<29)

#define ALL(v)				((v).begin()), ((v).end())
#define SZ(v)				((int)((v).size()))
#define CLR(v, d)			memset(v, d, sizeof(v))
#define REP(i, n)		for(int i=0;i<(int)(n);++i)
#define LOOP(i,b, n)		for(int i=(b);i<(int)(n);++i)

#define PB	push_back
typedef vector<double>    VD;
typedef vector<string>    VS;
int gcd(int a, int b) { return (b == 0 ? a : gcd(b, a % b)); }

int n,k;
int sh = 50000;
int dp[100000][150];
int b = false;
vi arr;
string ans;
int back(int sum,int pos,string op){
    
    if(sum > 32000 || sum < -32000)
        return 0;
    if(pos == n){
        if(sum == k){
            ans = op;
            return 1;         
        }
        return 0;
    }
    if(dp[sum+sh][pos] != -1)
        return dp[sum+sh][pos];
    
    int ans = 0;
    ans+= back(sum+arr[pos],pos+1,op+'+');
    ans+= back(sum-arr[pos],pos+1,op+'-');
    ans+= back(sum*arr[pos],pos+1,op+'*');
    if(sum % arr[pos] == 0)
       ans+= back(sum/arr[pos],pos+1,op+'/');
    
    return dp[sum+sh][pos] =ans;
}
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
#endif
        int t;sc(t);
        while(t--){
            CLR(dp,-1);
            sc(n);
            arr.assign(n,0);
            REP(i,n)
              sc(arr[i]);
            sc(k);        
            ans = "-1";
            if(back(arr[0],1,"") == 0)
                printf("NO EXPRESSION\n");
            else{
                REP(i,n){
                    if(i == n-1)
                        printf("%d=%d\n",arr[i],k);
                    else
                    printf("%d%c",arr[i],ans[i]);
                }
            }
        }

return 0; 
}
