#include <iostream>
#include<cstdio>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;

#define REP(i,n) for(int i=0; i< n ;i++)
#define ALL(arr)  arr.begin(), arr.end() 
int main (){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int t; cin>>t;
    REP(ts,t){
        int n,m,ans=0;
        cin>>n>>m;
        REP(j,n){
            int tc,iv;
            cin>>tc>>iv;
            if(j==0)tc=0;
            ans=max(ans,iv*m-tc);
            
        }
        cout<<"Case "<<ts+1<<": "<<ans<<endl;
    }
       
    return 0;}
