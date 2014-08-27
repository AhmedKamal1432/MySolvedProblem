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

vi arr;
int n,q;
        
int lower(int s,int e,int num){
    if(s >= e){
        if(arr[s] == num)
            return s;
        return -1;
    }
    int mid = (s+e)/2;
    if(arr[mid] <= num)
       return lower(mid,e,num);
    else
       return lower(s,mid-1,num); 
}
int upper(int s,int e,int num){
    if(s >= e){
        if(arr[s] == num)
            return s;
        return -1;
    }
    int mid = (s+e)/2;
    if(arr[mid] < num)
       return upper(mid+1,e,num);
    else
       return upper(s,mid,num); 
}

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
#endif

        while(cin>>n>>q){
            arr.assign(n,0);
            map<int,int> mp;
            REP(i,n){
              sc(arr[i]);
            }
            sort(ALL(arr));
             int x,ans;
            REP(i,q){
               sc(x);
               ans = upper(0,n-1,x);
               printf("%d\n",ans);
            }
        
        }
return 0; 
}
