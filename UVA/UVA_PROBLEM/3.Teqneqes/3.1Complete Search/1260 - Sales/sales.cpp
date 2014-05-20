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
////	freopen("input.txt","r",stdin);
////	freopen("output.txt","w",stdout);
//
//	int tst;
//	int size;
//	int sal;
//	int num;
//	int sum;
//
//	vector<int>A;
//
//	scanf("%d",&tst);
//	for (int cas = 0; cas <tst; cas++)
//	{
//		A.clear();
//		sum=0;
//
//    	scanf("%d",&size);
//		
//		for (int k = 0; k < size; k++)
//		{
//			scanf("%d",&sal);
//			A.push_back(sal);
//		}
//
//
//		for (int i = 1; i < size; i++)
//		{
//			num=0;
//			for (int k = 0; k < i; k++)
//			{
//				if(A[k] <= A[i])
//					num++;
//			}
//
//			sum+=num;
//		}
//		 
//
//		printf("%d\n",sum);
// 
//
//	}
//
//
//
//return 0;
//}