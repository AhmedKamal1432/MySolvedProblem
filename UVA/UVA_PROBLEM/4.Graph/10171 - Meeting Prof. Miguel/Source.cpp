#include <cstdio>
#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include<algorithm>
#include<map>
using namespace std;

int main ()
{
	//freopen("input.txt","r",stdin);
   // freopen("output.txt","w",stdout);
	
	vector<char>vc;
	int me[30][30];	
    int prof[30][30];
	int n;
    char der,age,st1,st2;
	int enrg;
	vector<int>meplac,totaleng,profplac;
	char mest,profst;
	while(scanf("%d",&n)!=EOF && n != 0)
	 {
		 meplac.clear();
		 totaleng.clear();
			 profplac.clear();
	     vc.clear();

	for (int i = 0; i < 30; i++)
		for(int k = 0; k < 30; k++)
		{
		  me[i][k]=999999;
		  prof[i][k]=999999;
		}

		for (int i = 0; i < 30; i++)
		 {
		   me[i][i]=0;
		   prof[i][i]=0;
		 }

		for (int i = 0; i < n; i++)
		{
			scanf("\n%c %c %c %c %d",&age,&der,&st1,&st2,&enrg);
			if(age == 'Y')
			{
				if(me[st1-'A'][st2-'A']>enrg)
				me[st1-'A'][st2-'A']=enrg;
				
				if (der=='B')
					if(me[st2-'A'][st1-'A'] > enrg)
            		me[st2-'A'][st1-'A']=enrg;
			}
			else
			{
				if(prof[st1-'A'][st2-'A'] > enrg)
				prof[st1-'A'][st2-'A']=enrg;
					
				if (der=='B')
					if(prof[st2-'A'][st1-'A'] >enrg)
            		prof[st2-'A'][st1-'A']=enrg;
			}
						
		}


		for (int k = 0; k < 30; k++)
			for (int i = 0; i < 30; i++)
				for (int j = 0; j < 30; j++)
				{
						me[i][j] = min(me[i][j], me[i][k] + me[k][j]);
						prof[i][j] = min(prof[i][j], prof[i][k] + prof[k][j]);
				}

				scanf("\n%c %c",&mest,&profst);



				
				for (int i = 0; i < 30; i++)
					{
							meplac.push_back(me[mest-'A'][i]);
							profplac.push_back(prof[profst-'A'][i]);
							totaleng.push_back( prof[profst-'A'][i] + me[mest-'A'][i] );
				  }
				
				int small=totaleng[0];
				char c='A';	
				vc.push_back(c);
				for (int i = 1,n=totaleng.size(); i < n; i++)
				{
						if(small>totaleng[i])
						{
							vc.clear();
							small=totaleng[i];
							c=i+'A';
							vc.push_back(c);
						}
						else if(small == totaleng[i])
						{
							c=i+'A';
							vc.push_back(c);
						}
				}
					
					
					
					if(small<999999)
					{
							printf("%d",small);
							for (int i = 0; i < vc.size(); i++)
								printf(" %c",vc[i]);	
							printf("\n");
					}
					else
						printf("You will never meet.\n");
					
	}

	
	return 0;
}