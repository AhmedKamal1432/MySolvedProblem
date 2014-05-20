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
vector<string> arr;

void do_it(int n,int r,int c,int p)
{
	if(n<2)
		return;
 int count =0;
 for (int i = r; i < r+n; ++i)
	 for (int k = c; k < c+n; ++k) {
		if(arr[i][k]=='1')
			count++;
	}

 double c_p = (double(count) / double(n*n))*100.0;
 if(c_p >= p)
	 for (int i = r; i < r+n; ++i)
	 	 for (int k = c; k < c+n; ++k) {
	 		arr[i][k]='1';
	 	}
 else if(c_p <= float(100- p))
	 for (int i = r; i < r+n; ++i)
	 	 	 for (int k = c; k < c+n; ++k) {
	 	 		arr[i][k]='0';
	 	 	}
 else {
	 do_it(n/2, r, c, p);
	 do_it(n/2,r+n/2, c, p);
	 do_it(n/2, r, c+n/2, p);
	 do_it(n/2, r+n/2, c+n/2, p);
 }

}

int main()
{
   // freopen("input.txt","r",stdin);
   // freopen("output.txt","w",stdout);

	int w,prc;
int test=1;
	while(sc(w) != EOF && w !=0 ){
		arr.clear();
		sc(prc);
		arr.assign(w,"");
		LOOP(i,w)
		 cin>>arr[i];
		do_it(w, 0, 0, prc);

		printf("Image %d:\n",test++);
		LOOP(i,w)
		  cout<<arr[i]<<endl;
	}


return 0;
}

