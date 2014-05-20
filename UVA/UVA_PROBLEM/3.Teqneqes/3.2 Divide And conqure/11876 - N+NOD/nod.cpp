//#include<iostream>
//#include<cstdio>
//#include<vector>
//#include<algorithm>
//#include<string>
//#include<map>
//#include<sstream>
//#include<cmath>
//
//using namespace std;
//
//unsigned int divisors(unsigned long int n)
//{
//	unsigned short int primes[10000];
//	int end=min(n,(unsigned long int )9999);
//
//	for(unsigned int i=0 ;i<=end ; i++) primes[i]=0;
//	
//	unsigned short int how_many=1;
//	for(unsigned long int i=2 ; i < 10000 && i <= n ; i++)		
//	{
//		while(!(n%i))
//		{
//			n /= i;
//			
//			primes[i]++;
//		}
//		
//		if(primes[i]) how_many *= (primes[i]+1);
//	}
//	
//	return how_many;
//}
//
//int div2(int n)
//{
//	int num=0;
//for(int i=1;i<=n/2;i++)
//{
//if(n%i==0) num++;
//}
//
//return num+1;
//}
//
////int div12(int n)
////{
////	int num=0;
////	for(int i=1,sq=sqrt(n);i<=sq;i++)
////{
////if(n%i==0) num+=2;
////}
////
////return num;
////}
//
//	int nod[1000000];
//
//int main()
//{
////	freopen("input.txt","r",stdin);
////	freopen("output.txt","w",stdout);
//
//	vector<int>arr;
//
//	arr.push_back(1);
//	arr.push_back(2);
//	unsigned int divs;
//	vector<int>::iterator it,it2;
//	int num;
//
//	 for(int i=1;i<1000000;i++)
//        for(int j=i;j<1000000;j+=i)
//            nod[j]++;
//
//	 for (int i = 2; i < 65000 ;i++)
//	{
//		//divs=divisors(arr[i-1]);
//	//	divstst=div2(arr[i-1]);
//		//divs=div12(arr[i-1]);
//		divs =nod[arr[i-1]];
//		arr.push_back(divs+arr[i-1]);
//	}
//
//
//
//	int tst;
//	scanf("%d",&tst);
//	int big,end;
//
//	for (int t = 0; t < tst; t++)
//	{
//		scanf("%d %d",&big,&end);
//	
//			 it=lower_bound(arr.begin(),arr.end(),big);
//	 if(it != arr.end())
//	 {
//		 it2=lower_bound(arr.begin(),arr.end(),end);
//
//		 if(it2 != arr.end())
//	        if(*it2 == end)
//			 num =it2-it+1;
//			else
//				num=it2-it;
//	 
//		 else 
//			 num=(arr.begin()+arr.size())- it  ;
//	 }
//	 else
//		 num=0;
//
//
//	 printf("Case %d: %d\n",t+1,num);
//	 
//	}
//	
//
//
//	
//
//return 0;
//}