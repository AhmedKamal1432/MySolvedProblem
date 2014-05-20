import java.util.Scanner;
import java.util.Vector;
//import java.math.BigInteger;
import java.util.*;

public class Main {
	 public static void main(String[] args) {
		 Scanner input =new Scanner (System.in);
		 Integer t,n,sum=0,set=0;
			 n=input.nextInt(); 
          while(n != 0)
          {  
        	  set++;
		 sum = 0;
		 int []arr = new int[n+1] ;
		 for (int i = 0; i < n; i++)
		 {
		   arr[i]=input.nextInt();
		   sum = sum+arr[i];
		 }
		 
		 sum = sum/n;
		 t=0;
		 for (int i = 0; i < n; i++)
		 {
			 if(arr[i] > sum)
		      t = t+ arr[i]-sum;
		 }

		  System.out.println("Set #" + set);
	  System.out.println("The minimum number of moves is "+ t +".\n");
	  n=input.nextInt();
          //System.out.println(n);
		 }
	 input.close();
 }	 


}
