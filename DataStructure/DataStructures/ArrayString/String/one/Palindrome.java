public class Palindrome {

    public static void main(String[] args) {
        
        String s = "MADAM";

        // StringBuffer sb = new StringBuffer(s);
        // sb.reverse();

        // if(s.equals(sb.toString())) {
        //     System.out.println("String is a palindrome");
        // }
        // else
        //     System.out.println("String is not a palindrome");



        //Using normal for loop

        int len = s.length();
        int flag = 1;
        for(int i=0;i<s.length()/2;i++) {        
            char rev = s.charAt(len-i-1);
            if(String.valueOf(s.charAt(i)).equals(String.valueOf(rev))) {
                continue;
            }
            else 
                flag = 0;
        }
        if(flag==1) {
            System.out.println("String is a palindrome");
        }
        else
            System.out.println("String is not a palindrome");
    }
    
}
