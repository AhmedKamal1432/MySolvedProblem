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

char mp[17];
map<char,int> to_int;
void init(){
    LOOP(i,10){
       mp[i]=i+'0';
       to_int['0'+i]=i;
    }
    mp[10] = 'A';
    mp[11] = 'B';
    mp[12] = 'C';
    mp[13] = 'D';
    mp[14] = 'E';
    mp[15] = 'F';
    to_int['A'] = 10;
    to_int['B'] = 11;
    to_int['C'] = 12;
    to_int['D'] = 13;
    to_int['E'] = 14;
    to_int['F'] = 15;
            
}
string to_hex(string s){
    stringstream ss; LL num;
    ss<<s; ss>>num; ss.clear();
    string ans;
    int rem;
    if(num == 0){
        ans.push_back('0');
    }
    else{    
    while(num != 0){
        rem =num%16;
        ans.push_back(mp[rem]);
        num /=16;
    }
    }
    ans.push_back('x');
    ans.push_back('0');

    reverse(ALL(ans));

    return ans;
}
string to_dec(string s){
    reverse(ALL(s));
    LL sum =0;
    LOOP(i,SZ(s)){
        sum += (to_int[ toupper(s[i])])*(1LL<<(4*i));
    }
    stringstream ss; string ans;
    ss<<sum; ss>>ans;
    return ans;
}
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
#endif
        init();
        string s;
        while(cin>>s){
            if(s[0] == '-')
                break;
            string ans;
            if(SZ(s) > 2 &&  s[1] == 'x'){
              ans = to_dec(s.substr(2));
            }
            else{
               ans = to_hex(s);            
            }
            cout<<ans<<endl;
        }

return 0; 
}
