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

    class BishopMove {
    public:
            int howManyMoves(int r1, int c1, int r2, int c2) {
              int a = abs((r2-r1));
              int b = abs((c2-c1));
              if(r1 == r2 && c1 == c2)
                  return 0;
              if(abs(a-b) % 2 ==0){
                  if(a == b)
                      return 1;
                  else
                      return 2;
              }
              return -1;

            }
    };

