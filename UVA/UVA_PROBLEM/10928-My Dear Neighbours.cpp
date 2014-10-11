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

#define ALL(v)              ((v).begin()), ((v).end())
#define SZ(v)               ((int)((v).size()))
#define CLR(v, d)           memset(v, d, sizeof(v))
#define REP(i, n)       for(int i=0;i<(int)(n);++i)
#define LOOP(i,b, n)        for(int i=(b);i<(int)(n);++i)

#define PB  push_back
typedef vector<double>    VD;
typedef vector<string>    VS;
int gcd(int a, int b) { return (b == 0 ? a : gcd(b, a % b)); }
vector<string> explode(string s,char c){
    string tmp="";
    vector<string> ans;
    REP(i,s.size()){
        if(s[i] != c)
            tmp.push_back(s[i]);
        else{
            if(tmp != "")
                ans.push_back(tmp);
            tmp="";
        }
    }
    if(tmp != "")
        ans.push_back(tmp);
    return ans;

}
void print_vector(vi arr){
    int n = SZ(arr);
    REP(i,n){
        if(i ==n-1)
            printf("%d\n",arr[i]);
        else
            printf("%d ",arr[i]);
    }

}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
#endif
        int t;sc(t);
        int p; string s;
        vi arr; 
        while(t--){
            int mn =1<<29;
            sc(p);
            arr.assign(p,0);
            REP(i,p){
                scanf("\n\n\n");
                getline(cin,s);
                VS ans = explode(s,' ');
                int sz = SZ(ans);
                arr[i]=sz;
                mn = min(mn,sz);
            }
            vi ans;
            REP(i,p){
                if(arr[i] == mn)
                   ans.push_back(i+1); 
            }
            print_vector(ans);
        
        }

return 0; 
}
