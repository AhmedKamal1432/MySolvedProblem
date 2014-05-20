#include <iostream>
using namespace std;
int main()
{
int n;
cin>> n;
int amazing=0;
int now ;
cin>>now;
int max ,min;
max=min=now;
for(int i=1;i<n;i++)
{
  cin>>now;
  if(now>max)
  {
	 amazing++;
     max=now;
  }
  else if (now < min)
     { 
		 amazing++;
       min = now;
      }
}
cout<<amazing;
return 0;
}