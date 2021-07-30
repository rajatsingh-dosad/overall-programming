
import java.util.*;

class StringPalindrome {

    int checkPalindrome(String s, int i) {

        if (i >= s.length() / 2)
            return 1;
        if (s.charAt(i) == s.charAt(s.length() - i - 1)) {
            return checkPalindrome(s, i+1);
        }
        return 0;
    }
}

class StringPalindrome_Main {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        StringPalindrome obj = new StringPalindrome();

        System.out.print("Enter the string: ");
        String s = sc.nextLine();

        if (obj.checkPalindrome(s, 0) == 1)
            System.out.println("Entered string is a palindrome");
        else
            System.out.println("Entered string is not a palindrome");
    }
}
