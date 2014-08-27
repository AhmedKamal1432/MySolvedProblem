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

vector<vi> arr;
int n;

void mv(int a,int b){
    LOOP(i,n){
        LOOP(k,SZ(arr[i])){
            if(arr[i][k] == a){
                int sz = SZ(arr[i]);
                LOOPP(j,k+1,sz){
                    arr[arr[i][j]].push_back(arr[i][j]);
                }
                LOOPP(j,k,sz){
                    arr[i].pop_back();
                }
                break;
            }
        }
    }
    
        LOOP(i,n){
           LOOP(k,SZ(arr[i])){
               if(arr[i][k]== b){
                   arr[i].push_back(a);
                   break;
               }
           }
        }
}
void mn(int a,int b){
    LOOP(i,n){
        LOOP(k,SZ(arr[i])){
            if(arr[i][k] == a){
                int sz =SZ(arr[i]);
                LOOPP(j,k+1,sz){
                    arr[arr[i][j]].push_back(arr[i][j]);
                }
                LOOPP(j,k,sz){
                    arr[i].pop_back();
                }
                break;
            }
        }
    }
        LOOP(i,n){
           LOOP(k,SZ(arr[i])){
               if(arr[i][k]== b){
                   int sz =SZ(arr[i]);
                    LOOPP(j,k+1,sz){
                        arr[arr[i][j]].push_back(arr[i][j]);
                    }
                    LOOPP(j,k+1,sz){
                        arr[i].pop_back();
                    }

                   arr[i].push_back(a);
                   break;
               }
           }
        }


}
void pv(int a,int b){
    vi p(1,a);
        LOOP(i,n){
        LOOP(k,SZ(arr[i])){
            if(arr[i][k] == a){
                int sz = SZ(arr[i]);
                LOOPP(j,k+1,sz){
                    p.push_back(arr[i][j]);
                }
                LOOPP(j,k,sz){
                    arr[i].pop_back();
                }
                break;
            }
        }
    }
        
        LOOP(i,n){
           LOOP(k,SZ(arr[i])){
               if(arr[i][k]== b){
                   LOOP(t,SZ(p))
                       arr[i].push_back(p[t]);
                   break;
               }
           }
        }
   

}
void pn(int a,int b){
    vi p(1,a);
        LOOP(i,n){
        LOOP(k,SZ(arr[i])){
            if(arr[i][k] == a){
                int sz = SZ(arr[i]);
                LOOPP(j,k+1,sz){
                    p.push_back(arr[i][j]);
                }
                LOOPP(j,k,sz){
                    arr[i].pop_back();
                }
                break;
            }
        }
    }
    LOOP(i,n){
           LOOP(k,SZ(arr[i])){
               if(arr[i][k]== b){
                    int sz = SZ(arr[i]);
                    LOOPP(j,k+1,sz){
                        arr[arr[i][j]].push_back(arr[i][j]);
                    }
                    LOOPP(j,k+1,sz){
                        arr[i].pop_back();
                    }
                    LOOP(t,SZ(p))
                        arr[i].push_back(p[t]);
                    break;
               }
           }
        }


}
bool valid(int a, int b){
    bool g = true;
    if(a == b)
        return false;
    int ai,bi;
    LOOP(i,n){
        LOOP(j,SZ(arr[i]))
        if(arr[i][j]== a)
            ai = i;
        else if(arr[i][j] == b)
            bi = i;
    }
    return ai != bi;
}
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
#endif

        sc(n);
        arr.assign(n,vi(1,0));
        LOOP(i,n)
            arr[i][0] = i;
        string s;
        
        while(cin>>s && s!="quit"){
            int a,b;
            if(s == "move"){
                sc(a);  cin>>s; sc(b);
                if(valid(a,b)){
                if(s=="onto")
                    mn(a,b);
                else
                    mv(a,b);
                }
            }
            else{
                sc(a);  cin>>s; sc(b);
                if(valid(a,b)){
                if(s=="onto")
                    pn(a,b);
                else
                    pv(a,b);
                }
            }                    
        }
        
        LOOP(i,n){
            printf("%d:",i);
            LOOP(k,SZ(arr[i])) 
               printf(" %d",arr[i][k]);
            printf("\n");
        }
        

return 0; 
}
