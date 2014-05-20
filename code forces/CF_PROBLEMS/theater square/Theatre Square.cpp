#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;
int main()
{
	/*ifstream in ("input.txt");*/
 unsigned long long n,m,a,data;
double wide,len;
cin>>n>>m>>a;
wide=double(n) / double(a);
len= double(m) / double(a) ;
wide=ceil(wide);
len =ceil(len);
data=wide*len;
cout<<data<<endl;


}