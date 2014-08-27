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
bool found;
string s;
void back(int i, int j){
    if(i >=j){
     found =true;
        return ;
    }
    if( !isalpha(s[i])){
       back(i+1,j);
       return;
    }
    if(! isalpha(s[j]) ){
        back(i,j-1);
        return;
    }
    if(tolower(s[i]) == tolower(s[j]) ){
        back(i+1,j-1);
        return;
    }
    return ;
}
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
#endif
        getline(cin,s);
        while(s!="DONE"){
            found =false;
            back(0,SZ(s)-1);
            if(found)
                printf("You won't be eaten!\n");
            else
                printf("Uh oh..\n");
        getline(cin,s);
            
        }

return 0; 
}

