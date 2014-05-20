//#include <cstdio>
//#include <iostream> 
//using namespace std;
//	int main ()
//	{
//	    int n, r;
//	    int cases = 0;
//	 
//	    while ( scanf ("%d %d", &r, &n) ) {
//	        if ( r == 0 && n == 0 ) break;
//	 
//	        bool printed = false;
//	 
//	        for ( int i = 1; i <= 27; i++ ) {
//	            if ( n * i >= r ) {
//	                printf ("Case %d: %d\n", ++cases, i - 1);
//	                printed = true;
//	                break;
//	            }
//	        }
//	 
//	        if ( !printed )
//	            printf ("Case %d: impossible\n", ++cases);
//	    }
//	 
//	    return 0;
//	}