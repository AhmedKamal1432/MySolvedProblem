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
double const Epsilon = 2.22045e-016;

#define ALL(v)				((v).begin()), ((v).end())
#define SZ(v)				((int)((v).size()))
#define CLR(v, d)			memset(v, d, sizeof(v))
#define LOOP(i, n)		for(int i=0;i<(int)(n);++i)

#define PB	push_back
typedef vector<double>    VD;
typedef vector<string>    VS;

int main()
{
  //  freopen("input.txt","r",stdin);
 //   freopen("output.txt","w",stdout);

string s; cin>>s;
int n=s.size();
bool c=false;
int st=0;
reverse(ALL(s));
LL sum=0;
LOOP(i,n-1){
	if(s[i]=='0' && !c){sum++; st=0; continue;}
	if(s[i]=='0' && c) {sum+=2; st=1;continue;}
	if(s[i]=='1' && !c){sum+=2; c=!c; st=2;continue;}
	if(s[i]=='1' && c) {sum++; st=3; continue;}
}

if( st != 0)sum++;
cout<<sum<<endl;

return 0;
}

