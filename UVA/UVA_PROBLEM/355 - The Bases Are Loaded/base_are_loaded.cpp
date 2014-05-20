#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
#include<cstring>
#include<map>
#include<sstream>
#include<cmath>


using namespace std;

map<int,string> mp_to_let;
map<string,int>mp_to_num;

long long int my_pow(int x, int p)
{
	long long int num=1;
	for (int i = 0; i <p; i++)
	{
     num *=x;
	}
  return num;
}

long long int to_decimal(int base,string num)
{
 long long int sum=0;
 for (int i = 0,len=num.length(); i < len; i++)
 {
	 sum += mp_to_num[num.substr(i,1)] * my_pow( base,(len-1-i));
 }

 return sum;
}

string to_base(int base,long long int num)
{
	string s,temp;
	if(num==0)
		return "0";

 while(num != 0)
 {
	 temp=mp_to_let[num%base];
	 s.insert(0,temp);
    num /=base;
 }

return s;
}


int main()
{
	
	
//	freopen("input.txt","r",stdin);
//	freopen("output.txt","w",stdout);
	

	int f_b,s_b;
	string old,fin,temp;
	
	bool vld=true;

	long long int dec;

	stringstream ss;
	for (int i = 0; i < 10; i++)
	{
		ss.clear();
		ss<<i;
		ss>>temp;
		mp_to_let[i]=temp;
		mp_to_num[temp]=i;

	}

	mp_to_let[10]="A";  mp_to_let[11]="B";  mp_to_let[12]="C";   mp_to_let[13]="D";  mp_to_let[14]="E"; mp_to_let[15]="F"; 
	mp_to_num["A"]=10;  mp_to_num["B"]=11;  mp_to_num["C"]=12;   mp_to_num["D"]=13;  mp_to_num["E"]=14; mp_to_num["F"]=15; 

  long long int old_num,old_num2;
   string s_temp;

	while(scanf("%d %d",&f_b,&s_b) != EOF)
	{
		
	  cin>>old;
	  vld=true;
	   
	  //validate chick
	  for (int i = 0,len=old.length(); i < len; i++)
	  {
		  if(mp_to_num[old.substr(i,1)] > f_b-1)
		  {
			  cout<<old;
		    printf(" is an illegal base %d number\n",f_b);
			vld=false;
			break;
		  }
	  }

	  if(!vld)
		  continue;
	  
	  dec=to_decimal(f_b,old);
 	  fin=to_base(s_b,dec);
	  cout<<old;
	  printf(" base %d = ",f_b);
	  cout<<fin;
	  printf(" base %d",s_b);
	  printf("\n");
	}

}