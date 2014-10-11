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
bool fun(pair<int,pair<string,string> > a,pair<int,pair<string,string> > b){
    if(a.second.second == b.second.second)
        return a.first < b.first;
    if(a.second.second == "rat")
        return true;
    if(b.second.second == "rat")
        return false;

    if(b.second.second == "captain")
        return true;
    if(a.second.second == "captain")
        return false;
  
    if(a.second.second == "man" )
        return false;
    if(b.second.second == "man" )
        return true;
 
    return a.first < b.first;
                
}
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
#endif
        vector<pair<int,pair<string,string> > >arr;
        int n;
        sc(n);
        REP(i,n){
            string a,b;cin>>a>>b;
            arr.push_back(make_pair(i,make_pair(a,b)));
        }
        sort(ALL(arr),fun);
        REP(i,n)
        cout<<arr[i].second.first<<endl;
return 0; 
}
