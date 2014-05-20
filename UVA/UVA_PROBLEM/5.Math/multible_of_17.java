
import java.math.BigInteger;
import java.util.Vector;
import java.io.BufferedInputStream;
import java.io.BufferedReader;
import java.io.FileInputStream;
import java.io.FileReader;
import java.io.IOException;
import java.math.BigDecimal;
import java.util.Scanner;

public class Main {
	
	public static void main(String[] args) 
    {
       Scanner input = new  Scanner( System.in );
    try
    {
  while(true)
{
    	Integer a,n; 
    	IOException e=new IOException();
	       
	       BigInteger[] answer=new BigInteger[2];
	       String s;
	       s=input.next();
	       if(s=="0")
	    	   throw(e);
	    	   
	       a=s.charAt(s.length()-1)-'0';
	    	       
	       s = s.substring(0, s.length()-2);
	       BigInteger bi1=new BigInteger(s);
	       bi1 = bi1.subtract(BigInteger.valueOf(5*a));
	       answer=bi1.divideAndRemainder(BigInteger.valueOf(17));
	       
	       if(answer[1] == BigInteger.valueOf(0))
	           System.out.println(1);
	       else
	    	   System.out.println(0);
} 
    }
     catch (Exception e)
     {
    	 
     }
     
    }
}
