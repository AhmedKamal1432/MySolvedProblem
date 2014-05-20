#include <cstdio>

int main()
{


  freopen("A-large-practice.in", "r", stdin);
  freopen("ouput.out", "w", stdout);
	int n;
 scanf("%d \n",&n);
 for(int tim=0; tim<n; tim++)
 {
	 int credit, items;
	 scanf("%d \n %d",&credit,&items);
	 int* arr=new int[items];
	  
	 for(int i=0; i<items; i++)
       scanf("%d",&arr[i]); 
	 
	 bool found =false;
	 for(int i=0;i<items;i++)
		 for(int j=i+1; j<items; j++)
		 {
			 if(arr[i]+arr[j] == credit)
			 {
				 printf("Case #%d: %d %d\n",tim+1,i+1,j+1);
			    i=items+10;
				break;
			 }
		 
		 }
 }
 return 0;
}