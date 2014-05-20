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

#define vi vector<int> 
#define ii pair<int,int> 
#define vii vector< pair<int,int> > 

 int main()
{
	//freopen("input.txt","r",stdin);

	double  n;
	while(cin >> n && n != -1){
		long long int root = ceil( (-1.0 + sqrt(1.0 + 8.0*n)) / 2.0 );
		long long int i;
		double  z;
		for (i = root; i >= 1; i--){
			double  k = i;
			z = (k*k - k + 2.0*n ) / (2.0*k);
			if( z -(long long int)z <= 2.22045e-016){
				break;
			}
		}
		long long int start = z - i + 1;
 	printf("%lld = %lld + ... + %lld\n", (long long int) n , start ,(long long int) z ); 
	//cout<<n<<" = "<<start<<" + ... + "<<z<<endl;
	}
	return 0; 
}
