#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
#include<string>
#include<map>
#include<sstream>
#include<cmath>

using namespace std;


int main()
{
//	freopen("input.txt","r",stdin);
//	freopen("output.txt","w",stdout);
	
	int A,B,C;
	float yPz,y2Pz2,yz;
	int tst;
	int z;
	bool fndSol;
	int fx,fy,fz;

	scanf("%d",&tst);
	for (int cas = 0; cas < tst; cas++)
	{
		fndSol=false;

		scanf("%d %d %d",&A,&B,&C);

		for (int x= -1*floor(sqrt(C)); x < A; x++)
		{
			if(x==0)
				continue;
			yPz = A-x;
			y2Pz2 = (float)C- (float)pow(x,2);
			yz=(float)B /(float)x;
			//condition grante that there is an answer
			if( ( y2Pz2 + 2.0*yz ) != (float) pow(yPz,2) )
				continue;

			for (int y = -1*floor(sqrt(C)); y < A; y++)
			{
			  if(y==0)
				continue;

				if(y+x >A)
					break;

				z = yPz - y;
				if(x*y*z == B && (x*x + y*y + z*z) == C )
				{
					if(x != y && y != z && x != z)
					{
					fndSol=true;		
				    fx=x;
					fy=y;
					fz=z;		
				  break;
					}
				}

			}

			if (fndSol)
			 break;

			
		}
	
		if(fndSol)
			printf("%d %d %d\n",fx,fy,fz);
		else
			printf("No solution.\n");
		
	
	}
	


	return 0;
}