import javax.lang.model.element.Element;

public class IntegerPalindrome {

    public static void main(String[] args) {
        
        int num = 2332;
        int tmp = num;
        int rev= 0;
        int rem = 0;
        while(num!=0) {

            rem = num % 10;
            rev = rev * 10 + rem;
            num = num / 10;
        }

        System.out.println(rev);
        System.out.println(tmp);
        if(tmp == rev)
            System.out.println("Number is palindrome");
        else
            System.out.println("Number is not palindrome");
    }
    
}
