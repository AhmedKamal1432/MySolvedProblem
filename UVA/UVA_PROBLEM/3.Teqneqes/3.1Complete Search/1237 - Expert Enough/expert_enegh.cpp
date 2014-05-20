#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
#include<string>
#include<map>
#include<sstream>
#include<cmath>

using namespace std;

struct car
{
 string name;
 int low;
 int high;
};


int main()
{
//	freopen("input.txt","r",stdin);
//	freopen("output.txt","w",stdout);

    int tst;
	scanf("%d",&tst);
	int data;
	vector<car>arr;
	car temp;
	string tnm;
	int qrs;
	int price;
	int found,ans;

	for (int cas  = 0; cas  <tst; cas ++)
	{
		if(cas !=0 )
			printf("\n");

		arr.clear();
    	scanf("%d",&data);

		for (int i = 0; i < data; i++)
		{
			cin>>temp.name;
			scanf("%d %d",&temp.low,&temp.high);
			arr.push_back(temp);
		}

		scanf("%d",&qrs);
		for (int k = 0; k < qrs; k++)
		{
			found=0;
			scanf("%d",&price);
			for (int i = 0,len =arr.size(); i < len; i++)
			{
				if(arr[i].low <= price && arr[i].high >= price)
				{
						found++;
						ans=i;
				}
			}

            if (found == 1)
				cout<<arr[ans].name<<endl;
			else
				printf("UNDETERMINED\n");	

		}
 

	}

	return 0;
}