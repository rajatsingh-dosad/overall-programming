
import java.util.*;

public class longestSubstrWihtouRepeatedChar {

    
    public static void main(String[] args) {
        
        String s = "abc daba";


        //Using Set Interface

        // Set<Character> set = new HashSet();
        // String longestTillNow = "";
        // String longestOverAll = "";
        // for(int i=0;i<s.length();i++) {
        //     char ch = s.charAt(i);
        //     if(set.contains(ch)) {
        //         longestTillNow = "";
        //         set.clear();
        //     }
        //     set.add(ch);
        //     longestTillNow += ch;
        //     if(longestTillNow.length() > longestOverAll.length()) {
        //         longestOverAll = longestTillNow;
        //     }
        // }
        // System.out.println("The longest substring is :"+longestOverAll);




        //Without using Set Interface
        String longestTillNow = "";
        String longestOverAll = "";
        String check = "";

        for(int i=0;i<s.length();i++) {

            char ch = s.charAt(i);

            if(check.contains(String.valueOf(ch))) {
                longestTillNow = "";
                check = "";
            }
            check += ch;
            longestTillNow +=ch;

            if(longestTillNow.length() > longestOverAll.length()) {
                longestOverAll = longestTillNow;
            }
        }
        System.out.println(longestOverAll);

    }

}
