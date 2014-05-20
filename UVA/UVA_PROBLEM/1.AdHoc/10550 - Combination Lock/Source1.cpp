#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

int main()
{
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
   
	int big,st,nd,rd;
	int temp,degre,lines;

	while(scanf("%d %d %d %d",&big,&st,&nd,&rd)!=EOF)
	{
	 if(big==st&&st==nd&&nd==rd&&rd==0)
		 break;
	
        degre = 720+360 + (((st>big?(40-st)+big:(big-st)) + (nd<st?(40-st)+nd:(nd-st)) + (rd>nd?(40-rd)+nd:(nd-rd))))*9;

	 printf("%d\n",degre);
	}

return 0;
}