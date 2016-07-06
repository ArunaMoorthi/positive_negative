import java.lang.*;
import java.util.*;
  
 public class convert
{
 public static void main(String args[]) {
convert cv = new convert();    
int reverse = 0, digit, num, mod;
Scanner s = new Scanner(System.in);     
System.out.println("Enter a positive Integer\n");
    num= s.nextInt();
 
    /* reverse the input number */
    while (num > 0) 
{
        reverse = (reverse * 10) + num % 10;
        num /= 10;
    }
    num = reverse;
 
    while (num > 0)
 {
        digit = num % 10;
        cv.printDigit(digit);
        num = num / 10;
    }
         
    
}
 
void printDigit(int digit){
    switch (digit) {
        case 0:
                System.out.println("Zero ");
                break;
        case 1:
                System.out.print("One ");
                break;
        case 2:
                System.out.print("Two ");
                break;
        case 3:
                System.out.print("Three ");
                break;
        case 4:
                System.out.print("Four ");
                break;
        case 5:
                System.out.print("Five ");
                break;
        case 6:
                System.out.print("Six ");
                break;
        case 7:
                System.out.print("Seven ");
                break;
        case 8:
                System.out.print("Eight ");
                break;
        case 9:
                System.out.print("Nine ");
                break;
    }
}
}
