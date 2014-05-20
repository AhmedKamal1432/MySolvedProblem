#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
#include<string>
#include<map>
#include<sstream>
#include<cmath>

using namespace std;
int main()
{
//	freopen("input.txt","r",stdin);
//	freopen("output.txt","w",stdout);

	int n;
	int num;
	vector<int>arr;
	vector<int>sum;
	int qrs,temp,now,pvt;
	vector<int>::iterator it;
	int temp1,temp2,sub1,sub2;
	int ans;
	bool grt1,grt2;

	int cas=1;
	while(scanf("%d",&n) != EOF  && n!=0 )
	{
		printf("Case %d:\n",cas);

		arr.clear();
		for (int i = 0; i < n; i++)
		{
		 scanf("%d",&num);
		 arr.push_back(num);
		}
		
		sort(arr.begin(),arr.end()); 
		
		scanf("%d",&qrs);



	  for (int m = 0; m < qrs; m++)
		{
			grt1=true;
			grt2=true;

			sum.clear();
			scanf("%d",&pvt);


			for (int i = 0; i < n; i++)
			{
				//if (pvt<arr[i])
				//{
				// if(arr[0] == 0)
				// sum.push_back(arr[i]);
				// 
				// else if(i == 0)
				//	 sum.push_back(arr[0]+arr[1]);
				// 
				// break;
				//}		

				temp = pvt - arr[i];
				
				it=lower_bound(arr.begin(),arr.end(),temp);
				if(it != arr.end() && it != arr.begin()+i )
				{
					if(*it != temp && it!=arr.begin())
						temp1=*(it-1);
					
					else
						temp1=*it;

					sum.push_back(arr[i]+ temp1);
				}

				it=upper_bound(arr.begin(),arr.end(),temp);
	           	if(it != arr.end() && it != arr.begin()+i )
					sum.push_back(arr[i]+ *it);
				else if(arr.end()-1 != arr.begin()+i)
					sum.push_back(arr[i]+ arr[arr.size()-1]);
			
			}

			sort(sum.begin(),sum.end());
	
	/*		temp1= *( lower_bound(sum.begin(),sum.end(),pvt) );
			temp2= *( upper_bound(sum.begin(),sum.end(),pvt) );
*/
			it=lower_bound(sum.begin(),sum.end(),pvt);
			if(it != sum.end())
			{
				if(*it != pvt && it!=sum.begin())
				 temp1=*(it-1);
				
				else
				 temp1=*it;
			}
			else
				grt1=false;

			it=upper_bound(sum.begin(),sum.end(),pvt);
   			if(it != sum.end())
				temp2=*it;
			else
				grt2=false;

		
			
			if(!grt1 && !grt2)
				ans=sum[sum.size()-1];
			
			else if(!grt1)
				ans=temp2;
			
			else if(!grt2)
			ans=temp1;

			else
			{
			sub1=abs(pvt-temp1);
			sub2=abs(pvt-temp2);
			if(sub1<sub2)
				ans=temp1;
			else
				ans=temp2;
			}

			printf("Closest sum to %d is %d.\n",pvt,ans);
		}
	
		cas++;
	}


return 0;
}