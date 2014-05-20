#include <iostream>
#include <string>
#include<vector>
using namespace std;

class	ArrayHash
{
public:
  int getHash(string *mat);
};


int ArrayHash:: getHash(string *mat)
{
	int temp;
	int sum=0;
	for (int i = 0; i <6; i++)
	{
		for (int j = 0; j < mat[i].length(); j++)
		{
			temp=mat[i][j]-'A'+i+j;
			sum+=temp;
		}
	}

 return sum;
}


int main()
{
	string s[6]={"A",
 "B",
 "C",
 "D",
 "E",
 "F"};

		ArrayHash tst;
		int test=tst.getHash(s);
		cout<<test;
		return 0;
}