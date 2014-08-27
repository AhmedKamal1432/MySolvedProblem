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

typedef long long int LL;
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
typedef vector<double> VD;
typedef vector<string> VS;

int gcd(int a, int b) {
    return (b == 0 ? a : gcd(b, a % b));
}

vector<pair<int, int > > factorize(int n) {
    int tmp = n;
    vector<pair<int, int> > res;
    for (int i = 2; i * i <= n && tmp != 1; i++) {
        if (tmp % i == 0) {
            pair<int, int> p = make_pair(i, 0);
            while (tmp % i == 0) {
                p.second++;
                tmp /= i;
            }
            res.push_back(p);
        }
    } 
    if(tmp!= 1)
        res.push_back(make_pair(tmp,1));
    return res;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
#endif

  int n;
  while(sc(n) != EOF){
        int ans = 0;
    LOOP(i,4,n+1){
     vii res =factorize(i);
     int n =SZ(res);
     if(n == 2)
         ans++;
    }
            printf("%d\n",ans);    

  }
    return 0;
}
