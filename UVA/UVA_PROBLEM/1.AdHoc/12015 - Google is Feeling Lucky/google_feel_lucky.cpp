#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
#include<string>
#include<map>
#include<sstream>
#include<cmath>

using namespace std;

struct url
{
 string name;
 int order,rev;

};

bool comp1(url u1,url u2)
{
	if(u1.rev > u2.rev)
		return true;
	return false;
}


bool comp2(url u1,url u2)
{
	if(u1.order < u2.order)
		return true;
	return false;
}

int main()
{
//	freopen("input.txt","r",stdin);
//	freopen("output.txt","w",stdout);

	int tst;
	scanf("%d",&tst);
	vector<url> arr,arr_out;

	url temp;

	for (int t = 0; t < tst; t++)
	{
		arr.clear();
		arr_out.clear();
		for (int k = 0; k < 10; k++)
		{
			cin>>temp.name;			
			scanf("%d",&temp.rev);
			temp.order=k;
			arr.push_back(temp);
		}

		sort(arr.begin(),arr.end(),comp1);

		arr_out.push_back(arr[0]);
		for (int i = 1,length=arr.size(); i < length; i++)
		{
			if(arr[i].rev == arr[0].rev)
				arr_out.push_back(arr[i]);
			else
				break;			
		}


		sort(arr_out.begin(),arr_out.end(),comp2);

	   printf("Case #%d:\n",t+1);
	   for (int i = 0,length=arr_out.size(); i < length; i++)
	   {
		   cout<<arr_out[i].name<<endl;
	   }
	
	}

return 0 ;
}