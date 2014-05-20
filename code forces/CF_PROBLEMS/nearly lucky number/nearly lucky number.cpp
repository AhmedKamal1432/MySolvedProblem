#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;
int main()
{
	//ifstream in ("input.txt");
  
	unsigned long long data;
	string s_data;
	cin>>data;
	stringstream ss;
			 ss<<data;
			ss>>s_data;
	int count=0;
  for(int i=0;i<s_data.length();i++)
    {
	 switch(s_data[i])
	  {
		 case '7':count++; 
			 break;
		 case '4':count++;
			 break;
		 default : 
			 break;
			 
	  }
			
			
	}
  if(count==7||count==4)
       cout<<"YES\n";
  else 
	  cout<<"NO\n";
return 0;
}