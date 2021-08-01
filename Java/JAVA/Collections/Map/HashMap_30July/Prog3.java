

//LinkedHashMap - it preserves the insertion order

import java.util.*;

class Prog3 {

    public static void main(String[] args) {
        
        Map<String,String> m = new LinkedHashMap<>();

        // 1) put()
        m.put("Amazon","Jeff Bezos");
        m.put("Microsoft","Bill Gates");
        m.put("Apple","Steve Jobs");
        m.put("SpaceX","Elon Musk");
        m.put("Facebook","Mark Zuckerburg");

        System.out.println(m);
    }
}
