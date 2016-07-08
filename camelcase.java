import java.util.*;
class camelcase{

public static void main(String[] args) {
Scanner sc =new Scanner(System.in);
System.out.println("\nEnter a string:");
String str1=sc.nextLine();
StringBuffer sb = new StringBuffer();
    for (String s : str1.split(" ")) {
        sb.append(Character.toUpperCase(s.charAt(0)));
        if (s.length() > 1) {
            sb.append(s.substring(1, s.length()).toLowerCase());
        }
    }
    System.out.println(sb);
}
}
