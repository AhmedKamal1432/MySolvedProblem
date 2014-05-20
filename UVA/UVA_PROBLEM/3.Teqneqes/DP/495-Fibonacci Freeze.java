/* package whatever; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;
import java.math.BigInteger;

/* Name of the class has to be "Main" only if the class is public. */
class Main
{
	public static BigInteger[] dp = new BigInteger[6000];
  public static BigInteger fib(int n){
	if(dp[n].compareTo(BigInteger.valueOf(-1)) != 0)
		return dp[n];
	else
		return dp[n]=fib(n-1).add(fib(n-2));
}

	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
      for(int i = 0; i< 5005;i++)
         dp[i]=BigInteger.valueOf(-1);
        dp[0]=BigInteger.ZERO;
        dp[1]=BigInteger.ONE;
        Scanner s = new Scanner(System.in);
      while (s.hasNextInt()) {
      	Integer n =s.nextInt();
      BigInteger ans = fib(n);
      System.out.println("The Fibonacci number for "+n.toString() +" is "+ans.toString() ); 
      }
 
		
	}
}
