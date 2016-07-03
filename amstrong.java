

import java.util.*;
 
class ArmstrongNumber
{
   public static void main(String args[])
   {
      int n, sum = 0, temp, remainder, digits = 0;
 
      Scanner in = new Scanner(System.in);
      System.out.println("Input a number to check if it is an Armstrong number");      
      n = in.nextInt();
      temp = n;
       while (temp != 0) {
         remainder = temp%10;
         sum = sum + (remainder*remainder*remainder);
         temp = temp/10;
      }
       if (n == sum)
         System.out.println(n + " is an Armstrong number.");
      else
         System.out.println(n + " is not an Armstrong number.");         
   }
 }
