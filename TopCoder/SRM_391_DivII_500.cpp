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

class IsomorphicWords
{
public:
	int countPairs(vector <string> words)
	{
      int siz= words.size();
      int len = words[0].size();
      int hash[300];
      int count=0;
      LOOP(i,siz)
         for(int k =i+1; k < siz ; k++){
             CLR(hash,0);
             bool good =true;
        	 LOOP(c,len){
        		 if(hash[(int)words[i][c]] != (int)words[k][c] && hash[(int)words[i][c]] !=0)
        			 good =false;
        		 hash[(int)words[i][c]] = (int)words[k][c];
              }
            if(good){
              CLR(hash,0);
			 bool good =true;
			 LOOP(c,len){
				 if(hash[(int)words[k][c]] != (int)words[i][c] && hash[(int)words[k][c]] !=0)
					 good =false;
				 hash[(int)words[k][c]] = (int)words[i][c];
			  }
            }
            if(good)
            	count++;
         }
       return count;
      }


};

int main()
{
 //   freopen("input.txt","r",stdin);
 //   freopen("output.txt","w",stdout);
	IsomorphicWords c;
	string s[]={"aa", "ab", "bb", "cc", "cd"};
    c.countPairs(vector<string>(s,s+5));
return 0;
}

