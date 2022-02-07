
import java.util.*;

public class removeDuplicateChar {
    
    public static void main(String[] args) {
        
        String s = "RajatSinghDosaz";


        //Using normal two for loops

        // String s2 = "";
        // int flag;
        // for(int i=0;i<s.length();i++) {
        //     flag = 0;
        //     for(int j=i+1;j<s.length();j++) {
        //             if((s.charAt(i)==s.charAt(j))) {
        //                 flag = 1;
        //                 break;
        //             }
        //     }
        //     if(flag==0) {
        //         s2 =s2 + s.charAt(i);
        //     }    
        // }
         // System.out.println(s2);


        
        //Second Way is by using StringBuilder 
        // String s2 = "";
        // for(int i=0;i<s.length();i++) {

        //     char ch = s.charAt(i);
        //     int ind = s.indexOf(ch,i+1);
        //     if(ind == -1)
        //         s2 = s2+ch;
        // }
        // System.out.println(s2);
        


        //Using set INterface

        String s2 = "";
        Set<Character> set = new LinkedHashSet<Character>();

        for(int i=0;i<s.length();i++) {
            set.add(s.charAt(i));
        }

        for(Character c: set) {
            s2 = s2 + c;
        }

        System.out.println(s2);
        

    }
}
