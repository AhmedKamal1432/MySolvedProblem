#include <iostream>
#include<string>
using namespace std;

class DiagonalDisproportion
{	
public:

int getDisproportion(string*) ;

};

int DiagonalDisproportion::getDisproportion(string* mat)
{ 
 	 int mn_d=0;
	 int cl_d=0;
	 int temp;
	int len=mat[0].length();
	for (int i = 0; i < len; i++)
	{
		mn_d += mat[i][i];
		cl_d += mat[i][len-1-i];
	}
	return mn_d-cl_d; 
}

int main()
{
	string s[50]={"7748297018","8395414567","7006199788","5446757413","2972498628",
"0508396790","9986085827","2386063041","5687189519","7729785238"};
	DiagonalDisproportion test;
	int sum =test.getDisproportion(s);
  cout<<sum;
  return 0;
}