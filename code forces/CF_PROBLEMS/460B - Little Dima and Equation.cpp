
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
LL powk(int x, int p){
    LL ans = 1;
    REP(i,p)
    ans*=x;
    return ans;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
#endif
        LL a,b,c;
        cin>>a>>b>>c;
        vector<LL> arr;
        LOOP(i,1,82){
            LL x = LL(b * (LL)powk(i,(int)a) )+c;
            string s; stringstream ss;
            ss<<x; ss>>s; ss.clear();
            int sz=0;
            REP(j,SZ(s)){
                sz += (s[j]-'0');
            }
            if(sz == i && x > 0 && x< (LL)1000000000)
               arr.PB(x);         
        }
        //cout<<10e9;
        sort(ALL(arr));
        printf("%d\n",SZ(arr));
        int tmp =arr.size(); 
        REP(i,tmp){
            if(i == tmp-1)
                cout<<arr[i]<<endl;
            else
                cout<<arr[i]<<" ";
        }

return 0; 
}