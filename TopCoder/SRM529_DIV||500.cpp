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
map<string ,int> mp;

int calc(string s){
string d,a;
int i=0;
 while(s[i]=='X' || s[i]=='L')
	 d.push_back(s[i++]);
 a= s.substr(i,s.size()-i);
int n= mp[a]+mp[d];
return n;
}

bool cmp(string s,string ss){

	int sp1 = s.find(' ');
	int sp2 = ss.find(' ');

	if(sp1==-1 || sp2 == -1)
		return (s < ss);

	string r1,r2,n1,n2;
	r1 = s.substr(0,sp1); r2 = ss.substr(0,sp2);
	n1 = s.substr(sp1+1,s.size()-sp1); n2 = ss.substr(sp2+1,ss.size()-sp2);

	if (r1 != r2 )
		return (r1 < r2);

	return (calc(n1) < calc(n2) );

}

class KingSort
{
public:
	void j_map(){
		mp["X"]=10;mp["XX"]=20;mp["L"]=50;mp["XL"]=40;mp["XXX"]=30;
		mp["I"]=1;mp["II"]=2;mp["III"]=3;
		mp["IV"]=4;mp["V"]=5;mp["VI"]=6;mp["VII"]=7;
		mp["VIII"]=8;mp["IX"]=9;
	}

vector <string> getSortedList(vector <string> arr)
{
	j_map();
	sort(arr.begin(),arr.end(),cmp);
	return arr;
}
};

int main()
{
 //   freopen("input.txt","r",stdin);
 //   freopen("output.txt","w",stdout);
string b[]={"Richard I", "Richard II", "Richard III" };
vector<string> arr(b,b+3);
KingSort c;
c.getSortedList(arr);

return 0;
}

