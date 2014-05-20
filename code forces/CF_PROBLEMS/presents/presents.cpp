#include <iostream>
#include <fstream>

using namespace std;
int main()
{
	//ifstream in ("input.txt");
int n;
cin>>n;
int data;
int* arr=new int[n];
for(int i=0;i<n;i++)
{
	cin >>data;
	arr[data-1]=i+1;

}
for(int i=0;i<n;i++)
{
cout<<arr[i]<<" ";

}
cout<<endl;
return 0;
} 