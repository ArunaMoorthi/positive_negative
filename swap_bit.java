import java.lang.*;
import java.util.*;
class swap 
{
  public static void main(String args[])
  {
    Scanner key = new Scanner(System.in);
    System.out.println("\n Enter two numbers to swap:");
    int a = key.nextInt();
    int b = key.nextInt();
    System.out.println("\n The numbers before swapping are a= " +a+ "and b= " +b);
    a = a^b;
    b = a^b;
    a = a^b;
    System.out.println("\n The numbers after swapping are a= " +a+ "and b= " +b);
  }
}
