/*
*
* solved by Ahmed Kamal
*/
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <iostream>
#include <sstream>
#include <cstring>
#include <vector>
#include <list>
#include <map>
#include <set>
#include <bitset>
#include <queue>
#include <stack>
#include <utility>
#include <algorithm>
#include <functional>

using namespace std;

typedef long long int LL ;
#define vi vector<int> 
#define ii pair<int,int> 
#define vii vector< pair<int,int> > 

#define ALL(v)				((v).begin()), ((v).end())
#define SZ(v)				((int)((v).size()))
#define CLR(v, d)			memset(v, d, sizeof(v))
#define REP(i, n)		for(int i=0;i<(int)(n);++i)
#define LOOP(i,b, n)		for(int i=(b);i<(int)(n);++i)

#define sc(x) scanf("%d",&x)
#define DSC(x) int x; scanf("%d",&x)
#define DSC2(x,y) int x,y; scanf("%d %d",&x,&y)

#define PB	push_back
#define MP  make_pair
double const EPS = 2.22045e-016;
#define INF (1<<29)


typedef vector<double>    VD;
typedef vector<string>    VS;
void print_v(vi arr){
int n = SZ(arr);
  REP(i,n)
    if(i == n-1)
       cout<<arr[i] <<endl;
     else
      cout<<arr[i]<<" ";
}

int gcd(int a, int b) { return (b == 0 ? a : gcd(b, a % b)); }


int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		//freopen("output.txt", "w", stdout);
	#endif
		DSC(T);
		REP(t,T){
			DSC2(x,y);
			int tmp  = min(x,y);
			y = max(x,y);
			x = tmp;
			map <int, string> mp;
			mp[1] = "Yakk";
			mp[2] = "Doh";
			mp[3] = "Seh";
			mp[4]  = "Ghar" ;
			mp[5] = "Bang" ;
			mp[6] = "Sheesh" ;
			string ans = "";
			if(x == y){
				switch(x){
					case 1 : ans = "Habb Yakk" ;
						break;
					case 2: ans = "Dobara";
						break;
					case 3: ans = "Dousa" ;
						break;
					case 4: ans = "Dorgy" ;
						break;
					case 5: ans = "Dabash";
						break;
					case 6: ans = "Dosh";
						break;
				}
			}
			else if(x == 5 && y == 6){
				ans = "Sheesh Beesh" ;
			}
			else{
				ans+= mp[y];
				ans.push_back(' ');
				ans+=mp[x];
			}
			cout<<"Case "<<t+1<<": "<<ans <<endl;
		}
	return 0; 
}
