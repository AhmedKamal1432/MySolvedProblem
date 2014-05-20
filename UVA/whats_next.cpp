/*

 * whats_next.cpp
 *
 *  Created on: Nov 6, 2013
 *      Author: root

#include<iostream>
#include<vector>
#include<cstdio>
using namespace std;
int main()
{
	//freopen("input.txt","r",stdin);
 float n1,n2,n3;
 while(scanf("%f %f %f",&n1,&n2,&n3) != EOF && !(n1==0 && n2==0 && n3==0))
 {
	int d1,d2;
	float r1,r2;
	d1=n2-n1;
	d2=n3-n2;

	r1=n2/n1;
	r2=n3/n2;
	if(d1==d2)
	{
		int ans=n3+d1;
		printf("AP %d\n",ans);
	}
	else
	{
		int ans=n3*r1;
		printf("AP %d\n",ans);

	}

 }

}



*/
