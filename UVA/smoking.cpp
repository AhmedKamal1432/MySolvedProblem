#include <cstdio>

int main()
{

long long int n,k,temp,num,butts;
double f_temp;
while(scanf("%lld %lld",&n,&k)>0)
{
	if(k==1)
		continue;
	num= 0;
	num=butts=n;
	while(butts>=k)
	{
	 num+=(butts/k);
	 butts=butts/k + butts%k;
	}
  printf("%lld\n",num);
}
return 0;
}