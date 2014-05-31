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
LL n,m;
cin>>n>>m;
string s; stringstream ss;
ss<<n; ss>>s; ss.clear();

LOOP(i,SZ(s)){
	int pv = s[i]-'0';
	for(int k =9 ; k > pv; k--){
		int j=i+1;
		for( ;j<SZ(s) ; j++){
			if(s[j] -'0'== k){
			//printf("j= %d\n",j);
				break;
			}
		}
		if(j== SZ(s) || (j == SZ(s)-1 && s[j] != k+'0')){
		//printf("dffd\n");
			continue;
		}

		if(j-i <= m){
			//printf("%d %d\n",i,j);
			for(int b=j; b>i;b--)
				swap(s[b],s[b-1]);
			//printf("%d %d",s[i],s[j]);
			m-=(j-i);
			break;
		}
	}
}

cout<<s;


return 0;
}

