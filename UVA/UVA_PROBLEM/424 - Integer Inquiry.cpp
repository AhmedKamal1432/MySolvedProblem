
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
 	       BigInteger bi1=new BigInteger("0");     
	       BigInteger answer=new BigInteger("0");
 	       bi1=input.nextBigInteger();  
  	 
	     while(! bi1.equals(BigInteger.ZERO))
	      {
	       answer = bi1.add(answer);
	      } 
             	       System.out.println(answer.toString());

     }
     catch (Exception e)
     {
    	 
     }
     
    }
}
