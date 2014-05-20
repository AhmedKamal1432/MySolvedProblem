#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<iostream>
#include<sstream>
#include<cstring>
#include<vector>
#include<list>
#include<map>
#include<set>
#include<bitset>
#include<queue>
#include<utility>
#include<algorithm>
#include<functional>

using namespace std;

typedef long long int LL ;
#define vi vector<int>
#define ii pair<int,int>
#define vii vector< pair<int,int> >
#define sc(x) scanf("%d",&x)

int len;
void ofki(int n,int in,char ch = 'y')
{
 if(ch =='y')
 {
  printf(" ");
  for (int i = 0; i < n; ++i)
	 printf("-");
  printf(" ");
 }
 else
	 for (int i = 0; i < n+2; ++i)
		 printf(" ");

 if(in<len-1)
 	  printf(" ");
}

void r2si(char c,int n,int in,char ch = 'y')
{
  if(ch =='y')
  {
	 if(c!='r')
		 printf("|");
	 else
		 printf(" ");

	 for (int i = 0; i < n; ++i)
		printf(" ");

	 if(c!='l')
		 printf("|");
	  else
		 printf(" ");

  }
  else
  {
	 	 printf(" ");

	  	 for (int i = 0; i < n; ++i)
	  		printf(" ");

	  		 printf(" ");
  }

  if(in<len-1)
	  printf(" ");
}


int main()
{
//	 	 freopen("input.txt","r",stdin);
   //  freopen("output.txt","w",stdout);

int n;
while(sc(n) !=EOF && n !=0 )
{
 	string s;
 	cin>>s;
 int bb=5;
 	while(bb--)
 	{
 		len = s.size();
 		int tot;
 		if(bb%2 ==1)
 			tot =n;
 		else
 			tot=1;

 		while(tot--){
 		for (int i = 0; i < len; ++i) {
			switch(s[i])
			{
			case '1':switch (bb)
				  {
					case 4: ofki(n,i,'n');
						break;
					case 3:r2si('r',n,i);
						break;
					case 2:ofki(n,i,'n');
						break;
					case 1: r2si('r',n,i);
						break;
					case 0: ofki(n,i,'n');
						break;
				  }
				break;

			case '2': switch (bb)
					  {
						case 4: ofki(n,i);
							break;
						case 3:r2si('r',n,i);
							break;
						case 2:ofki(n,i);
							break;
						case 1: r2si('l',n,i);
							break;
						case 0: ofki(n,i);
    						break;
					  }
				break;

			case '3': switch (bb)
				  {
					case 4: ofki(n,i);
						break;
					case 3:r2si('r',n,i);
						break;
					case 2:ofki(n,i);
						break;
					case 1: r2si('r',n,i);
						break;
					case 0: ofki(n,i);
					break;
				  }
					break;

			case '4': switch (bb)
				  {
					case 4: ofki(n,i,'n');
						break;
					case 3:r2si('b',n,i);
						break;
					case 2:ofki(n,i);
						break;
					case 1: r2si('r',n,i);
						break;
					case 0: ofki(n,i,'n');
						break;
				  }
			  	break;

			case '5': switch (bb)
				  {
					case 4: ofki(n,i);
						break;
					case 3:r2si('l',n,i);
						break;
					case 2:ofki(n,i);
						break;
					case 1: r2si('r',n,i);
						break;
					case 0: ofki(n,i);
					break;
				  }
		 		break;

			case '6': switch (bb)
				  {
					case 4: ofki(n,i);
						break;
					case 3:r2si('l',n,i);
						break;
					case 2:ofki(n,i);
						break;
					case 1: r2si('b',n,i);
						break;
					case 0: ofki(n,i);
					break;
				  }
				break;

			case '7': switch (bb)
				  {
					case 4: ofki(n,i);
						break;
					case 3:r2si('r',n,i);
						break;
					case 2: ofki(n,i,'n');
						break;
					case 1: r2si('r',n,i);
						break;
					case 0: ofki(n,i,'n');
						break;
				  }
				break;

			case '8': switch (bb)
				  {
					case 4: ofki(n,i);
						break;
					case 3:r2si('b',n,i);
						break;
					case 2:ofki(n,i);
						break;
					case 1: r2si('b',n,i);
						break;
					case 0: ofki(n,i);
					break;
				  }
				break;

			case '9': switch (bb)
				  {
					case 4: ofki(n,i);
						break;
					case 3:r2si('b',n,i);
						break;
					case 2:ofki(n,i);
						break;
					case 1: r2si('r',n,i);
						break;
					case 0: ofki(n,i);
					break;
				  }
				break;

			case '0': switch (bb)
				  {
					case 4: ofki(n,i);
						break;
					case 3:r2si('b',n,i);
						break;
					case 2: ofki(n,i,'n');
						break;
					case 1: r2si('b',n,i);
						break;
					case 0: ofki(n,i);
					break;
				  }
				break;

			}
		}
 		printf("\n");
 	 }
 	}

 printf("\n");
}
	return 0;
}

