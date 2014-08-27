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
#define REP(i, n)		for(int i=0;i<(int)(n);++i)
#define LOOP(i,b, n)		for(int i=(b);i<(int)(n);++i)

#define PB	push_back
typedef vector<double>    VD;
typedef vector<string>    VS;
int gcd(int a, int b) { return (b == 0 ? a : gcd(b, a % b)); }
bool sorted(vi arr){
    REP(i,SZ(arr)-1){
        if(arr[i+1] < arr[i])
            return false;
    }
    return true;
}
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
#endif
        int n;sc(n);
        vi arr(n,0),temp; int b=-1,e=-1;
        REP(i,n)
          sc(arr[i]);
        REP(i,n-1){
            if(arr[i+1] < arr[i]){
                b=i;
                while(i< n-1 && arr[i+1] < arr[i]){
                    temp.push_back(arr[i]);
                      i++;
                }
                temp.push_back(arr[i]);
                e=i;
            }
        }
        reverse(ALL(temp));
        int i = 0;
        vi ans;
        while(i < n){
            if(i == b){
                REP(g,SZ(temp)){
                ans.push_back(temp[g]);
                i++;
                }            
            }
            else{
            ans.push_back(arr[i]);
            i++;
            }
        }
        if(b == -1){
            b++;e++;
        }
        if(sorted(ans))
            printf("yes\n%d %d\n",b+1,e+1);
        else
            printf("no\n");
        
return 0; 
}
