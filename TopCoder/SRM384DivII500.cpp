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

	class Library {
	public:
		int documentAccess(vector <string> rec, vector <string> gr, vector <string> room) {
			vector<string> arr;
			sort(ALL(rec));
			sort(ALL(gr));
			sort(ALL(room));
			int len = rec.size();
			int count=0;
			for(int i =0;i<len;i++){
				string d,r,g;
				int l1=-1,l2=-1;
				LOOP(k,SZ(rec[i])){
					if(rec[i][k]==' '){
						if(l1==-1)
							l1=k;
						else
							l2=k;
					}
				}
				d=rec[i].substr(0,l1);
				r=rec[i].substr(l1+1,l2-l1-1);
				g=rec[i].substr(l2+1,rec[i].size()-l2-1);
				if(!binary_search(ALL(arr),d))
				{
					if(binary_search(ALL(gr),g)&& binary_search(ALL(room),r))
						{
						count++;
						arr.push_back(d);
						}
				}
			}
         return count;
		}
	};
