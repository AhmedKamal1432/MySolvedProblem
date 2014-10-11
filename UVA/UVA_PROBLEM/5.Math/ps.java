
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
   try
   {
      Scanner input = new  Scanner( System.in );      
      while(input.hasNext())
       {
        BigInteger s=new BigInteger("0");     
        BigInteger b=new BigInteger("0");

        BigInteger n=new BigInteger("0");
        s=input.nextBigInteger();  
        b=input.nextBigInteger();
        String ss =s.toString(); 
        // ta7wel
        answer = bi1.multiply(bi2);
        
        System.out.println(answer.toString());
       } 
    }
    catch (Exception e)
    {
      
    }
    
   }
}
