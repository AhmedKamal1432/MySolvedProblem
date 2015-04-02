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
#include <utility>
#include <algorithm>
#include <functional>

using namespace std;

typedef long long int LL ;
#define vi vector<int>
#define ii pair<int,int>
#define vii vector< pair<int,int> >
#define sc(x) scanf("%d",&x)
double const EPS = 2.22045e-016;
#define INF (1<<29)

#define ALL(v)        ((v).begin()), ((v).end())
#define SZ(v)       ((int)((v).size()))
#define CLR(v, d)     memset(v, d, sizeof(v))
#define REP(i, n)   for(int i=0;i<(int)(n);++i)
#define LOOP(i,b, n)    for(int i=(b);i<(int)(n);++i)

#define PB  push_back
typedef vector<double>    VD;
typedef vector<string>    VS;
int gcd(int a, int b) { return (b == 0 ? a : gcd(b, a % b)); }

struct node{
  char c;
  vector<node *> list;
  bool finish;
  node(char _c){
    c = _c;
    list.assign(27,NULL);
    finish = false;
  }
  node(){ finish = false;}

  node * is_found(char ch){
      return list[ch-'a'];
  }
  void set_in(char ch){
    node * ptr = new node(ch);
    list[ch- 'a'] =ptr;
  }

};


node * arr ;

string target;
int sz;
bool check(node* ptr , int k,bool use){
  if(k == sz-1){
    node * tmp = ptr->is_found(target[k]);
    if(tmp == NULL){
      if(use)
        return false;
      else{
        REP(i,4){
          if(ptr->list[i] != NULL && ptr->list[i]->finish)
            return true;
        }
        return false;
      }
    }
    if(use){
      if(tmp->finish)
        return true;
      return false;
    }
    if(!use){
      REP(i,4){
          if(ptr->list[i] != NULL && ptr->list[i]->finish && ptr->list[i] != tmp)
            return true;
      }
    } 
    return false;
  }
  bool ans = false;
  if(ptr->is_found(target[k]))
    ans|= check(ptr->is_found(target[k]),k+1,use);
  if(use)
    return ans;
  REP(i,27){
    if(ptr->list[i] != NULL && ptr->list[i] != ptr->is_found(target[k]))
      ans |= check(ptr->list[i] , k+1,true);
  }
  return ans;
}

int main()
{
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  // freopen("output.txt", "w", stdout);
#endif
  int n;sc(n);
  int m; sc(m);
  string s;
  arr = new node('$');
  //constract the Tri
  REP(i,n){
    cin>>s;
    sz= SZ(s);
    node * ptr = arr;
    REP(i,sz){
      if( ptr->is_found(s[i]) ==(node *) NULL){
        ptr->set_in(s[i]);
      }
      ptr = ptr->is_found(s[i]);
      if( i == sz -1)
        ptr->finish = true;
    }
  }
  REP(i,m){
    cin >> target;
    // if(i == 15 || i ==12  && n == 30 && m == 18)
    //   cout<<target<<endl;

    sz = SZ(target);
    if(check(arr, 0,false)){
      printf("YES\n");
    }
    else
      printf("NO\n");
  }

return 0;
}
