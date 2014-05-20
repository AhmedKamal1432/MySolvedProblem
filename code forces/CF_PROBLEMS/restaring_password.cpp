#include <iostream>
#include<cstdio>
#include<string>
using namespace std;

int main()
{
  char arr[8][11];
  string s[10];
  int submit;
  for (int i = 0; i < 8; i++)
  {
	  for (int j = 0; j < 10; j++)
		  cin>>arr[i][j];
    
	  arr[i][10]='\0';
  }
  for (int i = 0; i < 10; i++)
	  cin>>s[i];
  
  for (int i = 0; i < 8; i++)
  {
	  for (int j = 0; j < 10; j++)
	  {
		  if(arr[i]==s[j])
		  {
			  cout<<j;
		     break;
		  }
	  }
  }

	return 0;
}