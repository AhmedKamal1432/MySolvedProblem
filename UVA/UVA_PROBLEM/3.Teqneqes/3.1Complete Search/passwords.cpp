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

VS words;
void back(string rule,string pass,int pos){
    if(pos == SZ(rule)){
        cout<<pass<<endl;
        return;
    }
    if(rule[pos] == '#'){//word
        REP(i,SZ(words))
           back(rule,pass+words[i],pos+1);
    }
    else{   //digit
        REP(i,10)
            back(rule,pass+char('0'+i),pos+1);     
    }
    return;
}
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
#endif
        int n;
        while(sc(n)!=EOF){
            printf("--\n");
            words.assign(n,"");
            REP(i,n)
              cin>>words[i];
            int m;  sc(m);
            REP(i,m){
                string rule;
                cin>>rule;
                back(rule,"",0);
            }
        }
return 0; 
}
