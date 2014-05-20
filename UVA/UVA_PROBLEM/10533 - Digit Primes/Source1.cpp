#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
#include<string>
#include<map>
#include<sstream>
#include<cmath>

using namespace std;

int sum_i(int x)
{
	stringstream ss;
	string s;
	ss<<x;
	ss>>s;

	int sum=0;
	for (int i = 0,len=s.size(); i <len ; i++)
	{
		sum += (int) (s[i]-'0');
	}

	return sum;
}

int fsum_i(int x)
{
char Result[16]; // string which will contain the number

sprintf ( Result, "%d", x ); // %d makes the result be a decimal integer 

	int sum=0;
	for (int i = 0; Result[i] ; i++)
	{
		sum += (int) (Result[i]-'0');
	}	
return sum;
}

bool isprime(int x)
{
	if(x%2 == 0)
		return false;

 	int j=3;
	for(;j*j<=x && x%j!=0; j+=2); // No loop body

	if (j*j>x)
		return true;

	return false;
}

int main()
{
//	freopen("input.txt","r",stdin);
//	freopen("output.txt","w",stdout);
	
	vector<int>prime;
	vector<int>digPrime;
	prime.push_back(2);
	digPrime.push_back(2);
	int temp;
	for (int i=3; i<1000000;i+=2) 
	{
	// This loop stops either when j*j>i or when i is divisible by j. //Get Primes between 2 numbers
	// The first condition means prime, the second, not prime.
	int j=3;
	for(;j*j<=i && i%j!=0; j+=2); // No loop body

	if (j*j>i)
	{
		prime.push_back(i); //i is the prime
	    	temp=fsum_i(i);

			//temp=sum_i(i);

			if(temp%2==1 || temp == 2)
			   if(binary_search(prime.begin(),prime.end(),temp))
			     digPrime.push_back(i);

			//if(isprime(temp))
			//	digPrime.push_back(i);
	}
	
	}
	


	//starting getting input

	int tst;
	int big,end;
	int num;
	vector<int>::iterator it,it2;

	scanf("%d",&tst);
	for (int cas = 0; cas < tst; cas++)
	{
		num=0;
	 scanf("%d %d",&big,&end);

	 //getting the first digit prime 
//	 /*for (int i = big; i < end; i++)
//	 {
//		  it =find(digPrime.begin(),digPrime.end(),i);
//		 if (it != digPrime.end() )
//		   break;
//	 }
//
//	 if (it == digPrime.end())
//		 printf("0\n");
//	 else
//	 {
//		 num++;
//		 it++;
//		 while (it !=digPrime.end() && *it <= end  )
//		 {
//		  num++;
//		  it++;
//		 }
//	 }
//*/

	 // get the frist element
	 it=lower_bound(digPrime.begin(),digPrime.end(),big);
	 if(it != digPrime.end())
	 {
		 it2=lower_bound(digPrime.begin(),digPrime.end(),end);

		 if(it2 != digPrime.end())
	        if(*it2 == end)
			 num =it2-it+1;
			else
				num=it2-it;
	 
		 else 
			 num=(digPrime.begin()+digPrime.size())- it  ;
	 }
	 else
		 num=0;


	 printf("%d\n",num);
	 
	}
	

	return 0;
}