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
double const EPS = 2.22045e-05;
#define INF (1<<29)

#define ALL(v)              ((v).begin()), ((v).end())
#define SZ(v)               ((int)((v).size()))
#define CLR(v, d)           memset(v, d, sizeof(v))
#define REP(i, n)       for(int i=0;i<(int)(n);++i)
#define LOOP(i,b, n)        for(int i=(b);i<(int)(n);++i)

#define PB  push_back
typedef vector<double>    VD;
typedef vector<string>    VS;
int gcd(int a, int b) { return (b == 0 ? a : gcd(b, a % b)); }
double const pi = 3.14159265358979323846264338327950; 
int f,n;
vi arr;
bool valid(double b){
    if((b-0.0) < EPS )
        return true;
    LL num = 0;
    for(int i=0;i<n && num <= f ;i++){
        num+=floor((((float)(arr[i]*arr[i]))*pi)/b);
   }
   if(num >f)
        return true;
    return false;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
#endif
        int t;sc(t);
        while(t--){
            sc(n);sc(f);
            arr.assign(n,0);
            REP(i,n)
            sc(arr[i]);
            int b=200;
            int mn =*max_element(ALL(arr)); 
            double s=0.0; 
            double e = mn*mn*pi;
            double siz =(s+e)/2;
            double mid;
            while(abs(e - s) > EPS){
                mid = (e+s)/2;
               if(valid(mid))
                   s = mid;
               else
                   e= mid;
            }
            printf("%.4f\n",s);
        }
        
return 0; 
}