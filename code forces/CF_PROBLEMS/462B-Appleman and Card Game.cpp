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

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
#endif

        LL n; LL k; 
        cin>>n>>k;
        vector<LL> arr(100,0);
        string s;
        cin>>s;
        REP(i,SZ(s)){
            arr[s[i] -'A']++;
        }
        sort(ALL(arr));
        reverse(ALL(arr));
        LL v = k;
        LL ans = 0;
        int i = 0;
        while(v > 0){
            if(arr[i] < v){
                v-=arr[i];
                ans += (arr[i]*arr[i]);
            }
            else{
                ans +=(v*v);
                v=0;
            }
            i++;
        }
        cout<<ans<<endl;
return 0; 
}
