#include <iostream>
#include <string>
#include<vector>
using namespace std;

class Sortness
{
public:
float  getSortness(int * arr);
private:

};
float  Sortness:: getSortness(int* arr)
{
 int max=0;
 int  min=0;
 int avrg[10];
 int len=8;
 for (int i = 0; i < len; i++)
 {
	 //search for max left
	 max=0;
	 for (int j = 0; j < i; j++)
	 {
		 if(arr[j]>arr[i])
			 max++;
	 }
 
    //search for min right
	 min=0;
	 for (int j = i+1; j <len; j++)
	 {
		 if(arr[j]<arr[i])
			 min++;
	 }
	 avrg[i]=min+max;
 }
 int sum =0;
 for (int i = 0; i < len; i++)
 {
	 sum+=avrg[i];
 }

 return (float)sum/(float)len;
}


int main ()
{
 int arr[50]={3,2,1,4,6,7,5,8};
	 Sortness test;
	 float t=test.getSortness(arr);
 cout<<t;

 return 0;

}