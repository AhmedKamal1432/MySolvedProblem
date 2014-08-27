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
    } if(tmp > 1) res.PB(make_pair(tmp,1));
    return res;
}

LL get_powers(LL n, LL p)
{
    LL res = 0;
    for (LL power = p ; power <= n ; power *= p)
        res += n/power;
    return res;
}
int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
#endif
    LL n, f;
    while (cin >> f >> n) {
        vii ans = factorize(n);
        LL sz= SZ(ans);
        bool g = true;
        REP(i,sz){
         LL p= get_powers(f,ans[i].first);
         if(p < ans[i].second)
             g=false;
        }
        if(g)
            printf("%d divides %d!\n",n,f);
        else
            printf("%d does not divide %d!\n",n,f);

    }

    return 0;
}
