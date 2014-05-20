#include <cstdio>
#include<vector>
#include<cstring>
#include <string>
using namespace std;

 int main()
{
	
    long long int min ;
	char c;
 long long int temp=0;

 //long long int test= (1LL<<36);
 vector<unsigned long long int> vec;
	vector<long long int> shr_crs;
	scanf("%d",&min);
while(min!=-1)
{

	//getting data;
	scanf("%c",&c);
	while (c!='#')
	{
		temp=0;
		while (c!='0' && c!='#')
		{
			if(isalpha(c))
			{
			 if(c>'Z')
			  temp|= (1LL<<(c-'@'));			 
			 else
			  temp|= (1LL<<(c-'A'));
			}	 
			scanf("%c",&c);
		
	   }     
		if(temp!=0)
		{
		   vec.push_back(temp);
			scanf("%c",&c);
		}

	}

	//knowing compete or not
	long long int share=0;
	for (long long int i = 0; i < vec.size(); i+=2)
	{
		shr_crs.push_back(0);
		for (long long int k = 0,n=8*sizeof(long long int); k <n ; k++)
			{
				if((vec[i]&(1LL<<k)) && (vec[i+1]&(1LL<<k)))
					shr_crs[share]++;
			}
		
			share++;
	}

	//bi7seb 3'lat
	long long int big=true;

	if(shr_crs[0]<min)
		big=false;
	
	long long int num_our_crs,num_agn_crs;
	num_our_crs=num_agn_crs=0;
	
		for (long long int k = 0,n=8*sizeof(long long int); k <n ; k++)
			{
				if((vec[0]&(1LL<<k)) || (vec[1]&(1LL<<k)))
					num_our_crs++;
			}
	
	
	for (long long int i = 1; i < shr_crs.size(); i++)
	{
		if(shr_crs[i]>shr_crs[0])
		{
		big =false;
		break;
		}
		
		if(shr_crs[i]==shr_crs[0])
		{
			num_agn_crs=0;
			for (long long int k = 0,n=8*sizeof(long long int); k <n ; k++)
			{				
				if((vec[i*2]&(1LL<<k)) || (vec[2*i+1]&(1LL<<k)))
					num_agn_crs++;
			}
			if(num_agn_crs>num_our_crs)
			{
				big =false;
				break;
			}
		
		}
	}

	

	if(big)
		printf("YES\n");
	else
		printf("NO\n");

	vec.clear();
    shr_crs.clear();
    scanf("%d",&min);
}

	return 0;
}