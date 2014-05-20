import java.math.*;
import java.math.BigInteger;
import java.util.Vector;
import java.io.BufferedInputStream;
import java.io.BufferedReader;
import java.io.FileInputStream;
import java.io.FileReader;
import java.math.BigDecimal;
import java.util.Scanner;
import java.util.*;

public class Main {
	public static void main(String[] args) 
    {
       Scanner input = new  Scanner( System.in );
       TreeMap<Character, String> mapper = new TreeMap<Character, String>(); // must use TreeMap as Map is an abstract class
       mapper.clear();
     /*
       ">"  →  1000,
       "<"  →  1001,
       "+"  →  1010,
       "-"  →  1011,
       "."  →  1100,
       ","  →  1101,
       "["  →  1110,
       "]"  →  1111. */
       mapper.put('>',"1000");
       mapper.put('<',"1001");
       mapper.put('+',"1010");
       mapper.put('-',"1011");
       mapper.put('.',"1100");
       mapper.put(',',"1101");
       mapper.put('[',"1110");
       mapper.put(']',"1111");
  StringBuilder s = new StringBuilder("");
  String te = input.nextLine();
  for (int i = 0; i < te.length(); i++) {
	s.append(mapper.get(te.charAt(i)));
}
  BigInteger B = new BigInteger(s.toString(),2);
  B=B.mod(BigInteger.valueOf(1000003));
  System.out.println(B.toString());
  
  
    
    }
}
