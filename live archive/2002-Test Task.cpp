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
typedef vector<double> VD;
typedef vector<string> VS;

int gcd(int a, int b) {
    return (b == 0 ? a : gcd(b, a % b));
}

vector<pair<string, string> > logs, reg;

bool is_reg(string name) {
    REP(i,SZ(reg)){
        if(reg[i].first == name )
            return true;
    }
    return false;
}
string get_pass(string name){
    REP(i,SZ(reg)){
        if(reg[i].first == name )
            return reg[i].second;
    }
}
bool is_log(string name) {
    REP(i,SZ(logs)){
        if(logs[i].first == name )
            return true;
    }
    return false;
}
void logout(string name){
    REP(i,SZ(logs)){
        if(logs[i].first == name )
            logs.erase(logs.begin()+i);
    }

}
int main() {
#ifndef ONLINE_JUDGE
  // freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
#endif

    int n;sc(n);
    while(n--){
        string op,name,pass;
        cin>>op>>name;
        if(op == "register"){
            cin>>pass;
            if(is_reg(name))
                printf("fail: user already exists\n");
            else{
                reg.PB(make_pair(name,pass));
                printf("success: new user added\n");
            }
        }
        else if(op == "login"){
            cin>>pass;
           if(! is_reg(name))
               printf("fail: no such user\n");
           else{
               if(get_pass(name) != pass)
                   printf("fail: incorrect password\n");
               else{
                   if(is_log(name))
                       printf("fail: already logged in\n");
                   else{
                       logs.push_back(make_pair(name,pass));
                       printf("success: user logged in\n");
                   }
               }
           
           }
               
        }
        else{ //logout
            if(!is_reg(name))
                printf("fail: no such user\n");
            else{
                if(!is_log(name))
                    printf("fail: already logged out\n");
                else{
                    logout(name);
                    printf("success: user logged out\n");
                }
            }
        
        }
    }
    

    return 0;
}
