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
int gcd(int a, int b) { return (b == 0 ? a : gcd(b, a % b)); }

int arr[10000];
void tazbet(){
string s;stringstream ss;
	LOOP(i,10000){
		if(i<100){
			arr[i]=-1;
		continue;
		}

		vi hash(10,0);
		ss<<i;	ss>>s;  ss.clear();
		  if(SZ(s) == 3)
			  s.insert(s.begin(),'0');
		LOOP(k,4)
		 hash[s[k]-'0']++;
		bool good =true;
		LOOP(k,10)
		 if(hash[k]>1)
			 good=false;
		if(good)
			arr[i]=0;
		else
			arr[i]=-1;
	}
}
void scan(int num,int b,int c){
	int main[4];CLR(main,0);
	string s ;stringstream ss;
	  ss<<num;	ss>>s;  ss.clear();
	  if(SZ(s) == 3)
		  s.insert(s.begin(),'0');

	LOOP(k,4)
	 main[k]=s[k]-'0';

	for (int i = 100; i < 10000; ++i)
		if(arr[i]!=-1){
	  	  int tb=0,tc=0;
		  ss<<i;	ss>>s;  ss.clear();
		  if(SZ(s) == 3)
			  s.insert(s.begin(),'0');
		  int hash[4];CLR(hash,0);
		  LOOP(k,4)
		    hash[k]=s[k]-'0';
		  LOOP(j,4)
		    LOOP(k,4)
		     if(hash[j] == main[k] && j == k)
		    	 tb++;
		     else if(hash[j] == main[k])
		    	 tc++;
		if(tc !=c || tb != b)
			arr[i]=-1;
		}
}

void print(vector<int> arr){
	LOOP(i,SZ(arr))
			if(i ==0)
				printf("%d",arr[0]);
			else
				printf(" %d",arr[i]);
}
int main()
{
 //   freopen("input.txt","r",stdin);
 //   freopen("output.txt","w",stdout);
CLR(arr,0);
int n;sc(n);
int num,b,c;
tazbet();
LOOP(i,n){
sc(num);sc(b);sc(c);
scan(num,b,c);
}
int count =0;
	vi ans;
for (int i = 0; i < 10000; ++i)
	if(arr[i]==0){
		ans.push_back(i);
		count++;
	}
//print(ans);
string s;stringstream ss;
if(count == 1){
	  ss<<ans[0];	ss>>s;  ss.clear();
	if(SZ(s) == 3)
		  s.insert(s.begin(),'0');
  cout<<s<<endl;
}else if (count > 1)
		printf("Need more data\n");

else
	printf("Incorrect data\n");
return 0;
}

