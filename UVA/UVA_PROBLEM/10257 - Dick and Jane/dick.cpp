#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
#include<string>
#include<map>
#include<sstream>
#include<cmath>

bool test(int big,int s,int m)
{
	if(big-s==m ||big-s==m+1 )
		return true;

   return false;
}

bool t_test(int x,int y,int z,int j)
{
 if(x+y+z==12+j)
	 return true;
 return false;
}
using namespace std;
int main()
{
	int dmc , cmt , dmt , J , tort ;
	int D,C,T,m;
	while(	cin >> dmc >> cmt >> dmt >> J )
   {
	tort = (12 + J - dmt - cmt) /3 ;
	D=tort + dmt;
	C=tort+cmt;

	if ((tort+D+C) == 12+J)
		cout << D << ' ' << C << ' ' << tort<<"\n" ;
	
	else 
	{
		if(test(D+1,C,dmc)&&test(C,tort,cmt) && test(D+1,tort,dmt) && t_test(D+1,C,tort,J))
		cout << D+1 << ' ' << C << ' ' << tort<<"\n" ;
		
		else if(test(D,C+1,dmc)&&test(C+1,tort,cmt) && test(D,tort,dmt) && t_test(D,C+1,tort,J))
        		cout << D << ' ' << C+1 << ' ' << tort<<"\n" ;
		
			else if(test(D,C,dmc)&&test(C,tort+1,cmt) && test(D,tort+1,dmt) && t_test(D,C,tort+1,J))
        		cout << D << ' ' << C << ' ' << tort+1<<"\n" ;
	
	
			else if(test(D+1,C+1,dmc)&&test(C+1,tort,cmt) && test(D+1,tort,dmt) && t_test(D+1,C+1,tort,J))
        		cout << D+1 << ' ' << C+1 << ' ' << tort<<"\n" ;
	
			
			else if(test(D+1,C,dmc)&&test(C,tort+1,cmt) && test(D+1,tort+1,dmt) && t_test(D+1,C,tort+1,J))
        		cout << D+1 << ' ' << C << ' ' << tort+1<<"\n" ;

			else if(test(D,C+1,dmc)&&test(C+1,tort+1,cmt) && test(D,tort+1,dmt) && t_test(D,C+1,tort+1,J))
        		cout << D << ' ' << C+1 << ' ' << tort+1<<"\n" ;

			else 
        		cout << D+1 << ' ' << C+1 << ' ' << tort+1<<"\n" ;

	
	}	
  }
	return 0;
}