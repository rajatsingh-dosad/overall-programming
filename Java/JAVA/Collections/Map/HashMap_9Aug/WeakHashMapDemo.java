
/*
    WeakHashMap is used when we want that once a object(key) doesn't have reference left it should be eligible for 
    garbage collection
*/


import java.util.*;

class WeakHashMapDemo {

    public static void main(String[] args) {
        
        Map<String,Integer> h = new WeakHashMap<>();

        String s1 = new String("PV Sindhu");
        String s2 = new String("Sushil Kumar");

        h.put(s1,2);
        h.put(s2,3);

        System.out.println(h);

        s1 = null;

        System.gc();

        System.out.println(h);
    }
}