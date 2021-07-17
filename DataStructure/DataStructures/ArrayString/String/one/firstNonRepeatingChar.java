
import java.security.KeyStore.Entry;
import java.util.*;

public class firstNonRepeatingChar {

    public static void main(String[] args) {

        String s = "aabbcce";



        //1) Without using collections
        // for (int i = 0; i < s.length(); i++) {
            
        //     int flag = 1;
        //     for (int j = 0; j < s.length(); j++) {
                
        //         if(i!=j && (s.charAt(i)==s.charAt(j))) {        //we used i!=j becoz it should not compare with itself

        //                 flag = 0;
        //                 break;
        //         }
        //     }
        //     if(flag==1) {
        //         System.out.println("THe first non-repeating character is "+s.charAt(i));
        //         break;
        //     }
        // }




        //2) By using collection
        Map<Character,Integer> map = new HashMap<>();
        for(int i=0;i<s.length();i++) {
            
            char ch = s.charAt(i);

            if(map.containsKey(ch)) {
                map.put(ch,map.get(ch)+1);
            }else
                map.put(ch,1);
        }

        for(Map.Entry<Character,Integer> entrySet : map.entrySet()) {

            if(entrySet.getValue()==1) {
                    System.out.println("The first non-repeating character is "+entrySet.getKey());
                    break;
            }
        }

    }

}
