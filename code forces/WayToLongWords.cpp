#include<iostream>
#include<string>
#include<sstream>
using namespace std;

int main()
{
 int t;
cin>>t;
string big,abb,s_temp;
abb="";
stringstream ss;
int temp;
for (int b = 0; b < t; b++)
{
	abb="";
 cin>>big;
 temp=big.size()-2;
 
 if(temp<9)
 {
	cout<<big<<endl;
	 continue;
 }
 ss<<temp;
 ss>>s_temp;
 abb+=big[0];
 abb+=s_temp;
 abb+=big[big.size()-1];
 cout<<abb<<endl;
s_temp="";
ss.clear();
}
return 0;
}
