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
        string  gr[] ={"lios","etr","initis","liala","etra","inites"};
        VS arr;
        string s;
        while(cin>>s)
            arr.push_back(s);
        bool good =true;
        if(arr.size() == 1){
            good =false;
            LOOP(i,6){
              if(arr[0].find(gr[i]) != string::npos){
              good =true;
              break;
            }
          }
        }
        else{
           //type setting
            int type=-1;
            LOOP(i,3)
             if(arr[0].find(gr[i]) != string::npos){
              type  =0;
               break;
             }
             LOOPP(i,3,6)
             if(arr[0].find(gr[i]) != string::npos){
              type  =3;
               break;
             }
             if(type ==-1)
                 good =false;
             
             if(good){
             int n = SZ(arr);
             int it=0;
         
             //get adj
             while(it < n && arr[it].find(gr[type+0]) != string::npos){
                 it++;
             }
             // if there is no adjective
             int nadj = it;
             //if(nadj==0)
              //   good =false;
            
             //get noun    
             while(it < n && arr[it].find(gr[type+1]) != string::npos){
                 it++;
             }
           
             int nnon = it-nadj;
             if(nnon != 1)
                 good =false;


             //get verb
             while(it < n && arr[it].find(gr[type+2]) != string::npos){
                 it++;
             }

             int nvrb = it -(nadj-nnon);
             if(it !=n)
                 good =false;
             }  
        }
           if(good)
                 printf("YES\n");
             else
                 printf("NO\n");
        

return 0; 
}
