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

#define ALL(v)              ((v).begin()), ((v).end())
#define SZ(v)               ((int)((v).size()))
#define CLR(v, d)           memset(v, d, sizeof(v))
#define REP(i, n)       for(int i=0;i<(int)(n);++i)
#define LOOP(i,b, n)        for(int i=(b);i<(int)(n);++i)

#define PB  push_back
typedef vector<double> VD;
typedef vector<string> VS;

int gcd(int a, int b) {
    return (b == 0 ? a : gcd(b, a % b));
}
const int MaxN = 100000;
int loD[MaxN];
vector<int> primes;

void sieve() {
    for (int i = 1; i < MaxN; i++)loD[i] = i;
    for (int i = 2; i <= MaxN; i++) if (loD[i] == i)
            for (int j =  i; j <= MaxN; j += i) if (loD[j] == j)
                    loD[j] = i;
}

void factorize(int n) {
    while (n != 1) {
        printf("%d", loD[n]);

        n /= loD[n];

        if (n > 1)
            printf(" x ");

    }
    printf("\n");
}

void factorize2(int n) {
    int tmp = n;
    for (int i = 2; i  <= (n/i)+1 && tmp != 1; i++) {
            while (tmp % i == 0) {
                printf("%d", i);
                tmp /= i;
                if (tmp > 1)
                    printf(" x ");
            }
        
    }
    if (tmp != 1)
        printf("%d", tmp);
    printf("\n");
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
#endif
    int n;
//    sieve();
    while (sc(n) != EOF && n != 0 ) {
        if (n < 0)
            printf("%d = -1 x ", n);
        else
            printf("%d = ", n);

    factorize2(abs(n));
    }
    return 0;
}
