/*
*
* solved by Ahmed Kamal
*/
// clang++ -std=c++11 ps.cpp

#include <bits/stdc++.h>

using namespace std;

typedef long long int LL ;
#define vi vector<int> 
#define ii pair<int,int> 
#define PLL pair<LL,LL> 
#define vii vector< pair<int,int> > 

#define ALL(v)        ((v).begin()), ((v).end())
#define SZ(v)       ((int)((v).size()))
#define CLR(v, d)     memset(v, d, sizeof(v))
#define REP(i, n)   for(int i=0;i<(int)(n);++i)
#define LOOP(i,b, n)    for(int i=(b);i<(int)(n);++i)

#define sc(x) scanf("%d",&x)
#define DSC(x) int x; scanf("%d",&x)
#define DSC2(x,y) int x,y; scanf("%d %d",&x,&y)

#define PB  push_back
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

vi arr;
vi dp;
class LongLongNim {
public:
  int numberOfWins(int, vector <int>);
};


bool is_win(int pos){
  int m = SZ(arr);
  int g = false;
  REP(k,m){
    if(arr[k] <= pos)
      g |= (dp[pos-arr[k]]);
  }
  if(g)
    dp[pos] = 0;
  return g;
}

map <int ,int> cycle;
int LongLongNim::numberOfWins(int maxN, vector <int> moves) {
  unsigned int k = 0;
  LL MAX = min(11234567, maxN+1);
  arr = moves;
  dp.assign(MAX,1);
  LL pivot = -1;
  LL p2 = -1;
  LOOP(i,1,MAX){
    bool t = is_win(i);
    k = k<<1;
    // printf("k1 = %d\n",k); 
    k =k &  ~(1<<23);
    // printf("k2 = %d || %d\n",k, ~(1<<23)); 
    k  |= (t)? 1 : 0;
    // printf("k3 = %d\n",k); 
    if(i >= 22 && cycle.count(k) != 0){
      pivot = i;
      p2 = cycle[k];
      break;
    }
    if(i >= 22)
      cycle[k] = i;
  }
  cerr<<"find ans"<<endl;
  // pivot = -1;
  LL ans = 0;
     printf("pivot = %lld,  p2 = %lld\n",pivot, p2 );
  if(pivot == -1 ){
    LOOP(i,0,MAX)
      ans+= dp[i];
  }
  else{
    LOOP(i,p2,pivot)
      ans+= dp[i];
       printf("ones in p2 -> pivot = %lld\n",ans);
    LL ncy  = (((LL)maxN - p2) / (pivot - p2) );
    ans = ncy * ans;
       printf("# cy = %lld\n",ncy);
       printf("ones in rep pivot = %lld\n",ans);
    
    LOOP(i,0,p2)
      ans+=dp[i];
     printf("after add begin  ans = %lld\n",ans );
      LL after_cy = p2 + ncy * (pivot - p2) ;
       printf("after_cy %lld\n",after_cy );
    LOOP(i , after_cy,  maxN+1){
      printf("%lld  ", ((i-p2)%pivot));
      ans+= dp[((i-p2)%(pivot - p2))+p2];  
    }
    printf("\n");
    }
  // print_v(dp);
  return ans-1;
}
double test0() {
  // {, }
  int p0 = 1000000000;
  int t1[] = {2, 6, 7, 11, 12, 16, 18};
  vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
  LongLongNim * obj = new LongLongNim();
  clock_t start = clock();
  int my_answer = obj->numberOfWins(p0, p1);
  clock_t end = clock();
  delete obj;
  cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
  int p2 = 203821657;
  cout <<"Desired answer: " <<endl;
  cout <<"\t" << p2 <<endl;
  cout <<"Your answer: " <<endl;
  cout <<"\t" << my_answer <<endl;
  if (p2 != my_answer) {
    cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
    return -1;
  }
  else {
    cout <<"Match :-)" <<endl <<endl;
    return (double)(end-start)/CLOCKS_PER_SEC;
  }
}
double test1() {
  int p0 = 999;
  int t1[] = {1};
  vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
  LongLongNim * obj = new LongLongNim();
  clock_t start = clock();
  int my_answer = obj->numberOfWins(p0, p1);
  clock_t end = clock();
  delete obj;
  cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
  int p2 = 499;
  cout <<"Desired answer: " <<endl;
  cout <<"\t" << p2 <<endl;
  cout <<"Your answer: " <<endl;
  cout <<"\t" << my_answer <<endl;
  if (p2 != my_answer) {
    cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
    return -1;
  }
  else {
    cout <<"Match :-)" <<endl <<endl;
    return (double)(end-start)/CLOCKS_PER_SEC;
  }
}
double test2() {
  int p0 = 1000000000;
  int t1[] = {1,2};
  vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
  LongLongNim * obj = new LongLongNim();
  clock_t start = clock();
  int my_answer = obj->numberOfWins(p0, p1);
  clock_t end = clock();
  delete obj;
  cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
  int p2 = 333333333;
  cout <<"Desired answer: " <<endl;
  cout <<"\t" << p2 <<endl;
  cout <<"Your answer: " <<endl;
  cout <<"\t" << my_answer <<endl;
  if (p2 != my_answer) {
    cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
    return -1;
  }
  else {
    cout <<"Match :-)" <<endl <<endl;
    return (double)(end-start)/CLOCKS_PER_SEC;
  }
}
double test3() {
  int p0 = 6543;
  int t1[] = {2,4,7,11,20};
  vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
  LongLongNim * obj = new LongLongNim();
  clock_t start = clock();
  int my_answer = obj->numberOfWins(p0, p1);
  clock_t end = clock();
  delete obj;
  cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
  int p2 = 1637;
  cout <<"Desired answer: " <<endl;
  cout <<"\t" << p2 <<endl;
  cout <<"Your answer: " <<endl;
  cout <<"\t" << my_answer <<endl;
  if (p2 != my_answer) {
    cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
    return -1;
  }
  else {
    cout <<"Match :-)" <<endl <<endl;
    return (double)(end-start)/CLOCKS_PER_SEC;
  }
}
int main() {
  int time;
  bool errors = false;
  
  time = test0();
  if (time < 0)
    errors = true;
  // print_v(dp);
  time = test1();
  if (time < 0)
    errors = true;
  // print_v(dp);
  
  time = test2();
  if (time < 0)
    errors = true;
  
  time = test3();
  if (time < 0)
    errors = true;
  
  if (!errors)
    cout <<"You're a stud (at least on the example cases)!" <<endl;
  else
    cout <<"Some of the test cases had errors." <<endl;
}

//Powered by [KawigiEdit] 2.0!