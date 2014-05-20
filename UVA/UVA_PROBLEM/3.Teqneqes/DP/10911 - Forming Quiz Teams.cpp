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
double const EPS= 2.22045e-016;

#define ALL(v)				((v).begin()), ((v).end())
#define SZ(v)				((int)((v).size()))
#define CLR(v, d)			memset(v, d, sizeof(v))
#define LOOP(i, n)		for(int i=0;i<(int)(n);++i)

#define PB	push_back
typedef vector<double>    VD;
typedef vector<string>    VS;
int gcd(int a, int b) { return (b == 0 ? a : gcd(b, a % b)); }
#define INF 1e9
struct point { double x, y;   // only used if more precision is needed
  point() { x = y = 0.0; }                      // default constructor
  point(double _x, double _y) : x(_x), y(_y) {}        // user-defined
  bool operator < (point other) const { // override less than operator
    if (fabs(x - other.x) > EPS)                 // useful for sorting
      return x < other.x;          // first criteria , by x-coordinate
    return y < other.y; }          // second criteria, by y-coordinate
  // use EPS (1e-9) when testing equality of two floating points
  bool operator == (point other) const {
   return (fabs(x - other.x) < EPS && (fabs(y - other.y) < EPS)); } };

double dist(point p1, point p2) {                // Euclidean distance
                      // hypot(dx, dy) returns sqrt(dx * dx + dy * dy)
  return hypot(p1.x - p2.x, p1.y - p2.y); }           // return double


int n;
double table[131074];
point arr[1000];
double back (int stat){
	if(stat == (1<<2*n) - 1)
		 return 0;
    if(fabs(table[stat] +1) > EPS)
    	 return table[stat];
    double q = INF;
    LOOP(i,2*n){
    	if(stat & (1<<i))
    		continue;
    	for(int k=i+1; k<2*n;k++ ){
    		if(stat & (1<<k))
    		     continue;
    		q= min(q,dist(arr[i],arr[k])+back( stat|(1<<i)|(1<<k)) );
    	}
    }
    return table[stat] = q;

}

int main()
{
  //freopen("input.txt","r",stdin);
 //   freopen("output.txt","w",stdout);
  string s;
  point p;
  int cas =1;
    while(cin>>n && n!=0){
   LOOP(i,131074)
		  table[i]=-1;
    	LOOP(i,2*n){
    		cin>>s>>p.x>>p.y;
    		arr[i] = p;
     	}

    	double ans=	back(0);
    printf("Case %d: %.2lf\n",cas++,ans);
    }

return 0;
}

