///*
//
// * Normalize_form.cpp
// *
// *  Created on: Nov 6, 2013
// *      Author: root
//*/
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
//string s;
//char op;
//
//bool hamada(int i,int &rt_i)
//{
//	vector<char>arr;
//  while(i<s.size())
//  {
//  if(s[i]=='T'|| s[i]=='F')
//  {
//	  arr.push_back(s[i]);
//	  i++;
//  }
//  else if(s[i]=='(')
//  {
//	  bool ans;
//	  int re_i;
//	  ans=hamada(i+1,re_i);
//
//	  if(ans)
//		  arr.push_back('T');
//	  else
//		  arr.push_back('F');
//	  i=re_i;
//  }
//  else   //the end of braket
//  {
//	  bool ans;
//	  if(arr[0]=='T')
//		  ans=true;
//	  else
//		  ans=false;
//
//	  for(int k=1;k<arr.size(); k++)
//	  {
//		  bool temp;
//
//		  if(arr[k]=='T')
//		 	  temp=true;
//		  else
//		      temp=false;
//
//		  if(op == 'D')
//		   ans=ans&&temp;
//		  else
//		  ans=ans||temp;
//
//	  }
//
//	  if(op == 'D')
//		  op='R';
//	  else
//		  op='D';
//
//	  rt_i=i+1;
//      return ans;
//  }
//
//  }
//}
//
//int main()
//{
//    freopen("input.txt","r",stdin);
// //   freopen("output.txt","w",stdout);
//
//
//  scanf("\n\n");
//  getline(cin,s);
//  while(s.size()== 0)
//	  getline(cin,s);
//int tst=1;
//  while(s!="()")
//  {
//	  op='D';
//	  int fa;
//	  bool ans;
//	  ans=hamada(1,fa);
//
//	  if(ans)
//	    printf("%d. true\n",tst);
//	  else
//		  printf("%d. false\n",tst);
//
//	  getline(cin,s);
//	    while(s.size()== 0)
//	  	  getline(cin,s);
//   tst++;
//  }
//
//
//
//
//
//return 0;
//}
//
//
//
//
