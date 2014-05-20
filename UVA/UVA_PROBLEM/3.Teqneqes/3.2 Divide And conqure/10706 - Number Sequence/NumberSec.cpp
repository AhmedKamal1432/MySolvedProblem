#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
#include<string>
#include<map>
#include<sstream>
#include<cmath>

using namespace std;

int manyDigit(int  x)
{
 int temp=x;
 int a1,a2,a3,a4,a5,a6;
 a1= temp%10;
 temp -= a1;

 a2=temp%100;
 temp -= a2;
 if(a2!=0)
{
	a2-=9;
    a2*=2;
	a2+=9;
 }

 a3=temp%1000;
 temp -=a3;
 if(a3!=0)
 {
	 a3-=99;
    a3 *=3;
    a3+=99;
 }

 a4=temp%10000;
 temp -= a4;
if(a4!=0)
{
	a4-=999;
    a4*=4;
	a4+=999;
}

 a5=temp%100000;
 temp -=a5;
if(a5!=0)
{
	 a5-=9999;
   a5*=5;
   a5+=9999;
}

 a6=temp%1000000;
 temp -=a6;
if(a6!=0)
{
	 a6-=99999;
   a6*=6;
   a6+=99999;
}
 int *sum =new int;
 *sum = a1 + a2 + a3 + a4 + a5 + a6;
 return *sum;
}
int countDigit(int x)
{
	int sum=0;
 int temp=x;
 if(temp<10)
 {
	 sum+=temp;
	 return sum;
 }

  sum+=9;
 temp -=9;
 if(temp<91)
 {
  sum += (temp*2);
  return sum;
 }

  sum+=90*2;
 temp -=90;
 if(temp<901)
 {
  sum += (temp*3);
  return sum;
 }

  sum+=900*3;
 temp -=900;
 if(temp<9001)
 {
  sum += (temp*4);
  return sum;
 }
 
  sum+=9000*4;
 temp -=9000;
 if(temp<90001)
 {
  sum += (temp*5);
  return sum;
 }
 
  sum+=90000*5;
 temp -=90000;
 if(temp<900001)
 {
  sum += (temp*6);
  return sum;
 }

}
string intToString(int i)
{
	stringstream ss;
	ss<<i;
	return ss.str();
}

int main()
{
//	freopen("input.txt","r",stdin);
//	freopen("output.txt","w",stdout);

string arr,s;
for (int i = 1; i < 46500; i++)
{
	s= intToString(i);
		arr+=s;
}

int t;
int num;
int sum;
char Cpvt;
int Ipvt;
scanf("%d",&t);



for (int tst = 0; tst < t; tst++)
{
  scanf("%d",&num);
   
  for (int i = 1; i < 46500; i++)
  {
	  sum = countDigit(i);

	  if(num-sum > 0)
	  {
	   num -= sum;
	  }
	  else
	  {
	    Cpvt = arr[num-1];
		break;
	  }
  }

  Ipvt=Cpvt-'0';
 printf("%d\n",Ipvt);

}


return 0;
}