
import java.util.*;

public class occurenceOfEachChar {

    public static void main(String[] args) {

        String s = "geeksforgeeks";

        // Using Collections

        // Map<Character,Integer> map = new HashMap();
        // for(int i=0;i<s.length();i++) {
        // char ch = s.charAt(i);
        // if(map.containsKey(ch)) {
        // map.put(ch,map.get(ch)+1);
        // }else
        // map.put(ch,1);
        // }
        // System.out.println("The occurence for characters are:");
        // for(Map.Entry<Character,Integer> e : map.entrySet()) {
        // System.out.println(e.getKey()+ " -> "+e.getValue());
        // }

        // Using forLoop
        String s2 = s;
        s = s.replace(" ", "");
        int i;
        for ( i = 0; i < s.length(); ) {
            int cnt = 1;
            i = 0;
            for (int j = 1; j < s.length(); j++) {

                if (s.charAt(i) == s.charAt(j)) {
                    cnt++;
                }
            }
                System.out.println(s.charAt(i) + " -> " + cnt);
                s = s.replace(String.valueOf(s.charAt(i)), "");
        }
        s = s2;
        System.out.println("The previous String was: " + s);
    }

}
