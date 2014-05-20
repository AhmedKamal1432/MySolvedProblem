/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package karakovia;

import java.math.BigInteger;
import java.util.Vector;
import java.io.BufferedInputStream;
import java.io.BufferedReader;
import java.io.FileInputStream;
import java.io.FileReader;
import java.util.Scanner;

/**
 *
 * @author Ahmed Kamal
 */
public class Main {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
       
          Integer frnd;
          Integer n;
    Vector<BigInteger> bill=new Vector();
    BigInteger sum=new BigInteger("1"); 
    BigInteger temp=new BigInteger("1"); 
    BigInteger one_pay=new BigInteger("1");
   long x=0;
   Integer b=1;
        try{
            one_pay=temp=sum=BigInteger.valueOf(x) ;
            Scanner input = new  Scanner( System.in );
             n = input.nextInt();
             frnd = input.nextInt();
             
             while(frnd != 0 || n!=0 )
             {
                 one_pay=BigInteger.valueOf(x);
                         temp=BigInteger.valueOf(x);
                         sum=BigInteger.valueOf(x) ;
                 for (int i = 0; i < n; i++) {
                   temp = input.nextBigInteger(); 
                 sum= sum.add(temp);
                 }
               one_pay=sum.divide(BigInteger.valueOf(frnd));
             System.out.println("Bill #" + b.toString() +" costs "+ sum.toString()+": each friend should pay " + one_pay.toString());
                   
                     System.out.println();
           
             
             n = input.nextInt();
              frnd = input.nextInt();
          
             b++;
             }
             
        }
        
        catch(Exception e)
        {
            System.out.println("error"+ e.getMessage());
        }
    
    }
}
