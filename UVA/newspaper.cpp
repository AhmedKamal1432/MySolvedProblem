//#include<cstdio>
//#include<cstdlib>
//#include<cmath>
//#include<iostream>
//#include<sstream>
//#include<string>
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
// //   freopen("input.txt","r",stdin);
// //   freopen("output.txt","w",stdout);
//int tst;
//	scanf("%d",&tst);
//for (int i = 0; i < tst; i++)
//{
//		int n,mny;
//		scanf("%d\n",&n);
//		unsigned char c;
//		map<unsigned char,int> mp;
//		for (int i = 0; i < n; i++)
//		{
//			c=getchar();
//			scanf("%d\n",&mny);
//			mp[c]=mny;
//		}
//
//    int ln;
//	string line;
//		scanf("%d",&ln);
//		map<unsigned char,int>::iterator m_it;
//		map<unsigned char,int>::iterator end_it=mp.end();
//	  unsigned long long int pay=0;
//	  long long int dolar=0;
//	  int cent=0;
//
//		for (int i = 0; i < ln; i++)
//		{
//			//getline(cin,line);
//			//scanf("\n");
//
//		 //int length=line.size();
//		 //  if(length<1)
//		 //  {
//		 //   i--;
//			//continue;
//		 //  }
//
//		 //  for (int k = 0; k < length; k++)
//		 //  {
//			//   m_it = mp.find(line[k]);
//			// 
//			//   if(m_it != end_it)
//			//	   pay += m_it->second;			   
//		 //  }
//			scanf("\n");
//int i_c;
//			while (  c!='\n')
//			{
//				i_c=getchar();
//				if(i_c != EOF && i_c!='\n')
//					c=i_c;
//				else
//				  break;
//				m_it = mp.find(c);
//			 
//			   if(m_it != end_it)
//			   {
//				   pay += m_it->second;
//			    if(pay>99)
//				{
//					dolar+= 1;
//					pay -= 100;
//				}
//			   }
//
//			}
//
//		}
//
//    cent=pay%100;
//	dolar+= pay/100;
// printf("%lld.%02d$\n",dolar,cent);
//}
//
//return 0; 
//}
