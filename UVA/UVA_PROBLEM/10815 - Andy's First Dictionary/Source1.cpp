#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

bool myfunction (string  i, string j)
{
	int temp=0;
	temp=i.compare(j);
	if(temp<0)
	return true;
	
	return false;
}
int main()
{
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	
	vector<string> arr;
	string s;
	int word=0;
	char c; 
	bool grant=false;

	while(scanf("%c",&c)>0)
	{
		

		if(isalpha(c))
		{
			c=tolower(c);
			s.push_back(c);
			grant=true;
		}

	  else if(c=='\n')
	  {
		  if(grant)
		  {
			  arr.push_back(s);
		  }
		  grant=false;
	      s.clear();  
	}
	 
	  else
	  {
		  if(grant)
		  {
			  arr.push_back(s);
		  }
		  grant=false;
		  s.clear();
	  }
	}

	sort(arr.begin(),arr.begin()+arr.size(),myfunction);

	if(arr.size()>=1)
		cout<<arr[0]<<endl;
	
	for (int i = 1,n=arr.size(); i < n; i++)
	 {
		if(arr[i]!=arr[i-1])
		  cout<<arr[i]<<endl;
	}

return 0;
}