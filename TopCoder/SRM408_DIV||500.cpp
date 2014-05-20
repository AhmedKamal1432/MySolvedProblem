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

class OlympicCandles
{
public:
	int numberOfNights(vector <int> arr)
	{
		int len = arr.size();
		sort(ALL(arr));
		reverse(ALL(arr));
		int d=1;
		while(true){
			if(d>len)break;
			LOOP(i,d)
			 arr[i]--;
			sort(ALL(arr));
			reverse(ALL(arr));
			while(arr[arr.size()-1] == 0)
				arr.pop_back();
			len = arr.size();
			d++;
		}
     return d-1;
	}
};

int main()
{
 //   freopen("input.txt","r",stdin);
 //   freopen("output.txt","w",stdout);

//int arr[]={5, 2, 2, 1};
vector<int> arr;
arr.push_back(5);arr.push_back(2);arr.push_back(2);
arr.push_back(1);
OlympicCandles c;
int n=c.numberOfNights(arr);

return 0;
}

