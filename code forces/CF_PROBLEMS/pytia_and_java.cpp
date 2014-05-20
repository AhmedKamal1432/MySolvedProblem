#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
 string s;
 cin>>s;
 // "byte, short, int, long, BigInteger"
 int submit;
 
 if(s.length()<3)
	 cout<<"byte\n";

 else 
	 {
		unsigned  long long int temp;
		 stringstream ss;
			 ss<<s;
			 ss>>temp;
		
		 
		 if(s.length()==3)
		 {
			 stringstream ss;
			 ss<<s;
			 ss>>temp;
			 if(temp<=127)
	 cout<<"byte\n";
			 else
				 cout<<"short\n";
		 }
     else if(s.length()<5)
	 cout<<"short\n";
	 else if(s.length()==5)
	 {
	 	 stringstream ss;
			 ss<<s;
			 ss>>temp;
		if(temp <=32767)
			cout<<"short\n";
		else
				 cout<<"int\n";
 	  }
	 else if(s.length()<10)
	 cout<<"int\n";
	 
	 else if(s.length()==10)
	 {
	  if(temp<=2147483647)
		  cout<<"int\n";
	  else
		  cout<<"long\n";
	 
	 }
	 else if(s.length()<19)
		  cout<<"long\n";
	 else if(s.length()==19)
	 {
	  if(temp<=9223372036854775807)
		  cout<<"long\n";
	  else
		  cout<<"BigInteger\n";
	 
	 
	 }
	 
	 else 

	 cout<<"BigInteger\n";
 }

}