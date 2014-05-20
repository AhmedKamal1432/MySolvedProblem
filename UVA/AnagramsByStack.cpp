//#include<cstdio>
//#include<cstdlib>
//#include<cmath>
//#include<iostream>
//#include<sstream>
//#include<cstring>
//#include<vector>
//#include<list>
//#include<stack>
//#include<map>
//#include<set>
//#include<bitset>
//#include<queue>
//#include<utility>
//#include<algorithm>
//#include<functional>
//
//using namespace std;
//
//#define vi vector<int> 
//#define ii pair<int,int> 
//#define vii vector< pair<int,int> > 
//
//int main()
//{
//    freopen("input.txt","r",stdin);
// //   freopen("output.txt","w",stdout);
//
//string in;
//while(cin>>in)
//{
//
//    	string output,proc;
//	
//	cin>>output;
//	int len =output.size(); 
//	
//	printf("[\n");
// for (int k = 0; k < len; k++)
//  {
//	  stack<char> input,station;
//
//	  	for (int i = in.size()-1; i >= 0; i--)
//		input.push(in[i]);
//
//	  int te=len;
//	  while(k<te)
//	  {
//		  station.push(input.top());
//		  input.pop();
//	  te--;
//	  }
//
//	bool good=true;
//	
//	for (int i = 0; i < len; i++)
//	{
//		if(station.size()==0 || output[i] != station.top() )
//		{
//			if(input.size() ==0)
//			{good =false; break;}
//			while(input.size() > 0)
//			{
//				station.push(input.top());  proc.push_back('i');
//				input.pop();
//				if(output[i] == station.top()){
//					station.pop();  proc.push_back('o');
//					break;
//				}
//				if(input.size()==0){
//					good=false;
//					break;
//				}
//			}
//		}
//		else
//			station.pop(); proc.push_back('o');
//	}
//
//	if(good)
//	{
//		for (int i = 0; i < len; i++)
//         {
//			 if(i==0)
//				 printf("%c",proc[i]);
//			   printf(" %c",proc[i]);
//		}
//		printf("\n");
//	}	
//	
// }
// printf("]\n");
//}
//
//
//return 0; 
//}
