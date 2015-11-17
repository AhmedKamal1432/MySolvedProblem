/*
*
* solved by Ahmed Kamal
*/
// clang++ -std=c++11 ps.cpp
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
#define VLL vector<LL> 
#define ii pair<int,int> 
#define PLL pair<LL,LL> 
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

#define X  first
#define Y  second


typedef vector<double>    VD;
typedef vector<string>    VS;
int gcd(int a, int b) { return (b == 0 ? a : gcd(b, a % b)); }

void print_v(vi arr){
int n = SZ(arr);
  REP(i,n)
    if(i == n-1)
       cout<<arr[i] <<endl;
     else
      cout<<arr[i]<<" ";
}

void print_v(vector<pair<LL, LL> > arr){
int n = SZ(arr);
  REP(i,n)
    if(i == n-1)
       cout<<"("<<arr[i].X<<":" <<arr[i].Y<<")"<<endl;
     else
      cout<<"("<<arr[i].X<<":" <<arr[i].Y<<")"<<" ";
}

void print_v(vector< pair< ii,ii > > arr){
int n = SZ(arr);
  REP(i,n)
    if(i == n-1)
       cout<<"["<<"("<<arr[i].X.X<<":" <<arr[i].X.Y<<")"<< "  , "<<" ("<<arr[i].Y.X<<":" <<arr[i].Y.Y<<")"<<"]"<<endl;
     else
      cout<<"["<<"("<<arr[i].X.X<<":" <<arr[i].X.Y<<")"<< "  , "<<" ("<<arr[i].Y.X<<":" <<arr[i].Y.Y<<")"<<"]"<<" ";
}
void print_v(VLL arr){
int n = SZ(arr);
  REP(i,n)
    if(i == n-1)
       cout<<arr[i] <<endl;
     else
      cout<<arr[i]<<" ";
}

struct node{
	LL l,r,val;
	node(){}
	node(LL a, LL b, LL c){
		l = a, r = b, val = c;
	}
	void print(){
		printf("l = %lld, r = %lld, val = %lld\n",l,r,val );
	}
	void init(LL a, LL b, LL c){
		l = a, r = b, val = c;
	}
};

void print_v(vector<node> arr){
int n = SZ(arr);
  REP(i,n)
    if(i == n-1)
	arr[i].print();
   else
     arr[i].print();
}


vector<node> tree;
LL n, q ,k;
vector<pair<LL,LL> > arr;
vector<pair<ii,ii> > qr;

LL build_seg_tree(LL node,LL l = 0, LL r = n-1){
	if(l > r)
		return 0;
	if(l == r){
		tree[node].init(l,r,1);
		return 1;
	}
	int val = build_seg_tree(node*2+1, l, (l+r)/2 );
	val += build_seg_tree(node*2+2, (l+r)/2 +1, r  );
	tree[node].init(l, r, val);
	return val;
}

int MAXNODE ;
LL get_range(LL node, LL l = 0, LL r = n-1){
	// range of node is full include in requird range
	// printf("in node = %lld l = %lld r =%lld\n",node, tree[node].l ,tree[node].r );
	if(node > MAXNODE)
		return 0;
	if(tree[node].l >= l && tree[node].r <= r)
		return tree[node].val;

	// range of node is not belong to requird range
	if(tree[node].l > r || tree[node].r < l)
		return 0;

	return get_range(node*2 +1 , l , r) +  get_range(node*2 +2 , l , r);
}

void update(LL p, LL node = 0, LL l = 0 ,LL r = n-1){
	// printf("update p = %lld  l = %lld  r = %lld\n",p,l,r );
	if( l == r){
		tree[node].val = 0;
		return ;
	}

	if(tree[node].l > r || tree[node].r < l)
		return ;
	int mid = (l+r)/2;
	if(p > mid)
		update(p, (node * 2)  + 2, mid + 1, r );
	else
		update(p, (node * 2)  + 1, l, mid );

	tree[node].val = tree[node *2 +1 ].val + tree[node* 2 + 2].val ;
	return;
}
int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		//freopen("output.txt", "w", stdout);
	#endif
		cin>>n;
		arr.assign(n,ii(0,0));
		REP(i,n){
			cin>>arr[i].X;
			arr[i].Y  = i;
		}
		cin>>q;
		qr.assign(q,MP(ii(0,0),ii(0,0)));
		REP(i,q){
			cin>>qr[i].Y.X>>qr[i].Y.Y>>qr[i].X.X;
			qr[i].X.Y = i;
		}

		MAXNODE = (2 * pow(2.0, floor((log((double)n) / log(2.0)) + 1))) ;
		tree.assign(MAXNODE, node(0,0,0));
		build_seg_tree(0,0,n-1);
		// print_v(tree);
		// printf("test\n");
		// printf("0,4: %lld\n", get_range(0,0,4) );
		// printf("1,1 : %lld \n", get_range(0,1,1) );
		// printf("0,5 : %lld \n",  get_range(0,0,5) );
		// printf("0,2 : %lld\n", get_range(0,0,2) );
		sort(ALL(arr));
		sort(ALL(qr));

		int p0 = 0;
		vi ans(q,0);
		// print_v(arr);
		print_v(qr);
		REP(i,q){
			while(p0 < n && arr[p0].X <= qr[i].X.X){
				// printf(" in \n");
				update(arr[p0++].Y);
				// print_v(tree);
			}

			ans[qr[i].X.Y] = get_range(0, qr[i].Y.X, qr[i].Y.Y);
		}
		REP(i,q)
			printf("%d\n", ans[i]);

	return 0; 
}
