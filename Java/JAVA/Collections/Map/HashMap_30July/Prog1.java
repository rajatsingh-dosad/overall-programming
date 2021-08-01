
// Methods of Map Interface

import java.util.*;

class USCompanies {

    public static void main(String[] args) {
        
        Map<String,String> m = new HashMap<>();

        // 1) put()
        m.put("Amazon","Jeff Bezos");
        m.put("Microsoft","Bill Gates");
        m.put("Apple","Steve Jobs");
        m.put("SpaceX","Elon Musk");
        m.put("Facebook","Mark Zuckerburg");

        System.out.println(m);                  // returns entrySet

        
        // 2) get(key)
        System.out.println(m.get("SpaceX"));    
        System.out.println(m.get("Tesla"));    // If key is not present then it returns 'null'

        // 3) remove(key)
        m.remove("Apple");
        System.out.println(m);

        // 4) containsKey(key)      //return type is boolean
        System.out.println(m.containsKey("SpaceX"));

        // 5) containsValue(value)
        System.out.println(m.containsValue("Elon Musk"));

        // 6) isEmpty()             //return type is boolean
        System.out.println(m.isEmpty());

        // 7) size()
        System.out.println(m.size());

        // 8) keySet()
        System.out.println(m.keySet());

        // 9) values()
        System.out.println(m.values());

        // 10) entrySet()           // most important method - it returns set of key and value of map of type Map$Entry
        System.out.println(m.entrySet());
    }
}

/*

    OUTPUT: 
        {Apple=Steve Jobs, SpaceX=Elon Musk, Microsoft=Bill Gates, Amazon=Jeff Bezos, Facebook=Mark Zuckerburg}
        Elon Musk
        null
        {SpaceX=Elon Musk, Microsoft=Bill Gates, Amazon=Jeff Bezos, Facebook=Mark Zuckerburg}
        true
        false
        false
        4
        [SpaceX, Microsoft, Amazon, Facebook]
        [Elon Musk, Bill Gates, Jeff Bezos, Mark Zuckerburg]
        [SpaceX=Elon Musk, Microsoft=Bill Gates, Amazon=Jeff Bezos, Facebook=Mark Zuckerburg]
*/