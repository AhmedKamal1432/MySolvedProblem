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
//
//int main()
//{
//	freopen("input.txt","r",stdin);
////	freopen("output.txt","w",stdout);
//
//	long long int pvt,itest;
//	double pv1,x1,y1,sum,ftest;
//	vector<long long int> big,low;
//	long long int x;
//
//	while(scanf("%lld",&pvt) != EOF )
//	{
//		big.clear();
//		low.clear();
//		pv1 = 1.0/(double)pvt;
//		
//		for (long long int y = pvt+1; y < 999999; y++)
//		{
//			
//			y1 = 1.0/(double)y;
//
//			if((y1*2) <pv1)
//				break;
//
//			x1 = pv1 - y1;
//	        x = (1/x1)-3;
//
//			for (; x < 9999999; x++)
//			{
//			  x1=1.0/(double)x;
//			  sum =x1 +y1;
//
//			  if(sum == pv1)
//			  {
//			    big.push_back(x);
//			    low.push_back(y);
//			  }
//
//			  if(sum<pv1)
//				  break;
//			  
//			}
//
//		
//		}
//	
//		//sort(big.begin(),big.end());
//		//sort(low.begin(),low.end());
//
//		printf("%d\n",big.size());
//		for (int n = big.size(), i = 0; i < n; i++)
//		{
////			printf("1/%lld = 1/%lld + 1/%lld\n",pvt,big[i],low[i]);
//		}
//		
//
//	}
//
//
//	return 0;
//}
//
///*		
//			ftest = 1.0 / x1; 
//			itest=ftest+0.5;
//			if(ftest - itest<0.000001)
//			{
//				big.push_back(ftest);
//				low.push_back(y);
//
//			}
//*/