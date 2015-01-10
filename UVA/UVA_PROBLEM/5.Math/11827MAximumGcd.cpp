#include <cstdio>
#include <iostream>
#include <vector>
#include <string>
#include <sstream>
using namespace std;

long long int get_gcd(long long int ,long long int );
long long int* line_stringToArray_int (string s,int& num);

int main ()
{
	int n;
	long long int* arr;
	 string s;

	scanf("%d",&n);
	
	for(int t=0;t<n+1;t++)
	{
	long long int max,temp;
	 getline(cin,s);
	 int num=s.length();
	 if(num==0)
		 continue;
	 arr=line_stringToArray_int(s,num);
	 max=0;
	 for(int i=0;i<num-1;i++)
		 for(int k=i+1;k<num;k++)
		 {
			if(i==k)
				continue;
			 temp=get_gcd(arr[i],arr[k]);
		     if(temp>max)
				 max=temp;
		 
		 }
		 cout<<max<<endl;
	}
	return 0;
}

long long int get_gcd(long long int x,long long int y)
{
	long long int r;
	while(y!=0)
	{
	  r=x%y;
	  x=y;
	  y=r;
	}
	return x;


}

long long int* line_stringToArray_int (string s,int& num)
{
	
	
long long int len =s.length();
	long long int *int_ptr= new long long int[len]();
	

	 int j=0;
	 string temp;
	 int i=0;
	 while(s[i]==' ')
		 i++;
	 for(i;i<len;i++)
	{
	 
	 if(s[i]==' ')
	 {   
		 

		 if(i!=len-1&&s[i+1]!=' ')
		 {	 
			 stringstream ss;
			 ss<<temp;
			ss>>int_ptr[j]; 
			 j++;
			 temp="";
		 } 
	     continue;		 
	 }
	
	temp+=s[i];
	if(i==len-1&&s[i]!=' ')//last one
	{
	stringstream ss;
			 ss<<temp;
			ss>>int_ptr[j]; 
	}
	}

	num=j+1;
	return int_ptr;
}