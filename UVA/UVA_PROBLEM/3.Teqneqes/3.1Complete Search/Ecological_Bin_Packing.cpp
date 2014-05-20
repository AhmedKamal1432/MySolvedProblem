#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<iostream>
#include<sstream>
#include<string>
#include<vector>
#include<map>
#include<set>
#include<bitset>
#include<queue>
#include<utility>
#include<algorithm>
#include<functional>

using namespace std;

#define vi vector<int>
#define ii pair<int,int>
#define vii vector< pair<int,int> >
//return u want p1 go before p2

bool func(pair<int,string> p1,pair<int,string> p2)
{
 if(p1.first > p2.first)
	 return false;
  if(p1.first < p2.first)
	  return true;

  if(p1.second < p2.second)
	   return true;
  return false;

}


int main()
{
 //   freopen("input.txt","r",stdin);
 //   freopen("output.txt","w",stdout);
int b1[3],b2[3],b3[3];
int n_mov;
while(scanf("%d %d %d ",&b1[0],&b1[1],&b1[2]) != EOF)
{
	vector<pair<int,string> >arr;
	scanf("%d %d %d %d %d %d\n",&b2[0],&b2[1],&b2[2],&b3[0],&b3[1],&b3[2]);
	//test all possible
	//BGC
	n_mov = b1[1]+b1[2] + b2[0]+b2[2] + b3[0]+b3[1];
    arr.push_back(pair<int,string>(n_mov,"BGC"));

    //BCG
    	n_mov = b1[1]+b1[2] + b2[0]+b2[1] + b3[0]+b3[2];
        arr.push_back(pair<int,string>(n_mov,"BCG"));

        //CBG
        	n_mov = b1[0]+b1[1] + b2[1]+b2[2] + b3[0]+b3[2];
            arr.push_back(pair<int,string>(n_mov,"CBG"));

            //CGB
        	n_mov = b1[0]+b1[1] + b2[0]+b2[2] + b3[1]+b3[2];
            arr.push_back(pair<int,string>(n_mov,"CGB"));

                //GBC
                	n_mov = b1[0]+b1[2] + b2[1]+b2[2] + b3[0]+b3[1];
                    arr.push_back(pair<int,string>(n_mov,"GBC"));

                    //GCB
                    	n_mov = b1[0]+b1[2] + b2[0]+b2[1] + b3[1]+b3[2];
                        arr.push_back(pair<int,string>(n_mov,"GCB"));

    sort(arr.begin(),arr.end(),func);
    cout<<arr[0].second;
    printf(" %d\n",arr[0].first);

}

return 0;
}
