
import java.util.*;

class ReverseString {
    
    void reverse(int i,String s) {

        if(i>=s.length())
            return;
        else {
            reverse(i+1,s);
            System.out.print(s.charAt(i));
        }        
    }
}

class ReverseString_Main {

    public static void main(String[] args) {
        
        Scanner sc = new Scanner(System.in);
        ReverseString obj = new ReverseString();

        System.out.println("Enter the string: ");
        String s = sc.nextLine();

        obj.reverse(0,s);
        System.out.println();
    }
}
