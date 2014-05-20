#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
	/*ifstream in ("input.txt");*/
	string s;
	cin>>s;
	for(int i=0; i<s.length();i++)
	{
	 switch(s[i])
	 {
	 case 'H':cout<<"YES\n";return 0;
	 case 'Q':cout<<"YES\n";return 0;/*
	 case '+':cout<<"YES\n";return 0;*/
	 case '9':cout<<"YES\n";return 0;
	 default :break;


	 }
	
	
	}

	cout<<"NO\n";
}