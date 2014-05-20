//#include<cstdio>
//#include<cstdlib>
//#include<cmath>
//#include<iostream>
//#include<sstream>
//#include<cstring>
//#include<vector>
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
//int tst;
//scanf("%d",&tst);
//for (int ts = 0; ts < tst; ts++)
//{
//    scanf("\n\n");
//	string s;
//	while(getline(cin,s) && s.size()==0);
//	 char u1,u2;
//	 float v1,v2;
//	 char op1=' ',op2=' ';
//	 string temp;
//	 int i;
//   for(i=0; i<s.size(); i++)
//	{
//
//	  if(s[i]== '=')
//	  {
//	   u1=s[i-1];
//	   int k=i+1;
//	   while(s[k]>='0' && s[k]<='9' || s[k]=='.')
//	   {
//		   temp.push_back(s[k]);
//		   k++;
//	   }
//	   stringstream ss;
//	   ss<<temp;
//	   ss>>v1;
//	   ss.clear();
//	   temp.clear();
//	  
//	   if(s[k]=='m'||s[k]=='k' || s[k]=='M')
//		   op1=s[k];
//	   i++;
//	   break; 
//	  }
//	}
//
//   
//   for(i; i<s.size(); i++)
//	{
//
//	  if(s[i]== '=')
//	  {
//	   u2=s[i-1];
//	   int k=i+1;
//	   while(s[k]>='0' && s[k]<='9' || s[k]=='.')
//	   {
//		   temp.push_back(s[k]);
//		   k++;
//	   }
//	   stringstream ss;
//	   ss<<temp;
//	   ss>>v2;
//	   ss.clear();
//	   temp.clear();
//	  
//	   if(s[k]=='m'||s[k]=='k' || s[k]=='M')
//		   op2=s[k];
//	   
//	   break; 
//	  }
//	}
//
//    printf("Problem #%d\n",ts+1);
//
//   if((u1=='P' && u2 =='U') || (u2=='P' && u1=='U'))
//   {
//	   float v3;
//	    if(u1='P')
//			v3=v1/v2;
//		else
//		  v3=v2/v1;
//	   if(op1 !=' ' || op2!=' ')
//	   {
//	     if(op1=='m')
//			 v3 /=1000;
//		 else if(op1=='k')
//			 v3*=1000;
//		 else
//			 v3 *= 1000000;
//	   }
//	      printf("I=%.2fA\n",v3);
//	   
//   }
//   else if((u1=='I' && u2 =='U') || (u2=='I' && u1=='U'))
//   {
//	      float v3;
//	    v3=v2*v1;
//	   if(op1 !=' ')
//	   {
//	     if(op1=='m')
//			 v3 /=1000;
//		 else if(op1=='k')
//			 v3*=1000;
//		 else
//			 v3 *= 1000000;
//	   }
//	      printf("U=%.2fA\n",v3);
//	  
//   }
//   else
//   {
//	     float v3;
//	    if(u1='P')
//			v3=v1/v2;
//		else
//		  v3=v2/v1;
//	   if(op1 !=' ')
//	   {
//	     if(op1=='m')
//			 v3 /=1000;
//		 else if(op1=='k')
//			 v3*=1000;
//		 else
//			 v3 *= 1000000;
//	   }
//	      printf("U=%.2fA\n",v3);
//	   
//   }
//
//
//}
//return 0; 
//}