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
//string hh,mm,f_hh,f_mm;
//int i_hh,i_mm;
//stringstream ss;
//char c;
//
//int tst;
//scanf("%d",&tst);
//
//for (int t = 0; t < tst; t++)
//{
//	hh.clear();mm.clear();f_hh.clear();f_mm.clear();
//
//	scanf("\n%c",&c); hh.push_back(c);
//	scanf("%c",&c); hh.push_back(c);
//	scanf("%c",&c);
//	scanf("%c",&c); mm.push_back(c);
//	scanf("%c",&c); mm.push_back(c);
//	
//	ss<<hh;  
//	ss>>i_hh;  ss.clear();
//
//	ss<<mm;  
//	ss>>i_mm;  ss.clear();
//
//	if(hh[0]=='0')
//	{
//	  if(hh[1]=='0')
//	  {
//	    if(mm[0] == '0'&& mm[1] != '9')  // 00:0?
//		{
//		  i_mm++;
//			 f_hh=hh;
//			 ss<<i_mm;
//			 ss>>f_mm;  ss.clear();
//		}
//		else              // 00:??
//		{
//		  if(i_mm<55)
//		   { 
//			 /*
//			 i_mm++;
//			 f_hh=hh;
//			 ss<<i_mm;
//			 ss>>f_mm;  ss.clear();
//             */
//			   f_mm=mm;
//			   f_mm[1]=mm[0];
//			   f_hh=hh;
//			   if(mm[0]<=mm[1])
//			   {
//				   f_mm[1]=mm[0]+1;
//				   f_mm[0]=mm[0]+1;
//			   }
//		   }
//		  else               //00:59
//		  {
//			  f_hh="01";
//			  f_mm="01";
//		  }
//
//		}
//	  }
//	  else      //0?:??
//	  {
//	    if(hh[1] > mm[1])   //09:?8
//		{
//			f_hh=hh;
//			f_mm=mm;
//			f_mm[1]=hh[1];
//		}
//		else       // 
//		{
//		  if(mm[0]< '5' )
//		  {
//			  f_hh =hh;
//			  f_mm=mm;
//			f_mm[0]=mm[0]+1;
//			f_mm[1]=hh[1];
//		  }
//		  else     //0?:59
//		  {
//		  i_hh++;
//		  if(i_hh == 24)
//			  i_hh =00;
//		  
//		  ss<<i_hh;
//		  ss>>f_hh;   ss.clear();
//       
//		  if(f_hh.size() == 1)
//		    f_hh.insert(0,"0");
//
//			f_mm=f_hh;		  
//		  }
//		}
//
//	  }
//		  
//	}
//	else
//	{
//		f_mm=hh;
//		f_mm[0]=hh[1];
//		f_mm[1]=hh[0];
//		f_hh=hh;
//
//	  if(f_mm < mm) //problem 
//	  {
//		  i_hh++;
//		  if(i_hh == 24)
//			  i_hh =00;
//		  
//		  ss<<i_hh;
//		  ss>>f_hh;   ss.clear();
//
//		if(f_hh.size() == 1)
//		  f_hh.insert(0,"0");
//
//		  f_mm[0]=f_hh[1];
//		  f_mm[1]=f_hh[0];		  
//	  }
//	
//	}
//
//	if(f_hh.size() == 1)
//		f_hh.insert(0,"0");
//
//	if(f_mm.size() == 1)
//		f_mm.insert(0,"0");
//
//	cout<<f_hh<<":"<<f_mm<<endl;
//}
//
//
//}