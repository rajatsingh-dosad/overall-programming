

/*
    Using normal hashMap we were not able to insert duplicate keys as it used to 
    compare objects using equals() method and when keys used to be equal it used to 
    replace them.

    But using IdentityHashMap we are able to insert duplicates keys as well becoz it uses reference-equality
    to compare keys i.e it uses == operator instead of equals() method
 */
import java.util.*;

class IdentityHashMapDemo {

    public static void main(String[] args) {
        
        Map<String,Integer> h = new IdentityHashMap<>();

        String s1 = new String("Sushil Kumar");
        String s2 = new String("Sushil Kumar");

        h.put(s1,2);
        h.put(s2,3);


        System.out.println(h);
    }
}