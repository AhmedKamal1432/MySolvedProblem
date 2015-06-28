#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;
typedef long long int ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
#define sc(x) scanf("%d", &x)
#define scl(x) scanf("%I64d", &x)
#define loop(i,s,e) for(int i=s ; i<e ; i++)
#define rep(i,s,e) for(int i=s ; i>=e ; i--)
#define INF 1e12
#define MOD 1000000007  
#define f first
#define s second
#define EPS 1e-7
#define Rd freopen("input.txt", "r", stdin)
#define Wr freopen("output.txt", "w", stdout)
#define PS push_back
# define M_PI           3.14159265358979323846  /* pi */
//#define DFS_WHITE -1
//#define DFS_BLACK 0
map<int, vector<string> > arr;
pair<string, int> mm1[10000], mm2[10000], mm3[10000];
int main(){
  Rd;
  Wr;
  map<string, int> m1, m2, m3;
  map<string, int>::iterator i1, i2, i3;
  int lm1 = 0, lm2 = 0, lm3 = 0;
  loop(i,0,3){
    int m;
    sc(m);
    loop(j,0,m){
      string name;
      int x;
      cin >> name >> x;
      if(i == 0){
        lm1 = m;
        m1[name] = x;
        mm1[j] = pair<string, int>(name, x);
      } else if(i == 1){
        lm2 = m;
        m2[name] = x;
        mm2[j] = pair<string, int>(name, x);
      } else {
        lm3 = m;
        m3[name] = x;
        mm3[j] = pair<string, int>(name, x);
      }
    }
  }
  loop(i,0,lm1){
    // printf("%d\n", i);
    loop(j,0,lm2){
      string s = mm1[i].first + " " + mm2[j].first;
      int sum =  mm1[i].second + mm2[j].second;
      arr[sum].push_back(s);
    }
  }
  int n;
  sc(n);
  loop(i,0,n){
    string s;
    int sum = 0;
    loop(j,0,3){
      cin >> s;
      int v = 0;
      if(j == 0) v = m1[s];
      else if(j == 1) v = m2[s];
      else v = m3[s];
      sum += v;
    }
    sum ++;
    loop(j,0,lm3){
      int diff = sum - mm3[j].second; 
      if(diff >= 0 && !arr[diff].empty() ) {
        string ans = arr[diff].back() + " " + mm3[j].first;
        printf("%s\n", ans.c_str());
        arr[diff].pop_back();
        break;
      }
    }
  }
  return 0;
}