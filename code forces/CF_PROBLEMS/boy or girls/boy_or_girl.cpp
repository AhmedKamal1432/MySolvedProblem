#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

int main()
{
  int n=0;
  string c;
 cin>>c;
 bool repete = false;

 for(int i=0,len=c.length();i<len;i++)
 {
   repete=false;
	  for(int j=0;j<len;j++)
	  {
		   if(c[i]==c[j] && j<i)
		   {
			repete= true;
			break;
		   }
  
	  }
 
	  if(!repete)
		  n++;
 }

 if(n%2==0)
	 cout<<"CHAT WITH HER!"<<endl;
 else
	 cout<<"IGNORE HIM!"<<endl;

return 0;
}