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

vector<pair<int,ii> > arr;
void trans(){
    LOOP(i,SZ(arr))
      swap(arr[i].second.first,arr[i].second.second);   
}
void row(){
    int s,d; sc(s);sc(d);
    s--;d--;
    LOOP(i,SZ(arr)){
        if(arr[i].second.first == s)
            arr[i].second.first =d;
        else if(arr[i].second.first == d)
                arr[i].second.first = s;
    }
    
}

void col(){
    int s,d; sc(s);sc(d);
    s--;d--;
    LOOP(i,SZ(arr)){
        if(arr[i].second.second == s)
            arr[i].second.second =d;
        else if(arr[i].second.second == d)
                arr[i].second.second = s;
    }
    
}

void inc(){
    LOOP(i,SZ(arr))
    arr[i].first = (arr[i].first+1)%10;
}

void dec(){
    LOOP(i,SZ(arr))
    arr[i].first = (arr[i].first-1+10)%10;
}

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
#endif

        int tt;sc(tt);
    LOOP(t,tt){
        int n; sc(n);
        VS ss(n,string(n,'0'));
        LOOP(i,n)
        cin>>ss[i];
        //value ,(x,y)
       arr.assign(n*n,pair<int,ii>(0,ii(0,0)));
        LOOP(i,n)
           LOOP(j,n){
            arr[i*n+j] = make_pair(ss[i][j]-'0',make_pair(i,j));
          }
        
        //
        int m;sc(m);
        LOOP(M,m){
            string action ;
            cin>>action;
            switch(action[0]){
                case 't' : trans();
                    break;
                
                case 'r' :row();
                    break;
                    
                case 'c' :col();
                    break;
                    
                case 'i' :inc();
                    break;
                    
                case 'd' :dec();
                    break;
                
            }
            
        }
        
        LOOP(i,SZ(arr)){
            ss[arr[i].second.first][arr[i].second.second] = arr[i].first+'0';
        }
        printf("Case #%d\n",t+1);
        LOOP(i,n)
           cout<<ss[i]<<endl;
        cout<<endl;

    }
        
return 0; 
}
