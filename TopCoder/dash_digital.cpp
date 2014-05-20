#include <iostream>
#include <string>
using namespace std;

int newFunction (string s);
int main()
{
 string s;
 while(cin>>s)
	 newFunction(s);
 return 0;
}

int newFunction (string s)
{
	int sum=0;
	int temp;
	int arr[10];
	arr[0]=6;
	arr[1]=2;
	arr[2]=5;
	arr[3]=5;
	arr[4]=4;
	arr[5]=5;
	arr[6]=6;
	arr[7]=3;
	arr[8]=7;
	arr[9]=6;

	for (int i = 0; i < s.length(); i++)
	{
      	temp=s[i]-'0';
		sum+=arr[temp];
	}
	
cout<<sum;
return sum;

}