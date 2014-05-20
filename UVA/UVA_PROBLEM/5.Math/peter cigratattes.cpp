#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
 long long int drunk=0;
 long long int n,k,temp1,butt;
 //long long int t,e,c;

 while(cin>>n>>k)
 {
	 drunk=n;
	 butt=n;
	 while(butt>=k)
	 {
	  temp1=butt/k;
	  drunk+=temp1;
	  butt=(butt%k)+temp1; 
	 }
 cout<<drunk<<endl;
 }
return 0; 
}