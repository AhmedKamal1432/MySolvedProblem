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
#define LOOP(i, n)		for(int i=0;i<(int)(n);++i)
#define LOOPP(i,b, n)		for(int i=(b);i<(int)(n);++i)

#define PB	push_back
typedef vector<double>    VD;
typedef vector<string>    VS;
int gcd(int a, int b) { return (b == 0 ? a : gcd(b, a % b)); }

bool print_div(char c,map<string,string>mp1,map<string,string>mp2){
             VS arr;
             //get plus
             map<string,string>::iterator it1,it2;
             for(it2=mp2.begin() ;it2 != mp2.end(); it2++){ //loop for map 2
                 string pv = (*it2).first;
                 bool good = false;
                for(it1=mp1.begin() ;it1 != mp1.end(); it1++ )// loop for map1
                    if((*it1).first == pv)
                        good = true;
                if(!good)
                    arr.push_back(pv);
             }
             //print plus
//             LOOP(i,SZ(arr))
//               if(arr[i] == "")
//                   arr.erase(arr.begin()+i);
             
             if(arr.size() > 0){
                 printf("%c",c);
                 sort(ALL(arr));
                 LOOP(i,SZ(arr)){
                     if(i == SZ(arr)-1)
                         cout<<arr[i]<<endl;
                     else
                         cout<<arr[i]<<',';
                 }
                 return true;
             }
       return false;      
}
bool print_ch(char c,map<string,string>mp1,map<string,string>mp2){
             VS arr;
             //get plus
             map<string,string>::iterator it1,it2;
             for(it2=mp2.begin() ;it2 != mp2.end(); it2++){ //loop for map 2
                 string pv = (*it2).first;
                for(it1=mp1.begin() ;it1 != mp1.end(); it1++ )// loop for map1
                    if((*it1).first == pv && (*it2).second != (*it1).second){
                        arr.push_back(pv);
                        break;
                    }
             }
             //print plus
//             LOOP(i,SZ(arr))
//               if(arr[i] == "")
//                   arr.erase(arr.begin()+i);
             
             if(arr.size() > 0){
                 printf("%c",c);
                 sort(ALL(arr));
                 LOOP(i,SZ(arr)){
                     if(i == SZ(arr)-1)
                         cout<<arr[i]<<endl;
                     else
                         cout<<arr[i]<<',';
                 }
                 return true;
             }
             return false;
}
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
#endif
        int n ;sc(n);scanf("\n");
        char c ;
        int tt=0;
        while(n--){
            scanf("%c",&c);
            map<string,string> mp1,mp2;
            string k,v;
            // read frist
            while(c !='}' && c !='\n'){
            k.push_back(c);
            scanf("%c",&c);
            }
            k.push_back('}');
            scanf("\n");
            //read second;
            scanf("%c",&c);
            while(c !='}' && c !='\n' ){
            v.push_back(c);
            scanf("%c",&c);             
            }
            v.push_back('}');

            scanf("\n");
            string key,value;
            //to map
            int i =1;
            while(i < SZ(k)){
                key.clear();value.clear();
                if(k[i] =='}')
                    break;
 
                while(i < SZ(k) &&k[i] != ':'){
                    key.push_back(k[i]);
                    i++;
                }
                i++;
                while(i < SZ(k) &&k[i] != ',' && k[i] != '}'){
                    value.push_back(k[i]);
                    i++;
                }
                i++;
                mp1[key]=value;
            }
            // to second map
              i =1;
            while(i < SZ(v)){
                key.clear();value.clear();
                if(v[i] =='}')
                    break;
                
                while(i < SZ(v) &&v[i] != ':'){
                    key.push_back(v[i]);
                    i++;
                }
                i++;
                while(i < SZ(v) && v[i] != ','&& v[i] !='}'){
                    value.push_back(v[i]);
                    i++;
                }
                i++;
                mp2[key]=value;
            }
             bool b1,b2,b3;            
             b1 =print_div('+',mp1,mp2);
             
             b2 =print_div('-',mp2,mp1);
             
             b3 =print_ch('*',mp1,mp2);
             if(!b1 && !b2 && !b3)
                 printf("No changes\n");

             printf("\n");

        }

return 0; 
}
