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

int main()
{
#ifndef ONLINE_JUDGE
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
#endif
        int n,c,k;
        while(cin>>n>>c>>k  && !(n==0 && k ==0 && c==0)){
            int hash[10000];
            CLR(hash,0);
            int temp;
            LOOP(i,n)
                LOOP(i,c){
                sc(temp);
                hash[temp]++;
                }
            int mn = 1<<29;
            vi ans ;
            LOOPP(i,1,k+1){
                if(hash[i] == mn)
                    ans.push_back(i);
                else if(hash[i] < mn){
                    ans .clear();
                    ans.push_back(i);
                    mn = hash[i];
                }
            }    
       LOOP(i,SZ(ans)){
           if(i== SZ(ans)-1)
               printf("%d\n",ans[i]);
           else
               printf("%d ",ans[i]);
       }        
        }
return 0; 
}
