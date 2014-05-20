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
int gcd(int a, int b) { a=abs(a);b=abs(b);return (b == 0 ? a : gcd(b, a % b)); }

struct point {
	double x, y,z;// whenever possible, work with point_i
point(int _x, int _y,int _z) { x = _x, y = _y;z=_z; } // constructor (optional)
bool operator < (point other) const {// override ‘less than’ operator
if (x==other.x)// useful for sorting
   return y < other.y;// first criteria , by x-axis
return x < other.x;// second criteria, by y-axis
}
};

double dist(point p1, point p2) {
// hypot(dx, dy) returns sqrt(dx * dx + dy * dy)
return hypot(p1.x - p2.x, p1.y - p2.y); }
// Euclidean distance
// return double



struct point2 {
	int x, y;// whenever possible, work with point_i
point2(int _x, int _y) { x = _x, y = _y; } // constructor (optional)
bool operator < (point2 other) const {// override ‘less than’ operator
if (x==other.x)// useful for sorting
   return y < other.y;// first criteria , by x-axis
return x < other.x;
}
};
bool com(point a,point b){
return dist(a,point(0,0,0)) < dist(b,point(0,0,0));
}

int main()
{
  // freopen("input.txt","r",stdin);
 //   freopen("output.txt","w",stdout);
int n;
int cas=1;
while(sc(n) != EOF && n!=0)
{
	printf("Data set %d:\n",cas++);

	map<ii,vector<point> >mp;
	int x,y,z;
	LOOP(i,n){
		sc(x);sc(y);sc(z);
		int g= gcd(x,y);
		g= max(g,1);
		mp[make_pair(x/g,y/g)].push_back(point(x,y,z));
	}

	map<ii,vector<point> >::iterator it;
	for(it=mp.begin();it !=mp.end(); it++ )
		sort(it->second.begin(),it->second.end(),com);

	vector<point2> ans;
	for(it=mp.begin();it !=mp.end(); it++ ){
		int tall=it->second[0].z;
		for(int i=1;i< SZ(it->second) ;i++){
        if(it->second[i].z > tall)
        	 tall=it->second[i].z;
        else
        	ans.push_back(point2(it->second[i].x,it->second[i].y));
        }
		}
	 sort(ALL(ans));
	 if(SZ(ans) == 0)
		 printf("All the lights are visible.\n");
	 else{
		 printf("Some lights are not visible:\n");
       LOOP(i,SZ(ans)){
    	 printf("x = %d, y = %d",ans[i].x,ans[i].y);
    	 if(i==SZ(ans)-1)
    		 printf(".\n");
    	 else
    		 printf(";\n");
       }
	 }

	}



return 0;
}

