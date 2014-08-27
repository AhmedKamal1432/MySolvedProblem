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

vector<vi> frd;
map<string,int> mp;
vector<vi> comp;


int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
#endif

        int k,n,m,q;
        scanf("%d %d %d %d",&k,&n,&m,&q);
        comp.assign(m,vi(n+m,0));
        frd.assign(k,vi(n+m,0));
        VS bas_arr(n,""),com_arr(m,"");
        string s;
        LOOP(i,n){
            cin>>s;
            bas_arr[i] = s;
            mp[s] = i+m;
            
        }
        
        /////// get comp to basic
        string tet=" ";
        cin>>s;
        //neglect : 
        LOOP(i,m){
            if( i> 0)
                s=tet;
             s.erase(s.end()-1 );
            mp[s] = i;    
           cin>>tet;
            while(find(ALL(bas_arr),tet) !=bas_arr.end()){
                int b ;sc(b);
                comp[mp[s]][mp[tet]] = b;
                cin.ignore();
                 cin>>tet;
            }
        }
        
        stringstream ss; 
        int b ;
        ss<<tet; ss>>b; ss.clear();
        LOOP(i,q){
            if(i > 0)
                sc(b);
            b--;
             cin>>s;
             frd[b][mp[s]]++;
             LOOP(c,m){
                 bool good =true;
                 LOOP(v,m+n){
                     if(frd[b][v] < comp[c][v]){
                         good= false;
                         break;
                     }
                 }
                 if(good){
                     frd[b][c]++;
                     LOOP(v,m+n){
                      frd[b][v] -=comp[c][v];
                     }
                     break;
                 }             
             }
        }
        LOOP(i,k){
         map<string ,int> ans;
         VS ans2;
         map<string ,int>::iterator it = mp.begin();
         LOOP(v,n+m){
             if(frd[i][v] > 0){
         map<string ,int>::iterator it = mp.begin();
         LOOP(ttt,n+m){
             if(it->second == v)
                 break;
             it ++;
         }
                 ans[(it)->first] = frd[i][v];
                 ans2.push_back((it)->first);                         
             }
             
         }
         sort(ALL(ans2));
             printf("%d\n",SZ(ans2));
             LOOP(v,SZ(ans2)){
                 printf("%s %d\n",ans2[v].c_str(),ans[ans2[v]]);
             }
        }
        
return 0; 
}
