#include <iostream>
using namespace std;

int maxPoint (int*,int*);
int main()
{
 int wines[50]={1,4,3,0,0};

 int ties[50]= {3,1,5,3,1};
 maxPoint(wines,ties);

}
int maxPoints (vector<int>  wins,vector<int> ties)
{
  int arr[50];
  int temp;
  int len=wins.size();
  for (int i = 0; i <len ; i++)
  {
	  temp=wins[i]*3+ties[i];
	  arr[i]=temp;
  }

  int max= arr[0];
  for (int i = 0; i < len; i++)
  {
	  if(arr[i]>max)
		  max=arr[i];
  }
  return max;
}
