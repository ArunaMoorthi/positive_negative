import java.util.*;
public class two
{  
    public static void main(String args[])  
    {  

        Scanner in=new Scanner(System.in);
        System.out.println("Enter the number : ");
        int num = in.nextInt();

        
   	 if ((num & (num - 1)) == 0)
                {  
            System.out.println("The number is a power of two");  
        }  
        else  
        {
            System.out.println("The number is a  NOT A power of two");  
        }
    }  
} 
