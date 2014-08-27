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
    double const EPS = 2.22045e-016;
    #define INF (1<<29)

    #define ALL(v)				((v).begin()), ((v).end())
    #define SZ(v)				((int)((v).size()))
    #define CLR(v, d)			memset(v, d, sizeof(v))
    #define REP(i, n)		for(int i=0;i<(int)(n);++i)
    #define LOOP(i,b, n)		for(int i=(b);i<(int)(n);++i)

    #define PB	push_back
    typedef vector<double>    VD;
    typedef vector<string>    VS;
    int gcd(int a, int b) { return (b == 0 ? a : gcd(b, a % b)); }
    int ans;
    vi path;
    vector<vi> graph;
    void back(){
        vector<vi> a_arr;
        vi arr(5,0);
        REP(i,5)
         arr[i]=i;
        a_arr.push_back(arr);
        while(next_permutation(ALL(arr))){
            if(arr[0] == 0 && arr[4] == 4 && arr[3] != 2){
                a_arr.push_back(arr);
            }
        }
        int sum =0;
        REP(i,SZ(a_arr)){
            int sum =0;
            arr=a_arr[i];
            sum+=graph[arr[0]][arr[1]]  + graph[arr[1]][arr[2]] +  graph[arr[2]][arr[3]] + graph[arr[3]][arr[4]]; 
            if(sum < ans ){                
                ans = sum;
                path = a_arr[i];
            }
        }  
    }

    int main()
    {
    #ifndef ONLINE_JUDGE
            freopen("input.txt", "r", stdin);
            //freopen("output.txt", "w", stdout);
    #endif
            ans =1<<29;
            graph.assign(5,vi(5,0));
            REP(i,5)
              REP(j,5)
                sc(graph[i][j]);
            back();
            printf("%d\n",ans);
            REP(i,5){
                if(i == 4)
                   printf("%d\n",path[i]+1);
                else
                    printf("%d ",path[i]+1);
            }
    return 0; 
    }
