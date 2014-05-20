#include <iostream>
using namespace std;
int main()
{
  int n ,k ;
  cin>>n>>k;
  int data,temp;
  int go=0;

  //starting looping 
  for(int i=0;i<n;i++)
  {
    cin>>data;
	if(data==0)
	{
	  cout<<go;
	  return 0;
	}

  if(i<k)
    go++;
  else if(temp==data)
    go++;
  else break;
  
  temp=data;
  }
 
  cout<<go;
  
  

  
  }


