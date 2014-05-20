#include <iostream>
#include <fstream>


using namespace std;
int main()
{
	//ifstream in ("input.txt");
  int n,sum,temp,s_temp;
  cin>>n;
  s_temp=sum=0;
  for(int i=0; i<n; i++)
  {
	  s_temp=0;
	  for(int k=0;k<3;k++)
   {
	   cin>>temp;
      s_temp+=temp;
   }
	  if(s_temp>1)
		  sum++;
  
  }


  cout<<sum<<endl;

}