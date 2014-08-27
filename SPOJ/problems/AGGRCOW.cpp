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
int N,C;
vi arr;
bool valid(int x){
    int cnt=1,last=arr[0];
    LOOP(i,1,N){
        if(arr[i] - last >= x){
            cnt++;
            last=arr[i];
            if(cnt >= C)
                return true;
        }
            
    }
    return false;
}

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
#endif

        int t;sc(t);
        while(cin>>N>>C){
            arr.assign(N,0);
            for(int i=0; i<N ;sc(arr[i++]));
            sort(ALL(arr));
            int s=0,e=arr[N-1];
            while(s < e){
                int mid = (s+e+1)/2;
                if(valid(mid))
                    s=mid;
                else
                    e=mid-1;
            }
            printf("%d\n",s);
        }
return 0; 
}
