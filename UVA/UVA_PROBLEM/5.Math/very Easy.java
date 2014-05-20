
import java.math.BigInteger;
import java.util.Vector;
import java.io.BufferedInputStream;
import java.io.BufferedReader;
import java.io.FileInputStream;
import java.io.FileReader;
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
    	n=input.nextInt();
    	a=input.nextInt();
    		    
	       BigInteger bi1=new BigInteger("0");
	       BigInteger answer=new BigInteger("0");
	       
	       for (Integer i = 1; i < n+1; i++)
	       {
	    	 bi1=BigInteger.valueOf((long)a);
			 bi1 = bi1.pow(i);
			 bi1 = bi1.multiply(BigInteger.valueOf((long)i));
			 answer = answer.add(bi1);
		   }
	       System.out.println(answer.toString());
} 
    }
     catch (Exception e)
     {
    	 
     }
     
    }
}
