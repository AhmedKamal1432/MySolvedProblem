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
 //   freopen("input.txt","r",stdin);
 //   freopen("output.txt","w",stdout);
int cas;sc(cas);
int hash[50];
LOOP(ca,cas){
	CLR(hash,0);
int n,m;sc(n);sc(m);
vector<pair<int,vi> > arr;
 LOOP(i,n){ // loop for all prizes
	 int num,ned;sc(ned);
	 vi v_t(ned);
	 LOOP(i,ned){
		 sc(num);
		 v_t[i]=num;
	 }
	 int pr;sc(pr);
	 arr.push_back(make_pair(pr,v_t));
 }
 int num2;
 LOOP(i,m){ //loop for collectors
	 sc(num2);
	 hash[i+1]=num2;
 }
 sort(ALL(arr));
int tot=0;
 int arr_size=arr.size();
 LOOP(i,arr_size){ // for all prizes
    int len =arr[i].second.size();
    bool good=true;
    LOOP(k,len){ // looop to chick if i can get
    	if(hash[arr[i].second[k]]==0){
    		good =false;
    	 break;
    }}
    if(good){
    tot+=arr[i].first;
    LOOP(k,len){ // looop to chick if i can get
    	hash[arr[i].second[k]]--;
        }
    i--;
    }
 }

 printf("%d\n",tot);
}


return 0;
}

