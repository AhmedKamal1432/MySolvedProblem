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

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
#endif
        int n;sc(n);
         int t=0;
    while(sc(n) != EOF){
             char c;
        VS arr;
        string s="";
  
        if(t >0)
            printf("\n");
        while(scanf("%c",&c) !=EOF){            
            if(isalpha(c)){
                c= tolower(c);
                s.push_back(c);
            }
            else{
                if( s == "endoftext")
                    break;
               if(s !="" ){
                   arr.push_back(s);
               }
               s="";
            }
        }
        map <string,int> mp;
        LOOP(i,SZ(arr)){
            if(mp.find(arr[i]) == mp.end())
                mp[arr[i]]=1;
            else
                mp[arr[i]]++;
        }
        VS ans;
        for(map<string,int> ::iterator it = mp.begin();it !=mp.end();it++){
            if(it->second == n)
                ans.push_back(it->first);
        }
        if(SZ(ans) != 0){
        sort(ALL(ans));
        LOOP(i,SZ(ans))
        cout<<ans[i]<<endl;
        }
        else
            printf("There is no such word.\n");
       
        t++;
        
      }
return 0; 
}
