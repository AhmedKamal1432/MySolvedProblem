/*
*
* solved by Ahmed Kamal
*/
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
#define ii pair<int,int> 
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


typedef vector<double>    VD;
typedef vector<string>    VS;
void print_v(vi arr){
int n = SZ(arr);
  REP(i,n)
    if(i == n-1)
       cout<<arr[i] <<endl;
     else
      cout<<arr[i]<<" ";
}

int gcd(int a, int b) { return (b == 0 ? a : gcd(b, a % b)); }

struct node{
	int value;
	node *left, *right;
	node(int _v){
		value = _v;
		right = left = NULL;
	}
	node(int _v , node* l, node* r){
		value = _v;
		right = r;
		left = l;
	}
};


int find_last_small(const vi & arr, int key, int l ,int r){
	int n = SZ(arr);
	int ans = -1;
	LOOP(i,l,r){
		if(arr[i] < key){
			ans = i;
		}
	}
	return ans;
}

vi tree_arr;
node* back(int l, int r){
	// printf(" in with l = %d nd r = %d\n",l,r );
	if(tree_arr.size() == 0 || l > r)
		return NULL;
	if( l ==  r)
		return new node(tree_arr[l]);
	int last = find_last_small(tree_arr, tree_arr[r], l, r);
	node * root = new node(tree_arr[r]);
	if(last == -1)
		root->left = NULL;
	else
		root->left = back(l , last);
	if(last == -1)
		root-> right = back(l,r-1);
	else
		root->right = back(last+1, r-1);

	// printf("at root = %d  left is %d, right is %d\n",root->value, (root->left == NULL)? 0 : root->left->value , (root->right == NULL)? -1 : root->right->value );
	return root;
}

void hary_order(node* root){
	if(root == NULL )
		return;
	hary_order(root->right);
	hary_order(root->left);
	printf("%d\n",root->value );
	return;
}

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		//freopen("output.txt", "w", stdout);
	#endif
		DSC(n);
		tree_arr.assign(n,0);
		REP(i,n){
			sc(tree_arr[i]);
		}
		// print_v(tree_arr);
		node * root = back(0,n-1);
		hary_order(root);

	return 0;
}
