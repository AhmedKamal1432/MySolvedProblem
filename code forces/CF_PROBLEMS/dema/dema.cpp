#include <iostream>
#include <fstream>

using namespace std;
int main()
{
	ifstream in ("input.txt");
int n,temp;
int sum=0;
cin>>n;
for(int i=0;i<n;i++)
{
	cin>>temp;
	sum += temp;
}
temp=2;
int p=sum%n;
if(n==1)
{
	if(sum%2==0)
		cout<<2;
	else
		cout<<3;

	return 0;
}
if(p==0)
	cout<<p+1<<endl;
else
	cout<<p<<endl;

return 0;
}