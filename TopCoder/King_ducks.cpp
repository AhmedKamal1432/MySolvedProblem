#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
	int sum=0;
	int max_num;
	int num_types=0;
int arr[50];

for (int i = 0; i < 50; i++)
	arr[i]=0;
int temp;

while(cin>>temp)
arr[temp-1]++;

max_num=arr[0];
for (int i = 0; i < 50; i++)
{
	if(arr[i]>max_num)
	{
		max_num=arr[i];
	}
	if(arr[i]>0)
		num_types++;
}

sum=num_types*max_num;
cout<<sum;

return 0;
}
