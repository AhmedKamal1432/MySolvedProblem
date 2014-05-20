#include <iostream>
#include <fstream>

void bubble(int*,int);
void swap(int&,int&);
using namespace std;
int main()
{
	/*ifstream in ("input.txt");*/
	int s_me,s_him,n;
	cin>>n;
	int* data = new int [n];
	/***** starting fill data ****/
	for(int i=0;i<n;i++)
		cin>>data[i];

	bubble(data,n);

	/**** starting calculate */
	s_me=s_him=0;
	for(int i=0;i<n;i++)
	{
		s_me=s_him=0;
		/*calculating me*/
	  for(int me=0;me<=i;me++)
	  s_me +=data[me];	  
	  
	  // calculating him
	for(int him=i+1;him<n;him++)
	  s_him +=data[him];	  
	  
	if(s_me>s_him)
	{
		cout<<i+1;
		return 0;
	}
	else
		continue;
	
	
	}

}

void bubble(int list[],int N)
{
	int current=0;
bool swappedElems = true;
while( swappedElems&&current<N) 
{
     swappedElems = false;
	for  (int walker= N-1 ; walker>current; walker--)
	{
		if ( list[walker-1] < list[walker] )
		{
			swap ( list[walker-1],list[walker] );
			 swappedElems = true;
		}
   }
	current ++;
}

}



void swap(int&x,int&y)
{
int temp;
temp=x;
x=y;
y=temp;
}