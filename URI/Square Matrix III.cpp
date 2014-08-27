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

void print(int n){
    LOOP(i,n)
    printf(" ");
}
int main()
{
#ifndef ONLINE_JUDGE
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
#endif

        int n;
        while(cin >> n && n!=0){
            vector<vi> arr (n,vi(n,1));
            LOOP(i,n)
              LOOP(k,n){
                if(k ==0 && i!=0)
                    arr[i][k] = (arr[i-1][k] <<1);
                else if(k!=0)
                    arr[i][k] =arr[i][k-1] <<1;
               }   
            
            int big = (1<<(n-1))<<(n-1);
            stringstream ss ;string s;
            ss<<big; ss>>s; ss.clear();
            int t = SZ(s);
            LOOP(i,n){
                LOOP(k,n){
                    if( k== 0){
                        ss<<arr[i][k]; ss>>s;ss.clear();
                        print(t-SZ(s));
                        printf("%d",arr[i][k]); 
                    }
                    else{
                        ss<<arr[i][k]; ss>>s;ss.clear();
                        print(t-SZ(s)+1);
                        printf("%d",arr[i][k]); 
                    }
                }
                printf("\n");
            }
            printf("\n");
        
        }
return 0; 
}
