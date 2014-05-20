#include <iostream>
#include <string>
using namespace std;

class WhiteCells
{
public:

	int countOccupied(string * mat);
};


int WhiteCells::countOccupied(string * mat)
{
	int sum=0;
	for (int i = 0; i < 8; i++)
	{
		if(i%2==0)
		{
			for (int j = 0; j < 8; j+=2)
			{
				if(mat[i][j]=='F')
					sum++;
			}

		}
		else
		{
			for (int j = 1; j < 8; j+=2)
			{
					if(mat[i][j]=='F')
					sum++;
			}
		}
	}

return sum;
}

int main ()
{
	string s[8]={"FFFFFFFF",
 "FFFFFFFF",
 "FFFFFFFF",
 "FFFFFFFF",
 "FFFFFFFF",
 "FFFFFFFF",
 "FFFFFFFF",
 "FFFFFFFF"};

	WhiteCells test;
	int sum=test.countOccupied(s);
	cout<<sum;
}
