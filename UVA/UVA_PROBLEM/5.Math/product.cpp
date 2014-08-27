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
#define LOOP(i, n)		for(int i=0;i<(int)(n);++i)
#define LOOPP(i,b, n)		for(int i=(b);i<(int)(n);++i)

#define PB	push_back
typedef vector<double>    VD;
typedef vector<string>    VS;
int gcd(int a, int b) { return (b == 0 ? a : gcd(b, a % b)); }

string multi(char c,string s){
    reverse(ALL(s));
    int temp =0, n =SZ(s); 
    string ans="",ts; 
    stringstream ss;
    LOOP(i,n){
        int p = (c-'0') * (s[i]-'0');
        p+=temp;
        temp=0;
        ss<<p; ss>>ts; ss.clear();
        if(SZ(ts)==1)
            ans.push_back(ts[0]);
        else{
            ans.push_back(ts[1]);
            temp = ts[0] - '0';
        }
    }
    if(temp !=0)
        ans.push_back(temp+'0');

    while(SZ(ans) !=0){
        if(ans[SZ(ans)-1] =='0')
            ans.erase(ans.end()-1);
        else
            break;
    }

    reverse(ALL(ans));
    return ans;
}

string pluss (string s1,string s2){
    reverse(ALL(s1));
    reverse(ALL(s2));
    int div = abs(SZ(s1) - SZ(s2));
    if(SZ(s1) > SZ(s2)){
        LOOP(i,div)
        s2.push_back('0');
    }
    else{
        LOOP(i,div)
        s1.push_back('0');    
    }
    
    int temp =0;
    string ts;
    stringstream ss;
    string ans="";
    LOOP(i,SZ(s1)){
        int p = s1[i]-'0' +s2[i]-'0';
        p+=temp;
        temp=0;
        ss<<p; ss>>ts; ss.clear();
        if(SZ(ts)==1)
            ans.push_back(ts[0]);
        else{
            ans.push_back(ts[1]);
            temp = ts[0] - '0';
        }        
    }
    if(temp !=0)
        ans.push_back(temp+'0');
    
    while(SZ(ans) !=0){
        if(ans[SZ(ans)-1] =='0')
            ans.erase(ans.end()-1);
        else
            break;
    }
    
    reverse(ALL(ans));
    return ans;
}


int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
#endif
         string s1,s2;
        while (cin>>s1>>s2){
        
        string ans="";
            LOOP(i,SZ(s1)){
               string ml= multi(s1[SZ(s1)-1-i],s2);
               string zeros ="";
               LOOP(k,i)
                  zeros.push_back('0');
               ml = ml+zeros;
               ans = pluss(ml,ans);
            }
            if(SZ(ans) == 0)
                printf("0\n");
            else
            cout<<ans<<endl;
        }
        
        
return 0; 
}

