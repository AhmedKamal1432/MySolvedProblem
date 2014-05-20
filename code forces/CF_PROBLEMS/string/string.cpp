#include <cstdio>
#include <string>
#include <cstring>
using namespace std;

int main ()
{
 char s[102];
 int len;
 while(gets(s)>0)
 {
	 len=strlen(s);
  for(int i=0; i<len; i++)
  {
   if(s[i]=='a'|| s[i]=='A' || s[i]=='e' || s[i]=='E' || s[i]=='i' || s[i]=='I' || s[i]=='o' ||s[i]=='O' || s[i]=='u' || s[i]=='U' || s[i]=='y' || s[i]=='Y')
     continue;
   printf( ".%c",tolower(s[i]) );
  }
 
 
 }

 return 0;
}